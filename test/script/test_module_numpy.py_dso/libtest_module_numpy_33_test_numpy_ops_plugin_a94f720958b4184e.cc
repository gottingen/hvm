#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_numpy_ops(void* handle_2_71828182846=((void*)(int64_t)0));
int test_numpy_ops__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_numpy_ops(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py:33
  RTValue a = (call_native_function("numpy_ops_zeros", Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)3)})));  // /home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py:34
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py:35
}

int test_numpy_ops__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_numpy_ops(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py:33
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py\", line 33, in test_numpy_ops\n", "test_numpy_ops() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_numpy.py:33
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_numpy_ops__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_numpy_ops\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_numpy_ops\000";

} // extern C

