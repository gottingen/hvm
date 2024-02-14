#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t generic_repeat(int64_t times, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_repeat__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t generic_repeat(int64_t times, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:82
  List origin = (Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:83
  origin = internal::TypeAsHelper<List>::run(((origin).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 84, in generic_repeat\n", "expect '(origin).get_item(((int64_t)0))' is 'List' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:84
  List b = ((origin).repeat((times)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:85
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 86, in generic_repeat\n", "expect 'ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:86
}

int generic_repeat__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"times"};
    KwargsUnpackHelper helper("generic_repeat", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:82
    auto ret = generic_repeat(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 82, in generic_repeat\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:82
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_repeat(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 82, in generic_repeat\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:82
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 82, in generic_repeat\n", "generic_repeat() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:82
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

