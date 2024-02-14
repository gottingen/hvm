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
from typing import List, Dict, Any
import unittest
import hvm
import copy


class TestHvmListSort(unittest.TestCase):
    def test_python_list_sort(self):
        l = [1.0, 3.0, 2.2, 5, 4.3, 2.15]
        expected_val = [1.0, 2.15, 2.2, 3.0, 4.3, 5]
        python_list = copy.copy(l)
        hvm.list_sort(python_list)
        self.assertListEqual(python_list, expected_val)

        hvm_list = hvm.List(l)
        hvm.list_sort(hvm_list)
        self.assertListEqual(list(hvm_list), expected_val)

        def number_comp(x: Any, y: Any) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        number_comp_op = hvm.script(number_comp)

        l = [1.0, 3.0, 2.2, 5, 4.3, 2.15]
        expected_val = [5, 4.3, 3.0, 2.2, 2.15, 1.0]

        python_l = copy.copy(l)
        hvm.list_sort(python_l, number_comp)
        self.assertListEqual(python_l, expected_val)

        hvm_list = hvm.List(l)
        hvm.list_sort(hvm_list, number_comp)
        self.assertListEqual(list(hvm_list), expected_val)

        python_l = copy.copy(l)
        hvm.list_sort(python_l, number_comp_op)
        self.assertListEqual(python_l, expected_val)

        hvm_list = hvm.List(l)
        hvm.list_sort(hvm_list, number_comp_op)
        self.assertListEqual(list(hvm_list), expected_val)

    def test_naive_list_sort(self):
        def naive_list_sort(l: List) -> None:
            hvm.list_sort(l)

        def generic_naive_list_sort(l: Any) -> None:
            hvm.list_sort(l)

        op = hvm.script(naive_list_sort)
        generic_op = hvm.script(generic_naive_list_sort)

        def check(l, expected_val):
            python_list = copy.copy(l)
            naive_list_sort(python_list)
            self.assertListEqual(python_list, expected_val)

            op_list = hvm.List(l)
            op(op_list)
            self.assertListEqual(list(op_list), expected_val)

            generic_op_list = hvm.List(l)
            generic_op(generic_op_list)
            self.assertListEqual(list(generic_op_list), expected_val)

        l = [1, 2, 3.3, 5.2, 4]
        check(l, sorted(l))

        l = ["\u4f60\u597d", "", "c", "ac", "abc", "ab"]
        check(l, sorted(l))

    def test_reverse_list_sort(self):
        def comp(x: int, y: int) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        def comp_list_sort(l: List) -> None:
            hvm.list_sort(l, comp)

        l = [1, 2, 3, 4, 5]
        hvm_l = hvm.List(l)

        comp_list_sort(l)
        hvm.script(comp_list_sort)(hvm_l)

        self.assertListEqual(l, [5, 4, 3, 2, 1])
        self.assertListEqual(list(hvm_l), [5, 4, 3, 2, 1])

    def test_complex_list_sort(self):
        def comp(x: Dict, y: Dict) -> int:
            if len(x) > len(y):
                return -1
            if len(x) < len(y):
                return 1
            return 0

        def comp_list_sort(l: List) -> None:
            hvm.list_sort(l, comp)

        l = [{}, {'a': 1, 'b': 2}, {'a': 1}, {'c': 2, 'a': 1, 'd': 5}]
        hvm_l = hvm.List(l)
        comp_list_sort(l)
        hvm.script(comp_list_sort)(hvm_l)
        self.assertListEqual([len(k) for k in l], [3, 2, 1, 0])
        self.assertListEqual([len(k) for k in hvm_l], [3, 2, 1, 0])


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
