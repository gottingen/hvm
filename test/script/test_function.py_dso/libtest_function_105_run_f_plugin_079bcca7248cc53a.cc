#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double a_plus_3(double x, void* handle_2_71828182846=((void*)(int64_t)0));
int a_plus_3__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double run_f(void* handle_2_71828182846=((void*)(int64_t)0));
int run_f__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double a_plus_3(double x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:102
  return ((x + 3.0000000000000000000e+00));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:103
}

int a_plus_3__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("a_plus_3", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:102
    auto ret = a_plus_3(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 102, in a_plus_3\n", "expect 'pos_args[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:102
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = a_plus_3(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 102, in a_plus_3\n", "expect 'args_t[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:102
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 102, in a_plus_3\n", "a_plus_3() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:102
    }
  }

  return 0;
}

HERCULES_DLL double run_f(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:106
  double a = (4.0000000000000000000e+00);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:107
  return (a_plus_3(a, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:108
}

int run_f__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = run_f(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:106
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 106, in run_f\n", "run_f() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:106
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)run_f__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000run_f\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000a_plus_3\000run_f\000";

} // extern C

