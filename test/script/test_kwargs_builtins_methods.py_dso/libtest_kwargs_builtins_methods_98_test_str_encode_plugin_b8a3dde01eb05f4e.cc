#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_str_encode(void* handle_2_71828182846=((void*)(int64_t)0));
int test_str_encode__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_str_encode(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py:98
  Unicode a = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064", 11));  // /home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py:99
  return (RTValue(kernel_unicode_encode(GenericValueConverter<unicode_view>{}(a))));  // /home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py:101
}

int test_str_encode__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_str_encode(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py:98
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py\", line 98, in test_str_encode\n", "test_str_encode() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_kwargs_builtins_methods.py:98
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_str_encode__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_str_encode\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_str_encode\000";

} // extern C

