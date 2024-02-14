#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_ft_list_of_float(void* handle_2_71828182846=((void*)(int64_t)0));
int test_ft_list_of_float__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_ft_list_of_float(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:44
  FTList<double> a = (Kernel_FTList::make<double>(std::initializer_list<FTList<double>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:45
  return (None);
}

int test_ft_list_of_float__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_ft_list_of_float(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:44
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 44, in test_ft_list_of_float\n", "test_ft_list_of_float() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:44
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_ft_list_of_float__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_ft_list_of_float\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_ft_list_of_float\000";

} // extern C

