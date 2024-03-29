# Copyright 2022 ByteDance Ltd. and/or its affiliates.
#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.

import re
import os
from os.path import dirname, join, realpath, isfile, relpath
import subprocess
import sys

include_pattern = re.compile(r'#include\s*["<](.*)[">]')

THIS_PATH = dirname(realpath(__file__))
ROOT_PATH = join(THIS_PATH, '..')
INCLUDE_DIR = join(ROOT_PATH, 'include')

main_entry = 'hercules/runtime/codegen_all_includes.h'

public_headers = {
    'hercules/runtime/algorithm/trie_ref.h',
    'hercules/runtime/bytes_hash.h',
    'hercules/runtime/c_backend_api.h',
    'hercules/runtime/c_runtime_api.h',
    'hercules/runtime/codegen_all_includes.h',
    'hercules/runtime/container.h',
    'hercules/runtime/container/_flat_hash_map.h',
    'hercules/runtime/container/tuple_ref.h',
    'hercules/runtime/container/cow_array_ref.h',
    'hercules/runtime/container/cow_map_ref.h',
    'hercules/runtime/container/dict_ref.h',
    'hercules/runtime/container/file_ref.h',
    'hercules/runtime/container/itertor_ref.h',
    'hercules/runtime/container/list_ref.h',
    'hercules/runtime/container/ndarray.h',
    'hercules/runtime/container/optional_ref.h',
    'hercules/runtime/container/set_ref.h',
    'hercules/runtime/container/string_view.h',
    'hercules/runtime/container/unicode_view.h',
    'hercules/runtime/container/user_data_interface.h',
    'hercules/runtime/container/user_data_ref.h',
    'hercules/runtime/data_type.h',
    'hercules/runtime/dlpack.h',
    'hercules/runtime/exceptions/exceptions.h',
    'hercules/runtime/generator/generator.h',
    'hercules/runtime/generator/generator_ref.h',
    'hercules/runtime/generic/generic_constructor_funcs.h',
    'hercules/runtime/generic/generic_funcs.h',
    'hercules/runtime/generic/generic_hlo_arith_funcs.h',
    'hercules/runtime/generic/generic_list_funcs.h',
    'hercules/runtime/global_type_index.h',
    'hercules/runtime/logging.h',
    'hercules/runtime/memory.h',
    'hercules/runtime/memory_pool.h',
    'hercules/runtime/hash/hash.h',
    'hercules/runtime/native_object_maker.h',
    'hercules/runtime/native_func_maker.h',
    'hercules/runtime/object.h',
    'hercules/runtime/py_args.h',
    'hercules/runtime/regex/regex_ref.h',
    'hercules/runtime/runtime_port.h',
    'hercules/runtime/runtime_value.h',
    'hercules/runtime/singleton.h',
    'hercules/runtime/spin_lock.h',
    'hercules/runtime/unicodelib/py_unicodeobject.h',
    'hercules/runtime/unicodelib/unicode_normal_form.h',
    'hercules/runtime/unicodelib/unicode_ops.h',
    'hercules/runtime/utf8_util.h',
    'hercules/runtime/container/string_helper.h',
    'hercules/runtime/container/unicode_helper.h',
    'hercules/runtime/container/unicode.h',
    'hercules/runtime/container/string.h',
    'hercules/runtime/container/string_core.h',
    'hercules/runtime/jemalloc_helper.h',
    'hercules/runtime/container/opaque_object.h',
    'hercules/runtime/container/container_slice_helper.h',
    'hercules/runtime/generic/ft_constructor_funcs.h',
    'hercules/runtime/ft_container.h',
    'hercules/runtime/container/ft_list.h',
    'hercules/runtime/container/ft_set.h',
    'hercules/runtime/container/ft_dict.h',
    'hercules/runtime/container/enumerate.h',
    'hercules/runtime/generic/generic_unpack.h',
    'hercules/runtime/container/generic_enumerate.h',
    'hercules/runtime/container/generic_zip.h',
    'hercules/runtime/container/builtins_zip.h',
    'hercules/runtime/demangle.h',
    'hercules/runtime/_is_comparable.h',
    'hercules/runtime/_is_hashable.h',
    'hercules/runtime/builtins_modules/_randommodule.h',
    'hercules/runtime/builtins_modules/_longobject.h',
    'hercules/runtime/builtins_modules/_floatobject.h',
    'hercules/runtime/container/kwargs_ref.h',
    'hercules/runtime/generic/generic_str_funcs.h',
    'hercules/runtime/container/iterator_adapter.h',
    'hercules/runtime/str_escape.h',
    'hercules/runtime/_almost_equal.h',
    'hercules/runtime/uchar_util.h',
    'hercules/runtime/py_commons/pyhash.h',
    'hercules/runtime/pypi/kernel_farmhash.h',
    'hercules/runtime/container/_list_helper.h',
    'hercules/runtime/_pdqsort.h',
    'hercules/runtime/half.h',
    'hercules/runtime/half-inl.h',
    'hercules/runtime/type_helper_macros.h',
}


