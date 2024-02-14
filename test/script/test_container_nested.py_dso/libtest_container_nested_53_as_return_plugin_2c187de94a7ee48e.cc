#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List as_return(void* handle_2_71828182846=((void*)(int64_t)0));
int as_return__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List as_return(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:53
  return (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)2), ((int64_t)4)})), (Kernel_Dict::make(std::initializer_list<Dict::value_type>{{(int64_t)3, unicode_view(U"\u0061", 1)}})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)4), ((int64_t)5)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:54
}

int as_return__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = as_return(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:53
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_nested.py\", line 53, in as_return\n", "as_return() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:53
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)as_return__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000as_return\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000as_return\000";

} // extern C

