#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_and_or(void* handle_2_71828182846=((void*)(int64_t)0));
int test_and_or__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_and_or(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:320
  RTValue a = (ArithOps::Or(ArithOps::And((int64_t)1, unicode_view()), Kernel_List::make(std::initializer_list<List::value_type>{})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:321
  RTValue b = (ArithOps::Or(ArithOps::And((int64_t)0, unicode_view(U"\u0031", 1)), Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2)})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:322
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a), (b)})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:323
}

int test_and_or__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_and_or(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:320
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 320, in test_and_or\n", "test_and_or() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:320
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_and_or__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_and_or\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_and_or\000";

} // extern C

