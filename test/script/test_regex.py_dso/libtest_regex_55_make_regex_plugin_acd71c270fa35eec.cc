#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Regex make_regex(void* handle_2_71828182846=((void*)(int64_t)0));
int make_regex__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Regex make_regex(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:56
  Regex regex = (Kernel_Regex::make((unicode_view(U"\u006E\u0061\u006D\u0065", 4)), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:57
  return (regex);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:58
}

int make_regex__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_regex(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:56
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 56, in make_regex\n", "make_regex() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:56
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)make_regex__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000make_regex\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000make_regex\000";

} // extern C

