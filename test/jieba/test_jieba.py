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
import os
import unittest
import hvm
import hercules
from typing import Callable, Any

SCRIPT_PATH = os.path.split(os.path.realpath(__file__))[0]


class TestBuiltinTextOps(unittest.TestCase):

    def setUp(self) -> None:
        self.tmp_path = SCRIPT_PATH + "/../tempdir/"
        self.data_path = SCRIPT_PATH + "/../data/"

    def test_jieba(self):
        test_content = "这是一个伸手不见五指的黑夜。我叫孙悟空，我爱北京，我爱Python和C++。"
        jieba = hvm.jieba.Jieba()
        print(jieba.cut(test_content))
        print(jieba.cut(test_content, cut_all=True))
        print(jieba.cut(test_content, HMM=False))

        class MyCutter:
            def __init__(self):
                self.op: Callable = hvm.jieba.Jieba()

            def __call__(self, a: str, cut_all: bool, HMM: bool) -> Any:
                return self.op(a, cut_all, HMM)

        op = hercules.script(MyCutter)()
        print(op(test_content, False, True))
        print(op(test_content, True, False))
        print(op(test_content, False, False))


if __name__ == '__main__':
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
