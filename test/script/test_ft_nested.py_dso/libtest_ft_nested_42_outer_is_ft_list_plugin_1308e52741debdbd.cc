#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue outer_is_ft_list(void* handle_2_71828182846=((void*)(int64_t)0));
int outer_is_ft_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue outer_is_ft_list(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:42
  FTList<FTList<int64_t>> l = (Kernel_FTList::make<FTList<int64_t>>(std::initializer_list<FTList<FTList<int64_t>>::value_type>{(Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{})), (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:43
  (void)(l).set_item(((int64_t)0), (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)1), ((int64_t)2)})));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:44
  return (RTValue(l));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:45
}

int outer_is_ft_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = outer_is_ft_list(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:42
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 42, in outer_is_ft_list\n", "outer_is_ft_list() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:42
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)outer_is_ft_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000outer_is_ft_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000outer_is_ft_list\000";

} // extern C

