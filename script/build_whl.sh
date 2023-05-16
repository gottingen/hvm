#! /usr/bin/env bash
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

set -xue
set -o pipefail

export BUILD_TESTING=OFF
export BUILD_BENCHMARK=OFF
export CPPFLAGS="-D_GLIBCXX_USE_CXX11_ABI=0"

THIS_PATH=$(
    cd $(dirname "$0")
    pwd
)

ROOT_PATH=${THIS_PATH}/..
BUILD_PATH=${ROOT_PATH}/lib
OUTPUT_PATH=${ROOT_PATH}/output
OUTPUT_LIB_PATH=${OUTPUT_PATH}/hvm/lib

function set_build_info() {
  local branch
  local short_commit_id
  local init_py_file=$1
  branch=$(git rev-parse --abbrev-ref HEAD)
  short_commit_id=$(git rev-parse --short HEAD)

  if [ "$(uname)" == "Darwin" ]; then
    sed -i -e "s:__branch__ = None:__branch__ = '${branch}':g" "${init_py_file}"
    sed -i -e "s:__commit_id__ = None:__commit_id__ = '${short_commit_id}':g" "${init_py_file}"
  else
    sed -i "s:__branch__ = None:__branch__ = '${branch}':g" "${init_py_file}"
    sed -i "s:__commit_id__ = None:__commit_id__ = '${short_commit_id}':g" "${init_py_file}"
  fi
}

# mkdir lib
if [ -d "${BUILD_PATH}" ]; then
    rm -rf "${BUILD_PATH}"
fi
mkdir -p "${BUILD_PATH}"

# mkdir output
if [ -d "${OUTPUT_PATH}" ]; then
    rm -rf "${OUTPUT_PATH}"
fi
mkdir -p "${OUTPUT_PATH}"


# build hvm
cd "${BUILD_PATH}"

cmake ../ -DCMAKE_INSTALL_PREFIX=${OUTPUT_PATH}
make -j 4
make install

# set build info
set_build_info "${OUTPUT_PATH}/hvm/__init__.py"

# clean __pycache__
find ${OUTPUT_PATH} -name "__pycache__" -type d -print
find ${OUTPUT_PATH} -name "__pycache__" -type d -print | xargs rm -rf

# install wheel
pip3 install wheel

# build whl
cd ${OUTPUT_PATH} && python3 setup.py clean
cd ${OUTPUT_PATH} && python3 setup.py bdist_wheel $@
