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

import os
import re
import subprocess

try:
    from setuptools import setup, find_packages, Extension
except ImportError:
    from distutils.core import setup, Extension

NAME = 'hvm'
VERSION = None
BASE_DIR = os.path.dirname(os.path.abspath(__file__))

try:
    version_file_path = "hvm/__init__.py"
    with open(version_file_path) as f:
        version, = re.findall('__version__ = "(.*)"', f.read())
    VERSION = version

except:
    raise ValueError(
        'Failed to get version from {}.'.format(version_file_path))



def install(package):
    # https://stackoverflow.com/questions/12332975/installing-python-module-within-code
    import pip
    if hasattr(pip, 'main'):
        pip.main(['install', package])


def package_files(directory, f=None):
    if isinstance(directory, (list, tuple)):
        l = [package_files(d, f=f) for d in directory]
        return [item for sublist in l for item in sublist]
    directory = os.path.join(BASE_DIR, directory)
    paths = []
    for (path, directories, filenames) in os.walk(directory):
        for filename in filenames:
            if callable(f):
                if f(filename):
                    paths.append(os.path.join('..', path, filename))
                continue
            if isinstance(f, str):
                if re.match(f, filename):
                    paths.append(os.path.join('..', path, filename))
                continue
            paths.append(os.path.join('..', path, filename))
    # print(paths)
    return paths


with open('requirements.txt') as f:
    required = f.read().splitlines()

setup(
    name=NAME,
    version=VERSION,
    description='''Static Python AOT Compiler''',
    author='EA Team',
    author_email='lijippy@163.com',
    url='https://github.com/gottingen/hvm',
    packages=['hvm'],
    package_data={
        'hvm': package_files(['hvm']),
    },
    install_requires=required,
    python_requires='>=3.8')
