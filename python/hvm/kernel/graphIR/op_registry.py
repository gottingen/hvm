#  Copyright (c) Meta Platforms, Inc. and affiliates.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

"""
Registry for basic operators and math functions.
"""
import ast
from typing import Callable, Dict

from .ops import BinaryElementWiseOperator

# OP_REGISTRY defines a mapping from a FuncEnum name to a function to create this elementwise operator.
# This object is initialized in elementwise.py, and referenced in base.py and math.py.
OP_REGISTRY: Dict[str, Callable] = {
    "ADD": BinaryElementWiseOperator(ast.Add),
    "SUB": BinaryElementWiseOperator(ast.Sub),
    "MUL": BinaryElementWiseOperator(ast.Mult),
    "DIV": BinaryElementWiseOperator(ast.Div),
}