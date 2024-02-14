#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_dict_exception_pop(void* handle_2_71828182846=((void*)(int64_t)0));
int generic_dict_exception_pop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_dict_exception_pop(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:332
  RTValue a = (((Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0061", 1), (int64_t)1}}))})).get_item(((int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:333
  (void)kernel_object_pop(a, {(unicode_view(U"\u0062", 1))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:334
  return (None);
}

int generic_dict_exception_pop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = generic_dict_exception_pop(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:332
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 332, in generic_dict_exception_pop\n", "generic_dict_exception_pop() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:332
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_dict_exception_pop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_dict_exception_pop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_dict_exception_pop\000";

} // extern C

