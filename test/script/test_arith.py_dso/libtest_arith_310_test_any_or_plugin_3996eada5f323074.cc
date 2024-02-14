#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_any_or(void* handle_2_71828182846=((void*)(int64_t)0));
int test_any_or__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_any_or(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:310
  return (ArithOps::Or(unicode_view(), Kernel_Dict::make(std::initializer_list<Dict::value_type>{{(int64_t)4, (int64_t)5}})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:311
}

int test_any_or__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_any_or(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:310
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 310, in test_any_or\n", "test_any_or() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:310
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_any_or__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_any_or\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_any_or\000";

} // extern C

