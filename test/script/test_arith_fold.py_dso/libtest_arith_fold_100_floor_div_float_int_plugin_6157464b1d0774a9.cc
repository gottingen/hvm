#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue floor_div_float_int(void* handle_2_71828182846=((void*)(int64_t)0));
int floor_div_float_int__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue floor_div_float_int(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:100
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(1.0000000000000000000e+00), (-2.0000000000000000000e+00), (-2.0000000000000000000e+00), (-2.1000000000000000000e+01), (0.0000000000000000000e+00)})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:101
}

int floor_div_float_int__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = floor_div_float_int(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:100
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 100, in floor_div_float_int\n", "floor_div_float_int() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:100
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)floor_div_float_int__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000floor_div_float_int\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000floor_div_float_int\000";

} // extern C

