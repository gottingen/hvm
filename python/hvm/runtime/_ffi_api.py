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
"""FFI APIs for hvm.runtime"""
from .. import _ffi

# The implementations below are default ones when the corresponding
# functions are not available in the runtime only mode.
# They will be overriden via _init_api to the ones registered
# via TVM_REGISTER_GLOBAL in the compiler mode.


def AsRepr(obj):
    return obj.type_key() + "(" + obj.handle.value + ")"


def NodeListAttrNames(obj):
    return lambda x: 0


def NodeGetAttr(obj, name):
    raise AttributeError()


# Exports functions registered via TVM_REGISTER_GLOBAL with the "runtime" prefix.
# e.g. TVM_REGISTER_GLOBAL("runtime.ModuleLoadFromFile")
_ffi._init_api("runtime", __name__)
