#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue cpp_kw_as_var(void* handle_2_71828182846=((void*)(int64_t)0));
int cpp_kw_as_var__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue cpp_kw_as_var(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:30
  Unicode CPP_KW_int = (unicode_view(U"\u0033", 1));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:31
  return (None);
}

int cpp_kw_as_var__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = cpp_kw_as_var(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:30
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 30, in cpp_kw_as_var\n", "cpp_kw_as_var() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:30
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)cpp_kw_as_var__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000cpp_kw_as_var\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000cpp_kw_as_var\000";

} // extern C

