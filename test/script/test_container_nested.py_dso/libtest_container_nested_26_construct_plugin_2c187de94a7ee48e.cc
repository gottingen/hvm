#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue construct(void* handle_2_71828182846=((void*)(int64_t)0));
int construct__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue construct(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:26
  List l = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)2), ((int64_t)4)})), (Kernel_Dict::make(std::initializer_list<Dict::value_type>{{(int64_t)3, unicode_view(U"\u0061", 1)}})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)4), ((int64_t)5)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:27
  Tuple t = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:28
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(l), (t)})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:29
}

int construct__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = construct(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:26
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_nested.py\", line 26, in construct\n", "construct() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:26
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)construct__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000construct\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000construct\000";

} // extern C

