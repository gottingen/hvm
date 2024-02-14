#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple run_regex_named_group(void* handle_2_71828182846=((void*)(int64_t)0));
int run_regex_named_group__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple run_regex_named_group(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:44
  Regex regex = (Kernel_Regex::make((unicode_view(U"\u0028\u003F\u003C\u0066\u0069\u0072\u0073\u0074\u003E\u002E\u002A\u0029\u0020\u0061\u0072\u0065\u0020\u0028\u003F\u003C\u0073\u0065\u0063\u006F\u006E\u0064\u003E\u002E\u002A\u003F\u0029\u0020\u002E\u002A", 34)), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:45
  Tuple matched_result = ((regex).match((unicode_view(U"\u0043\u0061\u0074\u0073\u0020\u0061\u0072\u0065\u0020\u0073\u006D\u0061\u0072\u0074\u0065\u0072\u0020\u0074\u0068\u0061\u006E\u0020\u0064\u006F\u0067\u0073", 26)), ((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:46
  return (matched_result);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:47
}

int run_regex_named_group__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = run_regex_named_group(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:44
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 44, in run_regex_named_group\n", "run_regex_named_group() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:44
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)run_regex_named_group__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000run_regex_named_group\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000run_regex_named_group\000";

} // extern C

