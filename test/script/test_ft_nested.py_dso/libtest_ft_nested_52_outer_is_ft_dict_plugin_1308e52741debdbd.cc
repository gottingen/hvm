#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue outer_is_ft_dict(void* handle_2_71828182846=((void*)(int64_t)0));
int outer_is_ft_dict__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue outer_is_ft_dict(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:52
  FTDict<Unicode, FTList<int64_t>> d = (Kernel_FTDict::make<Unicode, FTList<int64_t>>(std::initializer_list<FTDict<Unicode, FTList<int64_t>>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:53
  (void)(d).set_item((GenericValueConverter<Unicode>{}(unicode_view(U"\u0031\u0032\u0033", 3))), (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)4), ((int64_t)5), ((int64_t)6)})));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:54
  return (RTValue(d));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:55
}

int outer_is_ft_dict__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = outer_is_ft_dict(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:52
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 52, in outer_is_ft_dict\n", "outer_is_ft_dict() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:52
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)outer_is_ft_dict__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000outer_is_ft_dict\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000outer_is_ft_dict\000";

} // extern C

