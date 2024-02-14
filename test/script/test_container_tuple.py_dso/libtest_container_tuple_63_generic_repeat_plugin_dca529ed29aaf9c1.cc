#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t generic_repeat(int64_t times, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_repeat__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t generic_repeat(int64_t times, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:63
  List origin_list = (Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:64
  RTValue origin = (((origin_list).get_item(((int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:65
  RTValue b = (ArithOps::mul(origin, times));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:66
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add((kernel_object___len__(origin) + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 67, in generic_repeat\n", "expect 'ArithOps::add((kernel_object___len__(origin) + kernel_object___len__(b)), kernel_object___fused_getitem__(b, {(RTView((int64_t)5))}))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:67
}

int generic_repeat__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"times"};
    KwargsUnpackHelper helper("generic_repeat", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:63
    auto ret = generic_repeat(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 63, in generic_repeat\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:63
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_repeat(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 63, in generic_repeat\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:63
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 63, in generic_repeat\n", "generic_repeat() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:63
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_repeat__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_repeat\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_repeat\000";

} // extern C
