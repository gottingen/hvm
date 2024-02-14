#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple run_regex(void* handle_2_71828182846=((void*)(int64_t)0));
int run_regex__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple run_regex(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:29
  Regex regex = (Kernel_Regex::make((unicode_view(U"\u006E\u0061\u006D\u0065", 4)), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:30
  List tokens = ((regex).split((unicode_view(U"\u006D\u0079\u006E\u0061\u006D\u0065\u0069\u0073\u0048\u0045", 10))));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:31
  Tuple match_0 = ((regex).match((unicode_view(U"\u006D\u0079\u006E\u0061\u006D\u0065\u0069\u0073\u0048\u0045", 10)), ((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:32
  Tuple match_6 = ((regex).match((unicode_view(U"\u006D\u0079\u006E\u0061\u006D\u0065\u0069\u0073\u0048\u0045", 10)), ((int64_t)6)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:33
  Unicode new_str = ((regex).replace((unicode_view(U"\u006D\u0079\u006E\u0061\u006D\u0065\u0069\u0073\u0048\u0045", 10)), (unicode_view(U"\u004E\u0041\u004D\u0045", 4))));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:34
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(tokens), (match_0), (match_6), (new_str)}));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:35
}

int run_regex__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = run_regex(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:29
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 29, in run_regex\n", "run_regex() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:29
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)run_regex__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000run_regex\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000run_regex\000";

} // extern C

