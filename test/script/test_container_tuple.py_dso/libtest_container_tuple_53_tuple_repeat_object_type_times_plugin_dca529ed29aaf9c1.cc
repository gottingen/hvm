#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t tuple_repeat_object_type_times(void* handle_2_71828182846=((void*)(int64_t)0));
int tuple_repeat_object_type_times__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t tuple_repeat_object_type_times(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:53
  Tuple origin = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:54
  RTValue b = (ArithOps::mul(origin, internal::TypeAsHelper<int64_t>::run(((origin).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 55, in tuple_repeat_object_type_times\n", "expect '(origin).get_item(((int64_t)1))' is 'int64_t' type")));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:55
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(((origin).size() + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 56, in tuple_repeat_object_type_times\n", "expect 'ArithOps::add(((origin).size() + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:56
}

int tuple_repeat_object_type_times__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = tuple_repeat_object_type_times(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:53
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 53, in tuple_repeat_object_type_times\n", "tuple_repeat_object_type_times() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:53
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)tuple_repeat_object_type_times__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000tuple_repeat_object_type_times\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000tuple_repeat_object_type_times\000";

} // extern C

