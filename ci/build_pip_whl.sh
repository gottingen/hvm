#! /usr/bin/env bash
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

set -xue
set -o pipefail

export BUILD_TESTING=OFF
export BUILD_BENCHMARK=OFF
export CPPFLAGS="-D_GLIBCXX_USE_CXX11_ABI=1"

THIS_PATH=$(
    cd $(dirname "$0")
    pwd
)

ROOT_PATH=${THIS_PATH}/..
BUILD_PATH=${ROOT_PATH}/lib
OUTPUT_PATH=${ROOT_PATH}/output

# clean output

if [ -d "${OUTPUT_PATH}" ]; then
    rm -rf "${OUTPUT_PATH}"
fi

mkdir -p "${OUTPUT_PATH}"


cp -rf ${ROOT_PATH}/python/hvm ${OUTPUT_PATH}/
cp -rf ${ROOT_PATH}/python/requirements.txt ${OUTPUT_PATH}/
cp -rf ${ROOT_PATH}/python/setup.py ${OUTPUT_PATH}/


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


# prebuild hvm_script_api.so
if [ "$(uname)" == "Darwin" ]; then
    cd ${OUTPUT_PATH} && python3 -c 'import hvm'
else
    PYTHON_INC_PATH=$(python3 -c 'from sysconfig import get_paths; print(get_paths()["include"]);')
    g++ -std=c++11 -fPIC -shared -O2 -I"${PYTHON_INC_PATH}" -I"/usr/local/include" -o "${OUTPUT_PATH}/hvm/_ffi/_c_ext/hvm_script_api.so" "${ROOT_PATH}/python/hvm/_ffi/_c_ext/fast_c_api.cc"
fi

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
