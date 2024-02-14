#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue any_reverse_sort(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int any_reverse_sort__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue any_reverse_sort(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:611
  (void)kernel_object_sort(a, {(::hercules::runtime::Kwargs({{"reverse", (bool)1}}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:612
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:613
}

int any_reverse_sort__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("any_reverse_sort", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:611
    auto ret = any_reverse_sort((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:611
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = any_reverse_sort((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:611
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 611, in any_reverse_sort\n", "any_reverse_sort() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:611
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)any_reverse_sort__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000any_reverse_sort\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000any_reverse_sort\000";

} // extern C

