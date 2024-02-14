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
import unittest
from typing import List, Tuple
from typing import Any
import numpy
import hvm


class TestHvmNdarray(unittest.TestCase):
    def test_constructor(self):
        # 1) construct from 1d list with shape
        tensor = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [2, 2, 2], "int32")
        print(tensor)
        np_array = tensor.asnumpy()
        self.assertEqual(np_array.shape, (2, 2, 2))
        self.assertEqual(np_array[1][1][0], 7)

        # 2) construct from nd list with empty shape, return ndarray with shape of list
        tensor = hvm.NDArray([[1, 2, 3], [4, 5, 6]], [], "int32")
        print(tensor)
        np_array = tensor.asnumpy()
        self.assertEqual(np_array.shape, (2, 3))
        self.assertEqual(np_array[1][1], 5)

        tensor = hvm.NDArray([1, 2, 3, 4], [], "int32")
        print(tensor)
        np_array = tensor.asnumpy()
        self.assertEqual(np_array.shape, (4,))
        self.assertEqual(np_array[3], 4)

        tensor = hvm.NDArray([], [2, 3], "int32")
        print(tensor)
        np_array = tensor.asnumpy()
        self.assertEqual(np_array.shape, (2, 3))

    def test_construct_return_obj(self):
        @hvm.script
        def construct_return() -> hvm.NDArray:
            return hvm.NDArray([1, 2, 3, 4], [2, 2], "int32")

        t_array = construct_return()
        print(t_array)
        self.assertTrue(isinstance(t_array, hvm.NDArray))
        self.assertEqual(t_array.dtype(), "int32")

    def test_args_return_obj(self):
        def args_return_obj(t: hvm.NDArray) -> hvm.NDArray:
            return t

        args_return_obj = hvm.script(args_return_obj)
        a_array = hvm.NDArray([1, 2, 3, 4], [2, 2], "int32")
        b_array = args_return_obj(a_array)

        print(b_array)
        self.assertTrue(isinstance(b_array, hvm.NDArray))
        self.assertEqual(b_array.dtype(), "int32")

    def test_ndarray_to_list(self):
        def ndarray_to_list(nd: hvm.NDArray) -> hvm.List:
            return nd.to_list()

        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        a_list = ndarray_to_list(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

        to_list_op = hvm.script(ndarray_to_list)
        a_list = to_list_op(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

    def test_general_to_list(self):
        def general_to_list(nd: Any) -> hvm.List:
            return nd.to_list()

        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        a_list = general_to_list(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

        to_list_op = hvm.script(general_to_list)
        a_list = to_list_op(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

    def test_ndarray_tolist(self):
        def ndarray_tolist(nd: hvm.NDArray) -> List:
            return nd.tolist()

        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        a_list = ndarray_tolist(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

        tolist_op = hvm.script(ndarray_tolist)
        a_list = tolist_op(nd)
        self.assertEqual(a_list[2][1], 6)

    def test_general_tolist(self):
        def general_tolist(nd: Any) -> hvm.List:
            return nd.tolist()

        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        a_list = general_tolist(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

        tolist_op = hvm.script(general_tolist)
        a_list = tolist_op(nd)
        print(a_list)
        self.assertEqual(a_list[2][1], 6)

    def test_numpy(self):
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        arr = nd.asnumpy()
        self.assertEqual(arr[2][1], 6)

        arr1 = numpy.random.rand(2, 3)
        nd1 = hvm.NDArray([], arr1.shape, str(arr1.dtype))
        nd1.from_numpy(arr1)
        arr2 = nd1.asnumpy()
        self.assertEqual(arr1[0][0], arr2[0][0], 0.0005)

    def test_ndarray_shape(self):
        def ndarray_shape(nd: hvm.NDArray) -> hvm.List:
            return nd.shape()

        ndarray_shape_op = hvm.script(ndarray_shape)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        res = ndarray_shape(nd)
        op_res = ndarray_shape_op(nd)
        self.assertSequenceEqual([3, 2], res)
        self.assertSequenceEqual([3, 2], op_res)

    def test_general_shape(self):
        def general_shape(nd: Any) -> hvm.List:
            return nd.shape()

        general_shape_op = hvm.script(general_shape)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        res = general_shape(nd)
        op_res = general_shape_op(nd)
        self.assertSequenceEqual([3, 2], res)
        self.assertSequenceEqual([3, 2], op_res)

    def test_ndarray_dtype(self):
        def ndarray_dtype(nd: hvm.NDArray) -> str:
            return nd.dtype()

        ndarray_dtype_op = hvm.script(ndarray_dtype)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        res = ndarray_dtype(nd)
        op_res = ndarray_dtype_op(nd)
        self.assertEqual(res, op_res)

    def test_general_dtype(self):
        def general_dtype(nd: Any) -> str:
            return nd.dtype()

        general_dtype_op = hvm.script(general_dtype)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        res = general_dtype(nd)
        op_res = general_dtype_op(nd)
        self.assertEqual(res, op_res)

    def test_ndarray_dim(self):
        def ndarray_dim(a: hvm.NDArray) -> int:
            return a.dim()

        ndarray_dim_op = hvm.script(ndarray_dim)
        nd = hvm.NDArray(0, [3, 2], "int32")
        py_ret = ndarray_dim(nd)
        tx_ret = ndarray_dim_op(nd)
        self.assertEqual(py_ret, tx_ret)

    def test_general_dim(self):
        def general_dim(a: Any) -> int:
            return a.dim()

        general_dim_op = hvm.script(general_dim)
        nd = hvm.NDArray(0, [3, 2], "int32")
        py_ret = general_dim(nd)
        tx_ret = general_dim_op(nd)
        self.assertEqual(py_ret, tx_ret)

    def test_ndarray_len(self):
        def ndarray_len(nd: hvm.NDArray) -> int:
            return len(nd)

        script_len = hvm.script(ndarray_len)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        self.assertEqual(ndarray_len(nd), 3)
        self.assertEqual(script_len(nd), 3)

    def test_general_len(self):
        def general_len(nd: Any) -> int:
            return len(nd)

        script_len = hvm.script(general_len)
        nd = hvm.NDArray([1, 2, 3, 4, 5, 6], [3, 2], "int32")
        self.assertEqual(general_len(nd), 3)
        self.assertEqual(script_len(nd), 3)

    def test_ndarray_get_item(self):
        def ndarray_get_item(nd: hvm.NDArray, index: int) -> Any:
            return nd[index]

        scripted_get_item = hvm.script(ndarray_get_item)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [8], "int32")
        self.assertEqual(ndarray_get_item(nd1, 2), 3)
        self.assertEqual(scripted_get_item(nd1, 2), 3)
        nd2 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        self.assertEqual(ndarray_get_item(nd2, 2).to_list(), [5, 6])
        self.assertEqual(scripted_get_item(nd2, 2).to_list(), [5, 6])
        # test share
        nd3 = ndarray_get_item(nd2, 2)
        nd3[0] = 10
        self.assertEqual(nd2[2][0], 10)
        nd4 = scripted_get_item(nd2, 2)
        nd4[1] = 11
        self.assertEqual(nd2[2][1], 11)
        self.assertEqual(nd3[1], 11)
        nd5 = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")[::2]
        self.assertEqual(ndarray_get_item(nd5, 1), 3)
        self.assertEqual(scripted_get_item(nd5, 1), 3)

    def test_general_get_item(self):
        def general_get_item(nd: Any, index: int) -> Any:
            return nd[index]

        scripted_get_item = hvm.script(general_get_item)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        self.assertEqual(scripted_get_item(nd1, 1).to_list(), [3, 4])
        nd2 = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")[::2]
        self.assertEqual(general_get_item(nd2, 1), 3)
        self.assertEqual(scripted_get_item(nd2, 1), 3)

    def test_ndarray_set_item(self):
        def ndarray_set_item(nd: hvm.NDArray, index: int, item: Any) -> None:
            nd[index] = item

        scripted_set_item = hvm.script(ndarray_set_item)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        ndarray_set_item(nd1, 0, [10, 11])
        self.assertEqual(nd1[0].to_list(), [10, 11])
        scripted_set_item(nd1, 1, [12, 13])
        self.assertEqual(nd1[1].to_list(), [12, 13])
        ndarray_set_item(nd1, 2, hvm.NDArray([14, 15], [2], "int64"))
        self.assertEqual(nd1[2].to_list(), [14, 15])
        scripted_set_item(nd1, 3, hvm.NDArray([16, 17], [2], "float64"))
        self.assertEqual(nd1[3].to_list(), [16, 17])

        nd2 = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")[::2]
        ndarray_set_item(nd2, 1, 4)
        self.assertEqual(nd2.to_list(), [1, 4, 5])
        scripted_set_item(nd2, 1, 5)
        self.assertEqual(nd2.to_list(), [1, 5, 5])

    def test_general_set_item(self):
        def general_set_item(nd: Any, index: int, item: Any) -> None:
            nd[index] = item

        scripted_set_item = hvm.script(general_set_item)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [2, 2, 2], "int32")
        general_set_item(nd1, 0, [[10, 11], [12, 13]])
        self.assertEqual(nd1[0].to_list(), [[10, 11], [12, 13]])
        scripted_set_item(nd1, 1, hvm.NDArray([14, 15, 16, 17], [2, 2], "float64"))
        self.assertEqual(nd1[1].to_list(), [[14, 15], [16, 17]])

        nd2 = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")[::2]
        general_set_item(nd2, 1, 4)
        self.assertEqual(nd2.to_list(), [1, 4, 5])
        scripted_set_item(nd2, 1, 5)
        self.assertEqual(nd2.to_list(), [1, 5, 5])

    def test_ndarray_get_slice(self):
        def ndarray_get_slice(nd: hvm.NDArray, begin: int, end: int, step: int = 1) -> Any:
            if step == 1:
                return nd[begin:end]
            else:
                return nd[begin:end:step]

        script_get_slice = hvm.script(ndarray_get_slice)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        self.assertEqual(ndarray_get_slice(nd1, 0, 4, 2).to_list(), [[1, 2], [5, 6]])
        self.assertEqual(ndarray_get_slice(nd1, 0, 3).to_list(), [[1, 2], [3, 4], [5, 6]])
        self.assertEqual(script_get_slice(nd1, 1, 4, 2).to_list(), [[3, 4], [7, 8]])
        self.assertEqual(script_get_slice(nd1, 1, 2, 3).to_list(), [[3, 4]])
        self.assertEqual(script_get_slice(nd1, 1, 3, 1).to_list(), [[3, 4], [5, 6]])

    def test_general_get_slice(self):
        def general_get_slice(nd: Any, begin: int, end: int, step: int = 1) -> Any:
            if step == 1:
                return nd[begin:end]
            else:
                return nd[begin:end:step]

        script_get_slice = hvm.script(general_get_slice)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        self.assertEqual(general_get_slice(nd1, 0, 4, 2).to_list(), [[1, 2], [5, 6]])
        self.assertEqual(general_get_slice(nd1, 0, 3).to_list(), [[1, 2], [3, 4], [5, 6]])
        self.assertEqual(script_get_slice(nd1, 1, 4, 2).to_list(), [[3, 4], [7, 8]])
        self.assertEqual(script_get_slice(nd1, 1, 2, 3).to_list(), [[3, 4]])
        self.assertEqual(script_get_slice(nd1, 1, 3, 1).to_list(), [[3, 4], [5, 6]])

    def test_ndarray_set_slice(self):
        def ndarray_set_slice(nd: hvm.NDArray, begin: int, end: int, item: Any) -> None:
            nd[begin:end] = item

        script_set_slice = hvm.script(ndarray_set_slice)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        ndarray_set_slice(nd1, 0, 2, [[10, 11], [12, 13]])
        self.assertEqual(nd1[0:2].to_list(), [[10, 11], [12, 13]])
        script_set_slice(nd1, 2, 4, [[14, 15], [16, 17]])
        self.assertEqual(nd1[2:4].to_list(), [[14, 15], [16, 17]])
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        ndarray_set_slice(nd1, 0, 2, hvm.NDArray([10, 11, 12, 13], [2, 2], "int64"))
        self.assertEqual(nd1[0:2].to_list(), [[10, 11], [12, 13]])
        script_set_slice(nd1, 2, 4, hvm.NDArray([14, 15, 16, 17], [2, 2], "float64"))
        self.assertEqual(nd1[2:4].to_list(), [[14, 15], [16, 17]])
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        nd2 = nd1[1:4:2]
        script_set_slice(nd1, 0, 2, nd2)
        self.assertEqual(nd1.to_list(), [[3, 4], [7, 8], [5, 6], [7, 8]])

    def test_general_set_slice(self):
        def general_set_slice(nd: Any, begin: int, end: int, item: Any) -> None:
            nd[begin:end] = item

        script_set_slice = hvm.script(general_set_slice)
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        script_set_slice(nd1, 2, 4, [[14, 15], [16, 17]])
        self.assertEqual(nd1[2:4].to_list(), [[14, 15], [16, 17]])
        nd1 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        script_set_slice(nd1, 2, 4, hvm.NDArray([14, 15, 16, 17], [2, 2], "float64"))
        self.assertEqual(nd1[2:4].to_list(), [[14, 15], [16, 17]])

    def test_type_conversion(self):
        nd1 = hvm.NDArray([0, 0, 0, 0, 0, 0, 0, 0], [4, 2], "uint8")
        nd2 = hvm.NDArray([1, 2, 3, 4, 5, 6, 7, 8], [4, 2], "int32")
        nd1[:] = nd2
        self.assertEqual(nd1.to_list(), [[1, 2], [3, 4], [5, 6], [7, 8]])

    def test_ndarray_transpose(self):
        def ndarray_transpose(nd: hvm.NDArray, axes: Any) -> hvm.NDArray:
            if axes is None:
                return nd.transpose()
            else:
                return nd.transpose(axes)

        script_transpose = hvm.script(ndarray_transpose)
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        # nd = hvm.NDArray([0,1,2,3,4,5,6,7,8,9,10,11], [2,2,3], "int32")
        self.assertEqual(ndarray_transpose(y, [1, 0, 2]).to_list(), x.transpose([1, 0, 2]).tolist())
        self.assertEqual(script_transpose(y, [1, 0, 2]).to_list(), x.transpose([1, 0, 2]).tolist())
        self.assertEqual(ndarray_transpose(y, [1, 2, 0]).to_list(), x.transpose([1, 2, 0]).tolist())
        self.assertEqual(script_transpose(y, [1, 2, 0]).to_list(), x.transpose([1, 2, 0]).tolist())
        self.assertEqual(ndarray_transpose(y, None).to_list(), x.transpose().tolist())
        self.assertEqual(script_transpose(y, None).to_list(), x.transpose().tolist())

        # more test
        shape = [2, 3, 4, 5]
        x = numpy.arange(120).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        self.assertEqual(ndarray_transpose(
            y, [0, 3, 2, 1]).to_list(), x.transpose([0, 3, 2, 1]).tolist())
        self.assertEqual(script_transpose(
            y, [0, 3, 2, 1]).to_list(), x.transpose([0, 3, 2, 1]).tolist())
        self.assertEqual(ndarray_transpose(
            y, [0, 3, 1, 2]).to_list(), x.transpose([0, 3, 1, 2]).tolist())
        self.assertEqual(script_transpose(
            y, [0, 3, 1, 2]).to_list(), x.transpose([0, 3, 1, 2]).tolist())
        self.assertEqual(ndarray_transpose(
            y, [1, 3, 0, 2]).to_list(), x.transpose([1, 3, 0, 2]).tolist())
        self.assertEqual(script_transpose(
            y, [1, 3, 0, 2]).to_list(), x.transpose([1, 3, 0, 2]).tolist())

        # tuple as parameter
        shape = [2, 3, 4, 5]
        x = numpy.arange(120).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        self.assertEqual(ndarray_transpose(y, (0, 3, 2, 1)).to_list(),
                         x.transpose([0, 3, 2, 1]).tolist())
        self.assertEqual(script_transpose(y, (0, 3, 2, 1)).to_list(),
                         x.transpose([0, 3, 2, 1]).tolist())
        self.assertEqual(ndarray_transpose(y, (0, 3, 1, 2)).to_list(),
                         x.transpose([0, 3, 1, 2]).tolist())
        self.assertEqual(script_transpose(y, (0, 3, 1, 2)).to_list(),
                         x.transpose([0, 3, 1, 2]).tolist())
        self.assertEqual(ndarray_transpose(y, (1, 3, 0, 2)).to_list(),
                         x.transpose([1, 3, 0, 2]).tolist())
        self.assertEqual(script_transpose(y, (1, 3, 0, 2)).to_list(),
                         x.transpose([1, 3, 0, 2]).tolist())

        # test share
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        z = y.transpose([1, 0, 2])
        y[1][0][0] = 60
        self.assertEqual(z[0][1][0], 60)

        # test copy
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        z = hvm.NDArray(x.tolist(), [], "int32")
        m = y.transpose([1, 0, 2])
        z[:] = m
        self.assertEqual(m.to_list(), z.to_list())

        # slice then transpose
        shape = [4, 2, 4]
        x = numpy.arange(32).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        self.assertEqual(y[::2].transpose((2, 1, 0)).to_list(),
                         x[::2].transpose((2, 1, 0)).tolist())

    def test_general_transpose(self):
        def general_transpose(nd: Any, axes: Any) -> hvm.NDArray:
            if axes is None:
                return nd.transpose()
            else:
                return nd.transpose(axes)

        script_transpose = hvm.script(general_transpose)
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "int32")
        # nd = hvm.NDArray([0,1,2,3,4,5,6,7,8,9,10,11], [2,2,3], "int32")
        self.assertEqual(general_transpose(y, [1, 0, 2]).to_list(), x.transpose([1, 0, 2]).tolist())
        self.assertEqual(script_transpose(y, [1, 0, 2]).to_list(), x.transpose([1, 0, 2]).tolist())
        self.assertEqual(general_transpose(y, [1, 2, 0]).to_list(), x.transpose([1, 2, 0]).tolist())
        self.assertEqual(script_transpose(y, [1, 2, 0]).to_list(), x.transpose([1, 2, 0]).tolist())
        self.assertEqual(general_transpose(y, None).to_list(), x.transpose().tolist())
        self.assertEqual(script_transpose(y, None).to_list(), x.transpose().tolist())

    def test_ndarray_as_type(self):
        def ndarray_as_type(nd: hvm.NDArray, dtype: str) -> hvm.NDArray:
            return nd.as_type(dtype)

        script_as_type = hvm.script(ndarray_as_type)
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "uint8")
        self.assertEqual(ndarray_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(ndarray_as_type(y, "float32").to_list(), x.astype(float).tolist())
        self.assertEqual(script_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(script_as_type(y, "float32").to_list(), x.astype(float).tolist())

        # more test
        shape = [4, 2, 3]
        x = numpy.arange(24).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "uint8")
        y = y[::2]
        self.assertEqual(ndarray_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(ndarray_as_type(y, "float32").to_list(), x.astype(float)[::2].tolist())
        self.assertEqual(script_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(script_as_type(y, "float32").to_list(), x.astype(float)[::2].tolist())

    def test_general_as_type(self):
        def general_as_type(nd: Any, dtype: str) -> hvm.NDArray:
            return nd.as_type(dtype)

        script_as_type = hvm.script(general_as_type)
        shape = [2, 2, 3]
        x = numpy.arange(12).reshape(shape)
        y = hvm.NDArray(x.tolist(), [], "uint8")
        self.assertEqual(general_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(general_as_type(y, "float32").to_list(), x.astype(float).tolist())
        self.assertEqual(script_as_type(y, "float32").dtype(), "float32")
        self.assertEqual(script_as_type(y, "float32").to_list(), x.astype(float).tolist())

    def test_absolute_import(self):
        def ndarray_add(x: Any, y: Any) -> hvm.NDArray:
            return hvm.array.add(x, y)

        ndarray_add_op = hvm.script(ndarray_add)
        ret1 = ndarray_add_op(
            hvm.NDArray([1, 2], [], "float32"),
            hvm.NDArray([3, 4], [], "float32"),
        )
        ret2 = ndarray_add(
            hvm.NDArray([1, 2], [], "float32"),
            hvm.NDArray([3, 4], [], "float32"),
        )
        self.assertTrue(numpy.isclose(ret1.asnumpy(), ret2.asnumpy()).all())

    def test_nd_add(self):
        def nd_module_add(x: Any, y: Any) -> hvm.NDArray:
            return hvm.array.add(x, y)
        nd_module_add_op = hvm.script(nd_module_add)

        def test(a, b, c):
            c_nd = nd_module_add(a, b)
            c_nd_op = nd_module_add_op(a, b)
            c_nd = c_nd.asnumpy().astype(c.dtype)
            c_nd_op = c_nd_op.asnumpy().astype(c.dtype)
            # self.assertTrue((c == c_nd).all())
            # self.assertTrue((c == c_nd_op).all())
            self.assertTrue(numpy.isclose(c, c_nd).all())
            self.assertTrue(numpy.isclose(c, c_nd_op).all())

        a = numpy.random.rand(4, 1, 3)
        b = numpy.arange(18).reshape(2, 1, 3, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a + b)
        test(hvm.array.from_numpy(b), 10, b + 10)
        test(10, hvm.array.from_numpy(b), 10 + b)
        test(hvm.array.from_numpy(b), 3.55, b + 3.55)
        test(3.55, hvm.array.from_numpy(b), 3.55 + b)
        test(hvm.array.from_numpy(a), 4, a + 4)
        test(4, hvm.array.from_numpy(a), 4 + a)

        a = numpy.random.rand(4, 2, 3)
        b = numpy.random.rand(4, 2, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a + b)

        a = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")
        b = hvm.NDArray([2, 2, 2, 2, 2, 2], [2, 3], "int32")
        test(a[::2], b, numpy.array([3, 5, 7, 3, 5, 7]).reshape(2, 3))

    def test_nd_sub(self):
        def nd_module_sub(x: Any, y: Any) -> hvm.NDArray:
            return hvm.array.sub(x, y)
        nd_module_sub_op = hvm.script(nd_module_sub)

        def test(a, b, c):
            c_nd = nd_module_sub(a, b)
            c_nd_op = nd_module_sub_op(a, b)
            c_nd = c_nd.asnumpy().astype(c.dtype)
            c_nd_op = c_nd_op.asnumpy().astype(c.dtype)
            # self.assertTrue((c == c_nd).all())
            # self.assertTrue((c == c_nd_op).all())
            self.assertTrue(numpy.isclose(c, c_nd).all())
            self.assertTrue(numpy.isclose(c, c_nd_op).all())

        a = numpy.random.rand(4, 1, 3)
        b = numpy.arange(18).reshape(2, 1, 3, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a - b)
        test(hvm.array.from_numpy(b), 10, b - 10)
        test(10, hvm.array.from_numpy(b), 10 - b)
        test(hvm.array.from_numpy(b), 3.55, b - 3.55)
        test(3.55, hvm.array.from_numpy(b), 3.55 - b)
        test(hvm.array.from_numpy(a), 4, a - 4)
        test(4, hvm.array.from_numpy(a), 4 - a)

        a = numpy.random.rand(4, 2, 3)
        b = numpy.random.rand(4, 2, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a - b)

        a = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")
        b = hvm.NDArray([2, 2, 2, 2, 2, 2], [2, 3], "int32")
        test(a[::2], b, numpy.array([-1, 1, 3, -1, 1, 3]).reshape(2, 3))

    def test_nd_div(self):
        def nd_module_div(x: Any, y: Any) -> hvm.NDArray:
            return hvm.array.div(x, y)
        nd_module_div_op = hvm.script(nd_module_div)

        def test(a, b, c):
            c_nd = nd_module_div(a, b)
            c_nd_op = nd_module_div_op(a, b)
            c_nd = c_nd.asnumpy().astype(c.dtype)
            c_nd_op = c_nd_op.asnumpy().astype(c.dtype)
            # self.assertTrue((c == c_nd).all())
            # self.assertTrue((c == c_nd_op).all())
            self.assertTrue(numpy.isclose(c, c_nd).all())
            self.assertTrue(numpy.isclose(c, c_nd_op).all())

        a = numpy.random.rand(4, 1, 3)
        b = numpy.arange(18).reshape(2, 1, 3, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a / b)
        test(hvm.array.from_numpy(b), 10, b / 10)
        test(10, hvm.array.from_numpy(b), 10 / b)
        test(hvm.array.from_numpy(b), 3.55, b / 3.55)
        test(3.55, hvm.array.from_numpy(b), 3.55 / b)
        test(hvm.array.from_numpy(a), 4, a / 4)
        test(4, hvm.array.from_numpy(a), 4 / a)

        a = numpy.random.rand(4, 2, 3)
        b = numpy.random.rand(4, 2, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a / b)

        a = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")
        b = hvm.NDArray([2, 2, 2, 2, 2, 2], [2, 3], "int32")
        test(a[::2], b, a.asnumpy()[::2] / b.asnumpy())

    def test_nd_mul(self):
        def nd_module_mul(x: Any, y: Any) -> hvm.NDArray:
            return hvm.array.mul(x, y)
        nd_module_mul_op = hvm.script(nd_module_mul)

        def test(a, b, c):
            c_nd = nd_module_mul(a, b)
            c_nd_op = nd_module_mul_op(a, b)
            c_nd = c_nd.asnumpy().astype(c.dtype)
            c_nd_op = c_nd_op.asnumpy().astype(c.dtype)
            # self.assertTrue((c == c_nd).all())
            # self.assertTrue((c == c_nd_op).all())
            self.assertTrue(numpy.isclose(c, c_nd).all())
            self.assertTrue(numpy.isclose(c, c_nd_op).all())

        a = numpy.random.rand(4, 1, 3)
        b = numpy.arange(18).reshape(2, 1, 3, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a * b)
        test(hvm.array.from_numpy(b), 10, b * 10)
        test(10, hvm.array.from_numpy(b), 10 * b)
        test(hvm.array.from_numpy(b), 3.55, b * 3.55)
        test(3.55, hvm.array.from_numpy(b), 3.55 * b)
        test(hvm.array.from_numpy(a), 4, a * 4)
        test(4, hvm.array.from_numpy(a), 4 * a)

        a = numpy.random.rand(4, 2, 3)
        b = numpy.random.rand(4, 2, 3)
        test(hvm.array.from_numpy(a), hvm.array.from_numpy(b), a * b)

        a = hvm.NDArray([1, 2, 3, 4, 5, 6], [], "int32")
        b = hvm.NDArray([2, 2, 2, 2, 2, 2], [2, 3], "int32")
        test(a[::2], b, a.asnumpy()[::2] * b.asnumpy())

    def test_nd_rand(self):
        def nd_module_rand(shape: List) -> hvm.NDArray:
            return hvm.array.rand(shape)

        nd_module_rand_op = hvm.script(nd_module_rand)

        ret = nd_module_rand([3, 2, 4])
        self.assertSequenceEqual([3, 2, 4], list(ret.shape()))
        self.assertEqual("float32", ret.dtype())
        self.assertGreaterEqual(ret[0][0][0], 0.0)
        self.assertGreater(1.0, ret[0][0][0])

        ret = nd_module_rand_op([3, 2, 4])
        self.assertSequenceEqual([3, 2, 4], list(ret.shape()))
        self.assertEqual("float32", ret.dtype())
        self.assertGreaterEqual(ret[0][0][0], 0.0)
        self.assertGreater(1.0, ret[0][0][0])

    def test_nd_concatenate(self):
        def nd_module_concatenate(seq: Any, axis: Any) -> hvm.NDArray:
            if axis is None:
                return hvm.array.concatenate(seq)
            else:
                return hvm.array.concatenate(seq, axis)

        nd_module_concatenate_op = hvm.script(nd_module_concatenate)

        a = numpy.arange(24).reshape(2, 3, 4)
        b = numpy.arange(24, 48).reshape(2, 3, 4)
        c = numpy.arange(48, 72).reshape(2, 3, 4)
        m = hvm.array.from_numpy(a)
        n = hvm.array.from_numpy(b)
        k = hvm.array.from_numpy(c)

        for i in range(a.ndim):
            self.assertEqual(
                nd_module_concatenate(
                    (m, n, k), i).to_list(), numpy.concatenate(
                    (a, b, c), i).tolist())
            self.assertEqual(
                nd_module_concatenate_op(
                    (m, n, k), i).to_list(), numpy.concatenate(
                    (a, b, c), i).tolist())

        self.assertEqual(
            nd_module_concatenate(
                (m, n, k), None).to_list(), numpy.concatenate(
                (a, b, c)).tolist())
        self.assertEqual(
            nd_module_concatenate_op(
                (m, n, k), None).to_list(), numpy.concatenate(
                (a, b, c)).tolist())

    def test_nd_stack(self):
        def nd_module_stack(seq: Any, axis: Any) -> hvm.NDArray:
            if axis is None:
                return hvm.array.stack(seq)
            else:
                return hvm.array.stack(seq, axis)

        nd_module_stack_op = hvm.script(nd_module_stack)

        a = numpy.arange(24).reshape(2, 3, 4).transpose([2, 0, 1])
        b = numpy.arange(24, 48).reshape(2, 3, 4).transpose([2, 0, 1])
        c = numpy.arange(48, 72).reshape(2, 3, 4).transpose([2, 0, 1])
        m = hvm.array.from_numpy(a)
        n = hvm.array.from_numpy(b)
        k = hvm.array.from_numpy(c)

        for i in range(a.ndim + 1):
            self.assertEqual(
                nd_module_stack(
                    (m, n, k), i).to_list(), numpy.stack(
                    (a, b, c), i).tolist())
            self.assertEqual(
                nd_module_stack_op(
                    (m, n, k), i).to_list(), numpy.stack(
                    (a, b, c), i).tolist())

        self.assertEqual(
            nd_module_stack(
                (m, n, k), None).to_list(), numpy.stack(
                (a, b, c)).tolist())
        self.assertEqual(
            nd_module_stack_op(
                (m, n, k), None).to_list(), numpy.stack(
                (a, b, c)).tolist())

        a = numpy.arange(24).reshape(2, 3, 4)
        b = numpy.arange(24, 48).reshape(2, 3, 4)
        c = numpy.arange(48, 72).reshape(2, 3, 4)
        m = hvm.array.from_numpy(a)
        n = hvm.array.from_numpy(b)
        k = hvm.array.from_numpy(c)
        self.assertEqual(
            nd_module_stack(
                (m, n, k), i).to_list(), numpy.stack(
                (a, b, c), i).tolist())

    def test_device(self):
        def specific_get_device(x: hvm.NDArray) -> str:
            return x.device()

        def generic_get_device(x: Any) -> str:
            return x.device()

        specific_op = hvm.script(specific_get_device)
        generic_op = hvm.script(generic_get_device)
        nd = hvm.NDArray([1, 2, 3, 4], [2, 2], "int32")
        self.assertEqual(specific_get_device(nd), "cpu")
        self.assertEqual(specific_op(nd), "cpu")
        self.assertEqual(generic_get_device(nd), "cpu")
        self.assertEqual(generic_op(nd), "cpu")

    def test_nd_is_contiguous(self):
        def specific_is_contiguous(x: hvm.NDArray) -> int:
            return x.is_contiguous()

        def generic_is_contiguous(x: Any) -> int:
            return x.is_contiguous()

        specific_op = hvm.script(specific_is_contiguous)
        generic_op = hvm.script(generic_is_contiguous)
        x = hvm.NDArray([1, 2, 3, 4, 5, 6], [2, 3], "int32")
        y = x.transpose()
        self.assertTrue(specific_is_contiguous(x) == 1)
        self.assertTrue(specific_is_contiguous(y) == 0)
        self.assertTrue(specific_op(x) == 1)
        self.assertTrue(specific_op(y) == 0)
        self.assertTrue(generic_op(x) == 1)
        self.assertTrue(generic_op(y) == 0)

    def test_nd_contiguous(self):
        def generic_is_contiguous(x: Any) -> int:
            return x.is_contiguous()

        def specific_contiguous(x: hvm.NDArray) -> hvm.NDArray:
            return x.contiguous()

        def generic_contiguous(x: Any) -> Any:
            return x.contiguous()

        is_contiguous_op = hvm.script(generic_is_contiguous)
        specific_op = hvm.script(specific_contiguous)
        generic_op = hvm.script(generic_contiguous)
        x = hvm.NDArray([1, 2, 3, 4, 5, 6], [2, 3], "int32")
        y = x.transpose()
        z0 = specific_op(y)
        z1 = generic_op(y)
        x_1 = x.contiguous()
        self.assertTrue(is_contiguous_op(x) == 1)
        self.assertTrue(is_contiguous_op(y) == 0)
        self.assertTrue(is_contiguous_op(z0) == 1)
        self.assertTrue(is_contiguous_op(z1) == 1)
        for i in range(3):
            for j in range(2):
                self.assertEqual(y[i][j], z0[i][j])
                self.assertEqual(y[i][j], z1[i][j])
                self.assertEqual(x[j][i], x_1[j][i])
        x[0][0] = 2
        self.assertEqual(x_1[0][0], 2)
        self.assertEqual(z0[0][0], 1)
        self.assertEqual(z1[0][0], 1)

    def test_nd_reshape(self):
        @hvm.script
        def generic_reshape(x: Any, newshape: Any) -> Any:
            return x.reshape(newshape)

        @hvm.script
        def specific_reshape_tuple(x: hvm.NDArray, newshape: Tuple[int]) -> hvm.NDArray:
            return x.reshape(newshape)

        @hvm.script
        def specific_reshape_list(x: hvm.NDArray, newshape: List) -> hvm.NDArray:
            return x.reshape(newshape)

        generic_op = hvm.script(generic_reshape)
        specific_tuple_op = hvm.script(specific_reshape_tuple)
        specific_list_op = hvm.script(specific_reshape_list)
        x = hvm.NDArray([1, 2, 3, 4, 5, 6], [2, 3], "int32")
        newshape1 = (1, 2, 3)
        r0 = generic_op(x, newshape1)
        r1 = specific_tuple_op(x, newshape1)
        self.assertEqual(r0.shape(), [1, 2, 3])
        self.assertEqual(r1.shape(), [1, 2, 3])
        self.assertEqual(r0[0][1][2], x[1][2])
        self.assertEqual(r1[0][0][2], x[0][2])

        r2 = specific_list_op(x, [3, 2])
        self.assertEqual(r2.shape(), [3, 2])
        self.assertEqual(r2[0][0], 1)
        self.assertEqual(r2[0][1], 2)
        self.assertEqual(r2[1][0], 3)
        self.assertEqual(r2[1][1], 4)
        self.assertEqual(r2[2][0], 5)
        self.assertEqual(r2[2][1], 6)

        r3 = generic_op(x, [3, 2])
        self.assertEqual(r3.shape(), [3, 2])
        self.assertEqual(r3[0][0], 1)
        self.assertEqual(r3[0][1], 2)
        self.assertEqual(r3[1][0], 3)
        self.assertEqual(r3[1][1], 4)
        self.assertEqual(r3[2][0], 5)
        self.assertEqual(r3[2][1], 6)

    def test_squeeze(self):

        @hvm.script
        def simple_squeeze(x: hvm.NDArray) -> hvm.NDArray:
            return x.squeeze()

        @hvm.script
        def generic_squeeze(x: Any, axis: Any) -> Any:
            return x.squeeze(axis)

        @hvm.script
        def specific_squeeze_tuple(x: hvm.NDArray, axis: Tuple[int]) -> hvm.NDArray:
            return x.squeeze(axis)

        x = hvm.NDArray([[[0], [1], [2]]], [1, 3, 1], "int32")
        r0 = simple_squeeze(x)
        r1 = generic_squeeze(x, (0, 2))
        r2 = specific_squeeze_tuple(x, (0, 2))
        self.assertEqual(r0.shape(), [3])
        self.assertEqual(r1.shape(), [3])
        self.assertEqual(r2.shape(), [3])

        r3 = generic_squeeze(x, (0,))
        r4 = specific_squeeze_tuple(x, (0,))
        self.assertEqual(r3.shape(), [3, 1])
        self.assertEqual(r4.shape(), [3, 1])

        x = hvm.NDArray([[1234]], [1, 1], "int32")
        r5 = simple_squeeze(x)
        self.assertEqual(r5.shape(), [])

    def test_unsqueeze(self):

        @hvm.script
        def generic_unsqueeze(x: Any, dim: Any) -> Any:
            return x.unsqueeze(dim)

        @hvm.script
        def specific_unsqueeze(x: hvm.NDArray, dim: int) -> hvm.NDArray:
            return x.unsqueeze(dim)

        x = hvm.NDArray([1, 2, 3, 4], [4], "int32")
        r0 = generic_unsqueeze(x, 0)
        r1 = specific_unsqueeze(x, 0)
        self.assertEqual(r0.shape(), [1, 4])
        self.assertEqual(r1.shape(), [1, 4])
        r2 = generic_unsqueeze(x, 1)
        r3 = specific_unsqueeze(x, 1)
        self.assertEqual(r2.shape(), [4, 1])
        self.assertEqual(r3.shape(), [4, 1])
        r4 = generic_unsqueeze(x, -1)
        r5 = specific_unsqueeze(x, -1)
        self.assertEqual(r4.shape(), [4, 1])
        self.assertEqual(r5.shape(), [4, 1])
        r6 = generic_unsqueeze(x, -2)
        r7 = specific_unsqueeze(x, -2)
        self.assertEqual(r6.shape(), [1, 4])
        self.assertEqual(r7.shape(), [1, 4])

    def test_dlpack(self):

        def cast_tensor_to_dlpack():
            x = hvm.NDArray([1, 2, 3, 4], [2, 2], 'int32')
            return x.to_dlpack()

        dlpack = cast_tensor_to_dlpack()
        dlpack2 = dlpack
        xx = hvm.array.from_dlpack(dlpack2)
        yy = hvm.array.add(xx, xx)
        assert yy[1][1] == 8
        try:
            zz = hvm.array.from_dlpack(dlpack2)
        except Exception as ex:
            assert 'used dlpack' in str(ex)

    def test_ndarray_for_loop(self):
        def for_loop(a: hvm.NDArray) -> Any:
            ret = []
            for i in a:
                ret.append(i)
            return ret
        x = hvm.NDArray([1, 2, 3, 4], [2, 2], "int32")
        py_ret = for_loop(x)
        self.assertTrue(numpy.alltrue(py_ret[0].numpy() == numpy.array([1, 2])))
        self.assertTrue(numpy.alltrue(py_ret[1].numpy() == numpy.array([3, 4])))

        tx_ret = hvm.script(for_loop)(x)
        self.assertTrue(numpy.alltrue(tx_ret[0].numpy() == numpy.array([1, 2])))
        self.assertTrue(numpy.alltrue(tx_ret[1].numpy() == numpy.array([3, 4])))

    def test_generic_for_loop(self):
        def generic_for_loop(a: Any) -> Any:
            ret = []
            for i in a:
                ret.append(i)
            return ret
        x = hvm.NDArray([1, 2, 3, 4], [2, 2], "int32")
        py_ret = generic_for_loop(x)
        self.assertTrue(numpy.alltrue(py_ret[0].numpy() == numpy.array([1, 2])))
        self.assertTrue(numpy.alltrue(py_ret[1].numpy() == numpy.array([3, 4])))

        tx_ret = hvm.script(generic_for_loop)(x)
        self.assertTrue(numpy.alltrue(tx_ret[0].numpy() == numpy.array([1, 2])))
        self.assertTrue(numpy.alltrue(tx_ret[1].numpy() == numpy.array([3, 4])))

    def test_optimize_ndarray(self):
        class MyNDArrayGenerator:

            def __init__(self):
                self.val: int = 1

            def make_ndarray(self) -> hvm.NDArray:
                result = hvm.NDArray(self.val, [4], "int32")
                self.val += 1
                return result

        def test_ndarray_sum() -> Any:
            g = MyNDArrayGenerator()
            total = 0
            for s in g.make_ndarray():
                total += s
            return total

        py_ret = test_ndarray_sum()
        tx_ret = hvm.script(test_ndarray_sum)()
        self.assertEqual(py_ret, tx_ret)

        def test_ndarray_unpack_at_axis0() -> Any:
            g = MyNDArrayGenerator()
            li = []
            for s in g.make_ndarray():
                li.append(s)
            return li

        py_ret = test_ndarray_unpack_at_axis0()
        tx_ret = hvm.script(test_ndarray_unpack_at_axis0)()
        self.assertEqual(py_ret, tx_ret)


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
