#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Regex make_control_regex(void* handle_2_71828182846=((void*)(int64_t)0));
int make_control_regex__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Regex make_control_regex(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:70
  Regex regex = (Kernel_Regex::make((unicode_view(U"\u005B\u005C\u0075\u0030\u0030\u0030\u0030\u005C\u0075\u0066\u0066\u0066\u0064\u005C\u0070\u007B\u0043\u0063\u007D\u005C\u0070\u007B\u0043\u0066\u007D\u005C\u0070\u007B\u004D\u006E\u007D\u005D", 32)), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:71
  return (regex);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:72
}

int make_control_regex__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_control_regex(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:70
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 70, in make_control_regex\n", "make_control_regex() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:70
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)make_control_regex__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000make_control_regex\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000make_control_regex\000";

} // extern C

