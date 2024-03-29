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
import numpy as np
import tensorflow as tf
import hvm
from typing import List, Any

SCRIPT_PATH = os.path.split(os.path.realpath(__file__))[0]


class Adder(tf.Module):
    @tf.function(input_signature=[tf.TensorSpec(shape=[None], dtype=tf.float16, name='x')])
    def add(self, x):
        return {"result": x + x}


class TestTensorFlowFloat16_2(unittest.TestCase):
    def setUp(self) -> None:
        self.tmp_path = SCRIPT_PATH + "/../tempdir/"
        self.data_path = SCRIPT_PATH + "/../data/"
        self.work_path = self.tmp_path + "TestTensorFlowFloat16_2_%d/" % uuid.uuid4().int
        if not os.path.exists(self.work_path):
            os.mkdir(self.work_path)

    def test_tf_infer(self):
        model = Adder()
        examples = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], dtype=np.float16)
        tf_outputs = model.add(examples)["result"]
        tf_outputs = tf_outputs.numpy()

        tf_op = hvm.script(model, device=-1)
        tx_outputs = tf_op({"x": hvm.array.from_numpy(examples)})["result"]
        tx_outputs = tx_outputs.numpy()
        assert np.alltrue(tf_outputs == tx_outputs)

        self.assertTrue(np.alltrue(tf_outputs == tx_outputs))


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
