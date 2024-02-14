#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_var_across_try(void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_var_across_try__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_var_across_try(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:124
  Unicode s = (unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:125
  try {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:126
    String s_ssa_74024035 = (kernel_unicode_encode(GenericValueConverter<unicode_view>{}(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:127
    return (RTValue(s_ssa_74024035));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:128
  }
  catch (...) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:129
    int64_t s_ssa_49819269 = (kernel_str___len__(GenericValueConverter<string_view>{}(kernel_unicode_encode(GenericValueConverter<unicode_view>{}(s)))));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:130
    return (RTValue(s_ssa_49819269));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:131
  }
  return (None);
}

int dynamic_var_across_try__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = dynamic_var_across_try(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:124
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 124, in dynamic_var_across_try\n", "dynamic_var_across_try() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:124
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_var_across_try__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_var_across_try\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_var_across_try\000";

} // extern C

