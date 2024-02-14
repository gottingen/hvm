#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode try_no_throw(void* handle_2_71828182846=((void*)(int64_t)0));
int try_no_throw__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode try_no_throw(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:27
  try {  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:28
    int64_t a = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:29
  }
  catch (...) {  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:30
    return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0065\u0072\u0072\u006F\u0072", 5)));  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:31
  }
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u006F\u006B", 2)));  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:32
}

int try_no_throw__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = try_no_throw(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:27
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_try_except.py\", line 27, in try_no_throw\n", "try_no_throw() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_try_except.py:27
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)try_no_throw__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000try_no_throw\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000try_no_throw\000";

} // extern C

