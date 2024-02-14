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
import os
import hvm


class TestJsonSerialize(unittest.TestCase):

    def setUp(self) -> None:
        dir_path = os.path.dirname(os.path.realpath(__file__))
        self.filepath = os.path.join(dir_path, '../data/serialize_data.json')

    def test_serialize(self):
        # test with frequently used data structures in serving.
        assert '5' in hvm.serialize(5)
        assert "hello" in hvm.serialize("hello")
        assert "3.14" in hvm.serialize(3.14)
        feed_dict = {"key1": hvm.NDArray([0.5] *
                                          8, [2, 4], dtype='float32'), "key2": ["hello", "world"]}
        serialized = hvm.serialize(feed_dict)
        hvm_feed_dict = hvm.deserialize(serialized)
        assert len(hvm_feed_dict.keys()) == 2
        assert hvm_feed_dict['key1'].shape()[0] == 2
        assert len(hvm_feed_dict['key2']) == 2

        # write to file as test data.
        # with open(self.filepath, 'w') as fw:
        #    fw.write(serialized)

    def test_script_serialize(self):
        @hvm.script
        def serialize(o: object) -> str:
            return hvm.serialize(o)

        @hvm.script
        def deserialize(s: str) -> object:
            return hvm.deserialize(s)

        # test with frequently used data structures in serving.
        assert '5' in serialize(5)
        assert "hello" in serialize("hello")
        assert "3.14" in serialize(3.14)
        feed_dict = {"key1": hvm.NDArray([0.5] *
                                          8, [2, 4], dtype='float32'), "key2": ["hello", "world"]}
        serialized = serialize(feed_dict)
        hvm_feed_dict = deserialize(serialized)
        assert serialized == hvm.serialize(feed_dict)
        assert hvm_feed_dict == feed_dict

    def test_stable_api(self):
        with open(self.filepath, 'r') as fr:
            data = fr.read()
        hvm_feed_dict = hvm.deserialize(data)
        assert len(hvm_feed_dict.keys()) == 2
        assert hvm_feed_dict['key1'].shape()[0] == 2
        assert len(hvm_feed_dict['key2']) == 2


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
