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
from typing import Tuple
import unittest
from unittest import runner
import hvm


class TestRuntimeErrorReport(unittest.TestCase):

    def test_runtime_error_again(self):

        class ErrorRunner:

            def __init__(self) -> None:
                x = [1, 2, 3]
                print(x[0])
                pass

            def __call__(self, i: int) -> int:
                x = [1, 2, 3]
                return x[i]

        try:
            runner = hvm.script(ErrorRunner)()
            print(runner(3))
        except Exception as e:
            msg = str(e)
            #assert "test_runtime_error_report.py\", line 36" in msg


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
