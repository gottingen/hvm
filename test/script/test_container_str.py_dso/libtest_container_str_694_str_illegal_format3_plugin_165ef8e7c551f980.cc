#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode str_illegal_format3(void* handle_2_71828182846=((void*)(int64_t)0));
int str_illegal_format3__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode str_illegal_format3(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:694
  return (kernel_unicode_format(unicode_view(U"\u007B\u007D", 2), {}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:695
}

int str_illegal_format3__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = str_illegal_format3(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:694
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 694, in str_illegal_format3\n", "str_illegal_format3() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:694
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_illegal_format3__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_illegal_format3\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_illegal_format3\000";

} // extern C

