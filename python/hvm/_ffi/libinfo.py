# Copyright 2023 Hercules author.
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

"""Library information."""
import sys
import os


def split_env_var(env_var, split):
    """Splits environment variable string.

    Parameters
    ----------
    env_var : str
        Name of environment variable.

    split : str
        String to split env_var on.

    Returns
    -------
    splits : list(string)
        If env_var exists, split env_var. Otherwise, empty list.
    """
    if os.environ.get(env_var, None):
        return [p.strip() for p in os.environ[env_var].split(split)]
    return []


def make_lib_name(name):
    if len(name) == 0:
        raise RuntimeError('check_lib_name name can not be empty')

    if name.startswith('lib'):
        if name.endswith('.so') or name.endswith('.dylib') or name.endswith('.dll'):
            return name
    else:
        name = 'lib' + name

    if sys.platform.startswith('win32'):
        return name + '.dll'
    elif sys.platform.startswith('darwin'):
        return name + '.dylib'
    else:
        return name + '.so'


def find_lib_path(name=None, search_path=None, optional=False):
    """Find dynamic library files.

    Parameters
    ----------
    name : str or list of str
        List of names to be found.

    search_path : str or list of str
        List of path to found libraries.
    optional : bool true or optional

    Returns
    -------
    lib_path : list(string)
        List of all found path to the libraries
    """

    if name is None:
        raise RuntimeError('find_lib_path name can not be None')

    ffi_dir = os.path.dirname(os.path.realpath(os.path.expanduser(__file__)))
    source_dir = os.path.join(ffi_dir, "..", "..", "..")
    install_lib_dir = os.path.join(ffi_dir, "..", "lib")

    dll_path = []

    if search_path is not None:
        if isinstance(search_path, list):
            dll_path = dll_path + search_path
        else:
            dll_path.append(search_path)

    if os.environ.get('HVM_LIBRARY_PATH', None):
        dll_path.append(os.environ['HVM_LIBRARY_PATH'])

    if sys.platform.startswith('linux'):
        dll_path.extend(split_env_var('LD_LIBRARY_PATH', ':'))
        dll_path.extend(split_env_var('PATH', ':'))
    elif sys.platform.startswith('darwin'):
        dll_path.extend(split_env_var('DYLD_LIBRARY_PATH', ':'))
        dll_path.extend(split_env_var('PATH', ':'))
    elif sys.platform.startswith('win32'):
        dll_path.extend(split_env_var('PATH', ';'))

    # Pip lib directory
    dll_path.append(os.path.join(ffi_dir, ".."))
    # Default cmake build directory
    dll_path.append(os.path.join(source_dir, "build"))
    dll_path.append(os.path.join(source_dir, "build", "Release"))
    # Default make build directory
    dll_path.append(os.path.join(source_dir, "lib"))

    dll_path.append(install_lib_dir)

    if os.path.isdir(source_dir):
        dll_path.append(os.path.join(source_dir, "web", "dist", "wasm"))
        dll_path.append(os.path.join(source_dir, "web", "dist"))

    dll_path = [os.path.realpath(x) for x in dll_path]

    if isinstance(name, list):
        lib_dll_path = []
        for n in name:
            lib_dll_path += [os.path.join(p, make_lib_name(n)) for p in dll_path]
    else:
        lib_dll_path = [os.path.join(p, make_lib_name(name)) for p in dll_path]
    runtime_dll_path = []

    # try to find lib_dll_path
    lib_found = [p for p in lib_dll_path if os.path.exists(p) and os.path.isfile(p)]
    lib_found += [p for p in runtime_dll_path if os.path.exists(p) and os.path.isfile(p)]

    if not lib_found:
        message = ('Cannot find the files.\n' +
                   'List of candidates:\n' +
                   str('\n'.join(lib_dll_path + runtime_dll_path)))
        if not optional:
            raise RuntimeError(message)
        return None
    return lib_found


def find_include_path(name=None, search_path=None, optional=False):
    """Find header files for C compilation.

    Parameters
    ----------
    name : list of str
        List of directory names to be searched.

    Returns
    -------
    include_path : list(string)
        List of all found paths to header files.
    """
    ffi_dir = os.path.dirname(os.path.abspath(os.path.expanduser(__file__)))
    source_dir = os.path.join(ffi_dir, "..", "..", "..")
    install_include_dir = os.path.join(ffi_dir, "..", "..", "..", "..")
    install_root = os.path.join(ffi_dir, "..")

    third_party_dir = os.path.join(source_dir, "3rdparty")

    header_path = []

    if os.environ.get('HERCULES_INCLUDE_PATH', None):
        header_path.append(os.environ['HERCULES_INCLUDE_PATH'])

    header_path.append(install_include_dir)
    header_path.append(source_dir)
    header_path.append(third_party_dir)
    header_path.append(install_root)

    header_path = [os.path.abspath(x) for x in header_path]
    if search_path is not None:
        if isinstance(search_path, list):
            header_path = header_path + search_path
        else:
            header_path.append(search_path)
    if name is not None:
        if isinstance(name, list):
            hercules_include_path = []
            for n in name:
                hercules_include_path += [os.path.join(p, n) for p in header_path]
        else:
            hercules_include_path = [os.path.join(p, name) for p in header_path]
        dlpack_include_path = []
        include_found = [p for p in hercules_include_path if os.path.exists(p) and os.path.isdir(p)]
    else:
        hercules_include_path = [os.path.join(p, 'include') for p in header_path]
        dlpack_include_path = [os.path.join(p, 'dlpack/include') for p in
                               header_path]

        # try to find include path
        include_found = [p for p in hercules_include_path if os.path.exists(p) and os.path.isdir(p)]
        include_found += [p for p in dlpack_include_path if os.path.exists(p)
                          and os.path.isdir(p)]

    if not include_found:
        message = ('Cannot find the files.\n' +
                   'List of candidates:\n' +
                   str('\n'.join(hercules_include_path + dlpack_include_path)))
        if not optional:
            raise RuntimeError(message)
        return None

    return include_found
