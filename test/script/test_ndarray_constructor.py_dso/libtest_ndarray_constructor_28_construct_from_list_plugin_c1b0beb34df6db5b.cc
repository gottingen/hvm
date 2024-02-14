#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray construct_from_list(void* handle_2_71828182846=((void*)(int64_t)0));
int construct_from_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray construct_from_list(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:29
  List l = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)0), ((int64_t)1), ((int64_t)2), ((int64_t)3), ((int64_t)4), ((int64_t)5), ((int64_t)6), ((int64_t)7)}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:30
  return (Kernel_NDArray::make((l), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)4)})), (unicode_view(U"\u0069\u006E\u0074\u0033\u0032", 5)), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:31
}

int construct_from_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = construct_from_list(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:29
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 29, in construct_from_list\n", "construct_from_list() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:29
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)construct_from_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000construct_from_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000construct_from_list\000";

} // extern C

