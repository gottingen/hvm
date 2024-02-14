#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue builtin_construct(void* handle_2_71828182846=((void*)(int64_t)0));
int builtin_construct__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue builtin_construct(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:31
  List l = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), (Kernel_Set::make((Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)2), ((int64_t)4)})))), (Kernel_Dict::make((Kernel_Dict::make(std::initializer_list<Dict::value_type>{{(int64_t)3, unicode_view(U"\u0061", 1)}})))), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)4), ((int64_t)5)}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:35
  Tuple t = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:36
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(l), (t)})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:37
}

int builtin_construct__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = builtin_construct(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:31
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_nested.py\", line 31, in builtin_construct\n", "builtin_construct() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:31
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)builtin_construct__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000builtin_construct\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000builtin_construct\000";

} // extern C

