#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL FTSet<int64_t> test_return_ft_set(void* handle_2_71828182846=((void*)(int64_t)0));
int test_return_ft_set__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL FTSet<int64_t> test_return_ft_set(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:66
  return (Kernel_FTSet::make<int64_t>());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:67
}

int test_return_ft_set__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_return_ft_set(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:66
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_set.py\", line 66, in test_return_ft_set\n", "test_return_ft_set() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:66
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_return_ft_set__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_return_ft_set\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_return_ft_set\000";

} // extern C
