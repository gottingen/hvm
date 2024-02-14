#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t common(void* handle_2_71828182846=((void*)(int64_t)0));
int common__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t foo(void* handle_2_71828182846=((void*)(int64_t)0));
int foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t common(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:113
  return ((int64_t)42);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:114
}

int common__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = common(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:113
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 113, in common\n", "common() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:113
  }
  return 0;
}

HERCULES_DLL int64_t foo(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:117
  return (common(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:118
}

int foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = foo(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:117
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 117, in foo\n", "foo() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:117
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000foo\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000common\000foo\000";

} // extern C

