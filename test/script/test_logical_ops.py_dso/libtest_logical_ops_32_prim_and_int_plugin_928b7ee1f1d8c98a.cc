#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool prim_and_int(bool a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int prim_and_int__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool prim_and_int(bool a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:33
  return (internal::TypeAsHelper<bool>::run((ArithOps::And(a, b)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 34, in prim_and_int\n", "expect 'ArithOps::And(a, b)' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:34
}

int prim_and_int__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("prim_and_int", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:33
    auto ret = prim_and_int(internal::TypeAsHelper<bool>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 33, in prim_and_int\n", "expect 'pos_args[0]' is 'bool' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 33, in prim_and_int\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = prim_and_int(internal::TypeAsHelper<bool>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 33, in prim_and_int\n", "expect 'args_t[0]' is 'bool' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 33, in prim_and_int\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 33, in prim_and_int\n", "prim_and_int() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:33
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)prim_and_int__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000prim_and_int\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000prim_and_int\000";

} // extern C

