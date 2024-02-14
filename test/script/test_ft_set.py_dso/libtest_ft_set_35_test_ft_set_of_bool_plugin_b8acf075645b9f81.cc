#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_ft_set_of_bool(void* handle_2_71828182846=((void*)(int64_t)0));
int test_ft_set_of_bool__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_ft_set_of_bool(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:35
  FTSet<bool> a = (Kernel_FTSet::make<bool>());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:36
  return (None);
}

int test_ft_set_of_bool__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_ft_set_of_bool(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:35
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_set.py\", line 35, in test_ft_set_of_bool\n", "test_ft_set_of_bool() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_set.py:35
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_ft_set_of_bool__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_ft_set_of_bool\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_ft_set_of_bool\000";

} // extern C

