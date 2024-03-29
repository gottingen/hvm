# Copyright 2022 ByteDance Ltd. and/or its affiliates.
#
# Acknowledgement: The structure of the PackedFunc is inspired by TVM.
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

# pylint: disable=invalid-name, unused-import
"""Packed Function namespace."""
import ctypes
from .._ffi._selector import _set_class_packed_func
from .._ffi._selector import PackedFuncBase

PackedFuncHandle = ctypes.c_void_p


class PackedFunc(PackedFuncBase):
    """The PackedFunc object used in HVM.

    Function plays an key role to bridge front and backend in HVM.
    Function provide a type-erased interface, you can call function with positional arguments.

    The compiled module returns Function.
    HVM backend also registers and exposes its API as Functions.

    The following are list of common usage scenario of hvm.runtime.PackedFunc.

    - Automatic exposure of C++ API into python
    - To call PackedFunc from python side
    - To call python callbacks to inspect results in generated code
    - Bring python hook into C++ backend

    See Also
    --------
    hvm.register_func: How to register global function.
    hvm.get_global_func: How to get global function.
    """


_set_class_packed_func(PackedFunc)
