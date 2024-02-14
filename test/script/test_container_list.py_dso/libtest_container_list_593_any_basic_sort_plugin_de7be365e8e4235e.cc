#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue any_basic_sort(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int any_basic_sort__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue any_basic_sort(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:593
  (void)kernel_object_sort(a, {});  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:594
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:595
}

int any_basic_sort__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("any_basic_sort", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:593
    auto ret = any_basic_sort((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:593
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = any_basic_sort((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:593
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 593, in any_basic_sort\n", "any_basic_sort() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:593
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)any_basic_sort__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000any_basic_sort\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000any_basic_sort\000";

} // extern C

