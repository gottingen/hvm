#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t list_repeat_object_type_times(void* handle_2_71828182846=((void*)(int64_t)0));
int list_repeat_object_type_times__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t list_repeat_object_type_times(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:65
  List origin = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:66
  List b = (ArithOps::mul(origin, ((origin).get_item(((int64_t)1)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:67
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 68, in list_repeat_object_type_times\n", "expect 'ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:68
}

int list_repeat_object_type_times__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = list_repeat_object_type_times(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:65
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 65, in list_repeat_object_type_times\n", "list_repeat_object_type_times() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:65
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_repeat_object_type_times__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_repeat_object_type_times\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_repeat_object_type_times\000";

} // extern C

