#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL String test_bytes_and1(void* handle_2_71828182846=((void*)(int64_t)0));
int test_bytes_and1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL String test_bytes_and1(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:276
  return (ArithOps::And(string_view("hello", 5), string_view("world", 5)));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:277
}

int test_bytes_and1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_bytes_and1(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:276
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 276, in test_bytes_and1\n", "test_bytes_and1() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:276
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_bytes_and1__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_bytes_and1\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_bytes_and1\000";

} // extern C

