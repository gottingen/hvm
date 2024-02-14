#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Regex make_whitespace_regex(void* handle_2_71828182846=((void*)(int64_t)0));
int make_whitespace_regex__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Regex make_whitespace_regex(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:65
  Regex regex = (Kernel_Regex::make((unicode_view(U"\u005B\u0020\u005C\u0074\u005C\u006E\u005C\u0072\u005C\u0066\u005C\u0070\u007B\u005A\u0073\u007D\u005D", 17)), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:66
  return (regex);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:67
}

int make_whitespace_regex__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_whitespace_regex(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:65
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 65, in make_whitespace_regex\n", "make_whitespace_regex() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:65
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)make_whitespace_regex__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000make_whitespace_regex\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000make_whitespace_regex\000";

} // extern C

