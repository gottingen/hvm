#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double math_log(double a, void* handle_2_71828182846=((void*)(int64_t)0));
int math_log__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double math_log(double a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:104
  return (Math<double(double)>::check_call<log>(a));  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:105
}

int math_log__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("math_log", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:104
    auto ret = math_log(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_math.py\", line 104, in math_log\n", "expect 'pos_args[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:104
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = math_log(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_math.py\", line 104, in math_log\n", "expect 'args_t[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:104
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_math.py\", line 104, in math_log\n", "math_log() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:104
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)math_log__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000math_log\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000math_log\000";

} // extern C