def analysis_include(target_file):
    checked_files = set([target_file])
    q = [target_file]
    dependencies = {}

    while q:
        checking_file = q.pop(-1)
        with open(join(INCLUDE_DIR, checking_file)) as f:
            for line in f:
                include_entry = include_pattern.search(line.strip())
                if not include_entry:
                    continue
                include_entry = include_entry.group(1)
                if include_entry.startswith('.'):
                    include_entry = relpath(join(dirname(checking_file), include_entry))
                entry_path = join(INCLUDE_DIR, include_entry)
                if not isfile(entry_path):
                    # outside-project dependency
                    continue

                if checking_file not in dependencies:
                    dependencies[checking_file] = []
                dependencies[checking_file].append(include_entry)

                if include_entry not in checked_files:
                    checked_files.add(include_entry)
                    q.append(include_entry)

    return checked_files, dependencies


def show_dependencies(dependencies):
    for h, incs in dependencies.items():
        print(h)
        for inc in incs:
            print('\t\t', inc)
        print()

    try:
        render_dependency_graph(dependencies)
    except Exception as e:
        print('Rendering graph failed.')
        print(repr(e))


def render_dependency_graph(dependencies):
    import graphviz

    dot = graphviz.Digraph(format='png', node_attr={'shape': 'box'})

    for h, incs in dependencies.items():
        for inc in incs:
            dot.edge(h, inc)

    png_path = join(THIS_PATH, 'includes')
    dot.render(png_path)
    print('Dependency graph rendered to {}.png successfully.'.format(png_path))
    print()


def check_public_stability():
    proc = subprocess.Popen(['git',
                             'diff',
                             '--cached',
                             'origin/main',
                             '--numstat',
                             '--diff-filter=ACMRT'],
                            stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT)
    (git_diff, _) = proc.communicate()
    git_diff = git_diff.decode().strip().split('\n')
    unstable_changes = []
    for diff in git_diff:
        diff = diff.strip(' \r\n\t')
        if len(diff) == 0:
            continue
        add, minus, f = diff.split(maxsplit=2)
        if f.startswith('include/'):
            f = f[8:]
        if f in public_headers and minus != '0':
            unstable_changes.append(f)
    return unstable_changes


def main():
    # skip main branch
    proc = subprocess.Popen(['git', 'rev-parse', '--abbrev-ref', 'HEAD'],
                            stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT)
    (branch, _) = proc.communicate()
    branch = branch.decode().strip()
    if branch == 'main':
        print("skip main branch...", file=sys.stdout)
        sys.exit(0)

    print(f"check branch diff: {branch} vs main", file=sys.stdout)

    includes, dependencies = analysis_include(main_entry)

    if len(sys.argv) != 2:
        print('Wrong num of arguments.')
        print('argument should be either "--show", "--check-dependency" or "--check-stability"')
        sys.exit(1)

    mode = sys.argv[1]

    if mode == '--show':
        show_dependencies(dependencies)

    elif mode == '--check-dependency':
        non_public_headers = includes.difference(public_headers)
        if non_public_headers:
            print('[ERROR] Non-public headers found:', non_public_headers, file=sys.stderr)
            print('details:', file=sys.stderr)
            for header in non_public_headers:
                for h, incs in dependencies.items():
                    if header in incs:
                        print('"{}" includes "{}"'.format(h, header), file=sys.stderr)
            sys.exit(-1)

    elif mode == '--check-stability':
        unstable_changes = check_public_stability()
        if unstable_changes:
            print('[WARNING] Minus changes on public headers:', unstable_changes, file=sys.stderr)
            sys.exit(0)


if __name__ == '__main__':
    main()
