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
import ctypes
import unittest
import hvm
from hvm import ir as _ir

SCRIPT_PATH = os.path.split(os.path.realpath(__file__))[0]


class TestIRMakeArith(unittest.TestCase):

    def setUp(self) -> None:
        self.build_module = hvm.get_global_func("module.build.c")
        self.current_ir = ""
        self.current_source = ""
        self.dso_prefix_path = SCRIPT_PATH + os.sep + hvm.toolchain.LIB_PATH

    def compile_func(self, func):
        """Compile ir function and return c_func

        Parameters
        ----------
        func : Function
            used to make ir func

        Returns
        -------
        c_func : Function
            compiled function

        """
        func_name = func.__name__
        ir_func = func()
        ir_func = ir_func.with_attr("global_symbol", func_name)
        ir_m = hvm.ir.IRModule()
        ir_m.add(ir_func)
        ir_m.set_main(func_name)
        self.current_ir = str(ir_m)
        rt_m = self.build_module(ir_m)
        self.current_source = rt_m.get_source()

        dso_path = "%s/lib_ir_%s.so" % (self.dso_prefix_path, func_name)
        if not os.path.exists(self.dso_prefix_path):
            os.mkdir(self.dso_prefix_path)
        rt_m.export_library(dso_path)

        rt_module = hvm.runtime.load_module(dso_path)
        c_func = rt_module.get_function(func_name)
        return c_func

    def test_a_plus_b(self):
        def a_plus_b():
            """
            Source:
            def a_plus_b(a:int, b:int):
                return a + b
            """
            a = hvm.ir.PrimVar("a", "int64")
            b = hvm.ir.PrimVar("b", "int64")
            c = a + b
            ib = hvm.ir.ir_builder.create()
            ib.emit(hvm.ir.ReturnStmt(c))
            prim_func = hvm.ir.PrimFunc([a, b], [], ib.get(), hvm.ir.PrimType("int64"))
            return prim_func

        c_func = self.compile_func(a_plus_b)
        result = c_func(10, 20)
        # print(self.current_ir)
        # print(self.current_source)
        self.assertEqual(result, 30)

    def test_make_assign(self):
        def make_assign():
            """
            Source:
            def assign(a:int, b:int):
                a = b
                return a
            """
            a = hvm.ir.PrimVar("a", "int64")
            b = hvm.ir.PrimVar("b", "int64")
            ib = hvm.ir.ir_builder.create()
            ib.emit(hvm.ir.AssignStmt(a, b))
            ib.emit(hvm.ir.ReturnStmt(a))
            prim_func = hvm.ir.PrimFunc([a, b], [], ib.get(), hvm.ir.PrimType("int64"))
            return prim_func

        c_func = self.compile_func(make_assign)
        result = c_func(10, 20)
        # print(self.current_ir)
        # print(self.current_source)
        self.assertEqual(result, 20)

    def test_make_alloca(self):
        def make_alloca():
            """
            Source:
            def alloca():
                b = 1
                return b
            """
            ib = hvm.ir.ir_builder.create()
            alloca_stmt = hvm.ir.AllocaVarStmt("b", hvm.ir.PrimType("int64"))
            ib.emit(alloca_stmt)
            ib.emit(hvm.ir.AssignStmt(alloca_stmt.var, hvm.ir.const(1, "int64")))
            ib.emit(hvm.ir.ReturnStmt(alloca_stmt.var))
            prim_func = hvm.ir.PrimFunc([], [], ib.get(), hvm.ir.PrimType("int64"))
            return prim_func

        c_func = self.compile_func(make_alloca)
        result = c_func()
        # print(self.current_ir)
        # print(self.current_source)
        self.assertEqual(result, 1)

    def test_sum_n_by_while(self):
        def sum_n_by_while():
            """
            Source:
            def sum_n_by_while(n:int):
                i = 1
                sum = 0
                while i < n:
                    sum += i
                return sum
            """
            ib = hvm.ir.ir_builder.create()
            n = hvm.ir.PrimVar("n", "int64")
            alloca_i = hvm.ir.AllocaVarStmt("i", hvm.ir.PrimType("int64"))
            alloca_sum = hvm.ir.AllocaVarStmt("sum", hvm.ir.PrimType("int64"))
            ib.emit(alloca_i)
            ib.emit(alloca_sum)
            ib.emit(hvm.ir.AssignStmt(alloca_i.var, hvm.ir.const(1, "int64")))
            ib.emit(hvm.ir.AssignStmt(alloca_sum.var, hvm.ir.const(0, "int64")))

            ib_while = hvm.ir.ir_builder.create()
            ib_while.emit(hvm.ir.AssignStmt(alloca_sum.var, alloca_sum.var + alloca_i.var))
            ib_while.emit(
                hvm.ir.AssignStmt(alloca_i.var, alloca_i.var + hvm.ir.const(1, "int64")))
            ib.emit(hvm.ir.While(alloca_i.var < n, ib_while.get()))
            ib.emit(hvm.ir.ReturnStmt(alloca_sum.var))
            return hvm.ir.PrimFunc([n], [], ib.get(), hvm.ir.PrimType("int64"))

        c_func = self.compile_func(sum_n_by_while)
        result = c_func(5)
        # print(self.current_ir)
        # print(self.current_source)
        self.assertEqual(result, 10)

    def test_sum_n_by_for(self):
        def sum_n_by_for():
            """
            Source:
            def sum_n_by_for(n:int):
                sum = 0
                for i in range(n):
                    sum += i
                return sum
            """
            ib = hvm.ir.ir_builder.create()
            n = hvm.ir.PrimVar("n", "int64")
            i = hvm.ir.PrimVar("i", "int64")
            alloca_sum = hvm.ir.AllocaVarStmt("sum", hvm.ir.PrimType("int64"))
            ib.emit(alloca_sum)
            ib.emit(hvm.ir.AssignStmt(alloca_sum.var, hvm.ir.const(0, "int64")))

            ib_for = hvm.ir.ir_builder.create()
            ib_for.emit(hvm.ir.AssignStmt(alloca_sum.var, alloca_sum.var + i))
            ib.emit(
                hvm.ir.For(
                    i, hvm.ir.const(
                        0, "int64"), n, hvm.ir.const(
                        1, "int64"), 0, 0, ib_for.get()))
            ib.emit(hvm.ir.ReturnStmt(alloca_sum.var))
            return hvm.ir.PrimFunc([n], [], ib.get(), hvm.ir.PrimType("int64"))

        c_func = self.compile_func(sum_n_by_for)
        result = c_func(5)
        # print(self.current_ir)
        # print(self.current_source)
        self.assertEqual(result, 10)


if __name__ == "__main__":
    import logging

    logging.basicConfig(level=logging.INFO)
    unittest.main()
