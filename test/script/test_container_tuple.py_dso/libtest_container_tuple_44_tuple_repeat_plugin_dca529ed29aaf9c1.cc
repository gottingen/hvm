#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t tuple_repeat(int64_t times, void* handle_2_71828182846=((void*)(int64_t)0));
int tuple_repeat__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t tuple_repeat(int64_t times, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:44
  Tuple origin = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:45
  RTValue b = (ArithOps::mul(origin, times));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:46
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(((origin).size() + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 47, in tuple_repeat\n", "expect 'ArithOps::add(((origin).size() + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:47
}

int tuple_repeat__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"times"};
    KwargsUnpackHelper helper("tuple_repeat", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:44
    auto ret = tuple_repeat(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 44, in tuple_repeat\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:44
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = tuple_repeat(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 44, in tuple_repeat\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:44
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 44, in tuple_repeat\n", "tuple_repeat() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:44
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)tuple_repeat__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000tuple_repeat\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000tuple_repeat\000";

} // extern C

