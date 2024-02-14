#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func_has_return(void* handle_2_71828182846=((void*)(int64_t)0));
int func_has_return__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func_has_return(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:205
  int64_t a = ((int64_t)5);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:206
  if (Kernel_bool::make(((a == (int64_t)5)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:207
    return ((int64_t)2);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:208
  } else {
    if (Kernel_bool::make(((a < (int64_t)5)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:209
      return ((int64_t)3);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:210
    } else {
      return ((int64_t)5);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:212
    }
  }
  return (internal::TypeAsHelper<int64_t>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'int64_t' type"));
}

int func_has_return__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = func_has_return(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:205
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 205, in func_has_return\n", "func_has_return() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:205
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)func_has_return__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000func_has_return\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000func_has_return\000";

} // extern C

