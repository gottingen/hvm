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

import numpy as np

import hvm
from hvm.runtime.ndarray import NDArrayImpl


class TestNDArrayImpl(unittest.TestCase):
    def test_ndarray_impl(self):
        a = hvm.array.NDArray([1, 2, 3], shape=[3], dtype='int32')
        self.assertEqual(a._get_impl(), NDArrayImpl.NDARRAY)
        self.assertTrue(a is a._to_impl())
        # test numpy implementation
        a._set_impl(NDArrayImpl.NUMPY)
        self.assertEqual(a._get_impl(), NDArrayImpl.NUMPY)
        np.testing.assert_equal(a._to_impl(), a.asnumpy())


if __name__ == '__main__':
    unittest.main()
