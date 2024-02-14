#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_var_across_for_loop2(void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_var_across_for_loop2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_var_across_for_loop2(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:102
  Unicode s = (unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:103
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)1; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:104
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:104
    int64_t s_ssa_74024035 = (i);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:105
    return (RTValue(s_ssa_74024035));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:106
  }
  return (RTValue(s));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:107
}

int dynamic_var_across_for_loop2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = dynamic_var_across_for_loop2(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:102
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 102, in dynamic_var_across_for_loop2\n", "dynamic_var_across_for_loop2() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:102
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_var_across_for_loop2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_var_across_for_loop2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_var_across_for_loop2\000";

} // extern C

