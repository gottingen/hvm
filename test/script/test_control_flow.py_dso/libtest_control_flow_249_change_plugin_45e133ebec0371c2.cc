#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List change(void* handle_2_71828182846=((void*)(int64_t)0));
int change__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List change(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:250
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:251
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)5; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:252
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:252
    i = (i + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:253
    (void)(ret).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:254
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:255
}

int change__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = change(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:250
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 250, in change\n", "change() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:250
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)change__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000change\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000change\000";

} // extern C

