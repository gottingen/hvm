#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_var_across_while_loop(void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_var_across_while_loop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_var_across_while_loop(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:113
  Unicode s = (unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:114
  int64_t i = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:115
  while ((i < (int64_t)1)) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:116
    String s_ssa_74024035 = (kernel_unicode_encode(GenericValueConverter<unicode_view>{}(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:117
    return (RTValue(s_ssa_74024035));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:118
  }
  return (None);
}

int dynamic_var_across_while_loop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = dynamic_var_across_while_loop(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:113
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 113, in dynamic_var_across_while_loop\n", "dynamic_var_across_while_loop() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:113
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_var_across_while_loop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_var_across_while_loop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_var_across_while_loop\000";

} // extern C

