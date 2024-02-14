#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t assert_false(void* handle_2_71828182846=((void*)(int64_t)0));
int assert_false__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t assert_false(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:60
  if (!((bool)0)) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 61, in assert_false\n", "assert failed"); }  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:61
  return ((int64_t)-1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:62
  return (internal::TypeAsHelper<int64_t>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'int64_t' type"));
}

int assert_false__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = assert_false(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:60
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 60, in assert_false\n", "assert_false() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:60
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)assert_false__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000assert_false\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000assert_false\000";

} // extern C

