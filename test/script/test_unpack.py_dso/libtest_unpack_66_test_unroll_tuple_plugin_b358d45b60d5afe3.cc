#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t test_unroll_tuple(void* handle_2_71828182846=((void*)(int64_t)0));
int test_unroll_tuple__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t test_unroll_tuple(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:67
  int64_t unroll_0_74024035 = ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t unroll_0_53636175 = ((int64_t)2);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t unroll_1_50046858 = ((int64_t)3);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t unroll_2_16633195 = ((int64_t)4);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t a = (unroll_0_74024035);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t b = (unroll_0_53636175);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t c = (unroll_1_50046858);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  int64_t d = (unroll_2_16633195);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:68
  return ((((a + b) + c) + d));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:69
}

int test_unroll_tuple__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_unroll_tuple(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:67
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 67, in test_unroll_tuple\n", "test_unroll_tuple() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:67
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_unroll_tuple__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_unroll_tuple\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_unroll_tuple\000";

} // extern C

