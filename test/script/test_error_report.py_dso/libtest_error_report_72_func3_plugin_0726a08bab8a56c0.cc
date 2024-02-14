#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Dict func3(void* handle_2_71828182846=((void*)(int64_t)0));
int func3__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Dict func3(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:72
  Dict a = (Kernel_Dict::make());  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:73
  (void)(a).set_item((RTValue((int64_t)0)), (RTValue((int64_t)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:74
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:75
}

int func3__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = func3(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:72
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 72, in func3\n", "func3() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:72
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)func3__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000func3\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000func3\000";

} // extern C

