#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue _make_device(void* handle_2_71828182846=((void*)(int64_t)0));
int _make_device__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue _make_device(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:77
  RTValue d = (make_native_op(string_view("DeviceOp", 8), string_view("device", 6), unicode_view(U"\u0063\u0070\u0075", 3)));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:78
  RTValue c = (make_native_op(string_view("DeviceOp", 8), string_view("device", 6), unicode_view(U"\u0063\u0070\u0075", 3)));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:79
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(d), (c)})));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:80
}

int _make_device__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = _make_device(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:77
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 77, in _make_device\n", "_make_device() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:77
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)_make_device__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000_make_device\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000_make_device\000";

} // extern C

