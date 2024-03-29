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
from typing import List, Dict
from typing import Any
import unittest
import hvm
import copy


def default_comp(x, y):
    if x < y:
        return -1
    if x > y:
        return 1
    return 0


def is_heap(l, comp=None):
    length = len(l)
    if length < 2:
        return True
    if comp is None:
        comp = default_comp

    for i in reversed(range((length - 2) // 2 + 1)):
        left = 2 * i + 1
        if left < length and comp(l[left], l[i]) < 0:
            return False
        right = 2 * i + 1
        if right < length and comp(l[right], l[i]) < 0:
            return False
    return True


class TestHvmListHeap(unittest.TestCase):
    def test_list_heapify(self):
        def comp(x: int, y: int) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        def heapify_func(x: List) -> None:
            hvm.list_heapify(x, comp)

        heapify_op = hvm.script(heapify_func)

        def check(l):
            python_l = copy.copy(l)
            hvm_l = hvm.List(l)
            heapify_func(python_l)
            heapify_func(hvm_l)
            self.assertTrue(is_heap(python_l, comp))
            self.assertTrue(is_heap(hvm_l, comp))

            hvm_l = hvm.List(l)
            heapify_op(hvm_l)
            self.assertTrue(is_heap(hvm_l, comp))

        check([9, 11, 3, 1, 9, 8, 2])

    def test_list_heap_replace(self):
        def comp(x: int, y: int) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        def replace_func(x: List, item: Any) -> None:
            hvm.list_heap_replace(x, item, comp)

        replace_op = hvm.script(replace_func)

        def check(l, item, new_top):
            python_l = copy.copy(l)
            hvm_l = hvm.List(l)
            replace_func(python_l, item)
            print(python_l)
            replace_func(hvm_l, item)
            self.assertTrue(is_heap(python_l, comp))
            self.assertEqual(python_l[0], new_top)
            self.assertTrue(is_heap(hvm_l, comp))
            self.assertEqual(hvm_l[0], new_top)

            hvm_l = hvm.List(l)
            replace_op(hvm_l, item)
            self.assertTrue(is_heap(hvm_l, comp))
            self.assertEqual(hvm_l[0], new_top)

        l = [9, 11, 3, 1, 9, 8, 2]
        hvm.list_heapify(l, comp)
        print(l)
        check(l, 7, 9)

    def test_list_nth_element(self):
        from functools import cmp_to_key

        def comp(x: float, y: float) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        def nth_func(l: List, n: int) -> None:
            hvm.list_nth_element(l, n, comp)

        nth_op = hvm.script(nth_func)

        def check(l, n, target_val):
            python_list = copy.copy(l)
            nth_func(python_list, n)
            self.assertAlmostEqual(target_val, python_list[n - 1])

            hvm_list = hvm.List(l)
            nth_func(hvm_list, n)
            self.assertAlmostEqual(target_val, hvm_list[n - 1])

            hvm_list = hvm.List(l)
            nth_op(hvm_list, n)
            self.assertAlmostEqual(target_val, hvm_list[n - 1])

        l = [8, 4.2, 9.3, 11.5, 6.3, 77, 2.2, 5.4, 3.9]
        check(l, 4, sorted(l, key=cmp_to_key(comp))[4 - 1])

    def test_list_heap_pushpop(self):
        def comp(x: int, y: int) -> int:
            if x > y:
                return -1
            if x < y:
                return 1
            return 0

        def pushpop_func(x: List, item: Any) -> Any:
            return hvm.list_heap_pushpop(x, item, comp)

        pushpop_op = hvm.script(pushpop_func)

        def check(l, item, target, new_top):
            python_l = copy.copy(l)
            ret = pushpop_func(python_l, item)
            self.assertTrue(is_heap(python_l, comp))
            self.assertEqual(target, ret)
            self.assertEqual(new_top, python_l[0])

            hvm_l = hvm.List(l)
            ret = pushpop_func(hvm_l, item)
            self.assertTrue(is_heap(hvm_l, comp))
            self.assertEqual(target, ret)
            self.assertEqual(new_top, hvm_l[0])

            hvm_l = hvm.List(l)
            ret = pushpop_op(hvm_l, item)
            self.assertTrue(is_heap(hvm_l, comp))
            self.assertEqual(target, ret)
            self.assertEqual(new_top, hvm_l[0])

        l = [9, 11, 3, 1, 9, 8, 2]
        hvm.list_heapify(l, comp)
        print(l)
        check(copy.copy(l), 7, 11, 9)
        check(copy.copy(l), 12, 12, 11)


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
