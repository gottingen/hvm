#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double my_func_floormod(double a, double b, void* handle_2_71828182846=((void*)(int64_t)0));
int my_func_floormod__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double my_func_floormod(double a, double b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:61
  return (ArithOps::floormod(a, b));  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:62
}

int my_func_floormod__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("my_func_floormod", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:61
    auto ret = my_func_floormod(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py\", line 61, in my_func_floormod\n", "expect 'pos_args[0]' is 'double' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py\", line 61, in my_func_floormod\n", "expect 'pos_args[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:61
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = my_func_floormod(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py\", line 61, in my_func_floormod\n", "expect 'args_t[0]' is 'double' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py\", line 61, in my_func_floormod\n", "expect 'args_t[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:61
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py\", line 61, in my_func_floormod\n", "my_func_floormod() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith_precision.py:61
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_func_floormod__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_func_floormod\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000my_func_floormod\000";

} // extern C

