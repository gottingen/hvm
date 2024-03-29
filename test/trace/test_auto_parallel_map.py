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
import uuid
from typing import List, Any
import hvm


@hvm.script
def make_ngram(query: str) -> List:
    max_ngram_size = 4
    ngram_list = []
    query = query.strip()
    query_terms = query.split(' ')

    for l in range(1, max_ngram_size + 1):
        for j in range(0, len(query_terms) - l + 1):
            ngram_list.append(" ".join(query_terms[j: j + l]))
    return ngram_list


@hvm.script
def batch_make_ngram(queries: List[str]) -> List:
    return hvm.pmap(make_ngram, queries)


def workflow_script_pmap(queries):
    r = batch_make_ngram(queries)
    return r


def workflow_trace_pmap(queries):
    r = hvm.pmap(make_ngram, queries)
    return r


SCRIPT_PATH = os.path.split(os.path.realpath(__file__))[0]


class TestAutoParallelMapInPipeline(unittest.TestCase):

    def setUp(self) -> None:
        self.tmp_path = SCRIPT_PATH + "/../tempdir/"
        self.data_path = SCRIPT_PATH + "/../data/"
        self.work_path = self.tmp_path + "TestAutoParallelMapInPipeline_%d/" % uuid.uuid4().int
        if not os.path.exists(self.work_path):
            os.mkdir(self.work_path)

    def test_pmap_in_script(self):
        num_threads = 4
        test_cases = ["Hello World"] * 1000
        jit_mod = hvm.trace(workflow_script_pmap, test_cases)
        jit_mod.disable_pmap_threads()
        ret1 = jit_mod.run({"queries": test_cases})
        jit_mod.set_pmap_threads(num_threads)
        ret2 = jit_mod.run({"queries": test_cases})
        self.assertEqual(ret1, ret2)

        save_path = self.work_path + "test_pmap_in_script"
        jit_mod.save(save_path)
        jit_mod = hvm.pipeline.Load(save_path, 'cpu')
        ret3 = jit_mod.run({"queries": test_cases})
        self.assertEqual(ret1, ret3)
        num_threads_2 = jit_mod.get_pmap_threads()
        self.assertEqual(num_threads_2, num_threads)

    def test_pmap_in_trace(self):
        num_threads = 4
        test_cases = ["Hello World"] * 1000
        jit_mod = hvm.trace(workflow_trace_pmap, test_cases)
        jit_mod.disable_pmap_threads()
        ret1 = jit_mod.run({"queries": test_cases})
        jit_mod.set_pmap_threads(num_threads)
        ret2 = jit_mod.run({"queries": test_cases})
        self.assertEqual(ret1, ret2)

        save_path = self.work_path + "test_pmap_in_trace"
        jit_mod.save(save_path)
        jit_mod = hvm.pipeline.Load(save_path, 'cpu')
        ret3 = jit_mod.run({"queries": test_cases})
        self.assertEqual(ret1, ret3)
        num_threads_2 = jit_mod.get_pmap_threads()
        self.assertEqual(num_threads_2, num_threads)


if __name__ == '__main__':
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
