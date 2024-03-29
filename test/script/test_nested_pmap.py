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
import hvm
from typing import Any, List


def my_map_func1(x: str) -> str:
    return x.lower()


def my_map_func2(x: List[str]) -> List[str]:
    return hvm.pmap(my_map_func1, x)


def py_map_func2(x: List[str]) -> List[str]:
    return [my_map_func1(s) for s in x]


class TestNestedParallelMap(unittest.TestCase):

    def test_nested_pmap(self):
        def my_entry(a: List[List[str]]) -> Any:
            b = hvm.pmap(my_map_func2, a)
            return b

        data = [["Hello", "World"] * 64] * 64
        py_ret1 = [py_map_func2(x) for x in data]
        py_ret = my_entry(data)
        self.assertEqual(py_ret1, py_ret)
        tx_ret = hvm.script(my_entry)(data)
        self.assertEqual(py_ret, tx_ret)


if __name__ == '__main__':
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
