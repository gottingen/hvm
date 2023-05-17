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

import hercules


def jit(compiling_obj, *args, engine=None, **kwargs):
    """Entry function for compiling. Given a python object including function,
    simple class, compile it to a hercules object which mostly
    keep the behavior of the original python object.

    Parameters
    ----------
    compiling_obj : ([function, class])
        [input python object to be compiled.]
    args
        not used
    engine : [str, None]
        'torch' or 'pytorch' or None
    kwargs
        keyword arguments passed into different script engine
    Returns
    -------
    obj : OpKernel
        the compiled object.
    """
    from . import backend
    if isinstance(compiling_obj, hercules.pipeline.ops.OpKernel):
        return compiling_obj
    if getattr(compiling_obj, "__FLAG_COMPILED_OBJECT__", None) is hercules.toolchain.FLAG_COMPILED_OBJECT:
        return compiling_obj
    if isinstance(engine, str):
        engine = engine.lower()
    if engine in ('tensorflow',):
        return backend.tensorflow.script(compiling_obj, *args, **kwargs)
    else:
        if backend.tensorflow.check(compiling_obj):
            return backend.tensorflow.script(compiling_obj, *args, **kwargs)
        return hercules.toolchain.script(compiling_obj, *args, **kwargs)


