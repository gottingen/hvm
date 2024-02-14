#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue general_pop(const RTView& l, int64_t index, void* handle_2_71828182846=((void*)(int64_t)0));
int general_pop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue general_pop(const RTView& l, int64_t index, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:542
  if (Kernel_bool::make(((index == (int64_t)-1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:543
    return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(kernel_object_pop(l, {})), (l)})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:544
  } else {
    return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(kernel_object_pop(l, {(index)})), (l)})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:546
  }
  return (None);
}

int general_pop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"l", "index"};
    KwargsUnpackHelper helper("general_pop", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:542
    auto ret = general_pop((pos_args[0]), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 542, in general_pop\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:542
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = general_pop((args_t[0]), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 542, in general_pop\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:542
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 542, in general_pop\n", "general_pop() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:542
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_pop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_pop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_pop\000";

} // extern C

