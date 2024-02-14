#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t cpp_kw_as_arg(void* handle_2_71828182846=((void*)(int64_t)0));
int cpp_kw_as_arg__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t cpp_kw_as_arg(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:34
  Unicode CPP_KW_int = (unicode_view(U"\u0033", 1));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:35
  return (Kernel_int64_t::make((CPP_KW_int)));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:36
}

int cpp_kw_as_arg__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = cpp_kw_as_arg(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:34
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 34, in cpp_kw_as_arg\n", "cpp_kw_as_arg() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:34
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)cpp_kw_as_arg__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000cpp_kw_as_arg\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000cpp_kw_as_arg\000";

} // extern C

