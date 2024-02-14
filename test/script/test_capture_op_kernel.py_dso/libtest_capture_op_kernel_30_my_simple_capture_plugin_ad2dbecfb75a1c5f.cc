#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue my_simple_capture(void* handle_2_71828182846=((void*)(int64_t)0));
int my_simple_capture__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_simple_capture(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py:30
  RTView dev = (GetClosureVar(handle_2_71828182846, string_view("DeviceOp", 8), string_view("DeviceOp_10380827953698380690_0", 31)));  // /home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py:30
  return (kernel_object_call(dev, {}));  // /home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py:31
}

int my_simple_capture__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_simple_capture(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py:30
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py\", line 30, in my_simple_capture\n", "my_simple_capture() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_capture_op_kernel.py:30
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_simple_capture__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_simple_capture\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000my_simple_capture\000";

} // extern C

