#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_set_of_ft_dict(void* handle_2_71828182846=((void*)(int64_t)0));
int test_set_of_ft_dict__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_set_of_ft_dict(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:50
  Set a = (Kernel_Set::make());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:51
  return (None);
}

int test_set_of_ft_dict__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_set_of_ft_dict(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:50
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py\", line 50, in test_set_of_ft_dict\n", "test_set_of_ft_dict() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:50
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_set_of_ft_dict__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_set_of_ft_dict\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_set_of_ft_dict\000";

} // extern C
