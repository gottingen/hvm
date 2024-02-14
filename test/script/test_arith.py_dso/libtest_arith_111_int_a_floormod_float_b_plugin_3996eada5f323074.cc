#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue int_a_floormod_float_b(int64_t a, double b, void* handle_2_71828182846=((void*)(int64_t)0));
int int_a_floormod_float_b__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue int_a_floormod_float_b(int64_t a, double b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:112
  return (RTValue(ArithOps::floormod(((double)a), b)));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:113
}

int int_a_floormod_float_b__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("int_a_floormod_float_b", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:112
    auto ret = int_a_floormod_float_b(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 112, in int_a_floormod_float_b\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 112, in int_a_floormod_float_b\n", "expect 'pos_args[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:112
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = int_a_floormod_float_b(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 112, in int_a_floormod_float_b\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 112, in int_a_floormod_float_b\n", "expect 'args_t[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:112
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 112, in int_a_floormod_float_b\n", "int_a_floormod_float_b() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:112
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)int_a_floormod_float_b__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000int_a_floormod_float_b\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000int_a_floormod_float_b\000";

} // extern C
