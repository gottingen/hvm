#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t nested_for(void* handle_2_71828182846=((void*)(int64_t)0));
int nested_for__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t nested_for(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:144
  int64_t ss = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:145
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)10; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:146
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:146
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < (int64_t)10; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:147
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:147
      ss = (ss + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:148
    }
  }
  return (ss);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:149
}

int nested_for__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = nested_for(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:144
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 144, in nested_for\n", "nested_for() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:144
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)nested_for__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000nested_for\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000nested_for\000";

} // extern C

