#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t for_with_neg_step2(void* handle_2_71828182846=((void*)(int64_t)0));
int for_with_neg_step2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t for_with_neg_step2(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:176
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:177
  for (int64_t i_iter_ = (int64_t)5; i_iter_ > (int64_t)1; i_iter_ += (int64_t)-2) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:178
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:178
    s = (s + i);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:179
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:180
}

int for_with_neg_step2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = for_with_neg_step2(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:176
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 176, in for_with_neg_step2\n", "for_with_neg_step2() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:176
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)for_with_neg_step2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000for_with_neg_step2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000for_with_neg_step2\000";

} // extern C

