#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t my_key(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int my_key__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue any_key_sort(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int any_key_sort__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t my_key(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:625
  return ((x * (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:626
}

int my_key__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("my_key", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:625
    auto ret = my_key(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 625, in my_key\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:625
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_key(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 625, in my_key\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:625
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 625, in my_key\n", "my_key() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:625
    }
  }

  return 0;
}

HERCULES_DLL RTValue any_key_sort(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:632
  (void)kernel_object_sort(a, {(::hercules::runtime::Kwargs({{"key", MakeUserFunction(string_view("my_key", 6), (HerculesBackendPackedCFunc)my_key__c_api, handle_2_71828182846)}}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:633
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:634
}

int any_key_sort__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("any_key_sort", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:632
    auto ret = any_key_sort((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:632
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = any_key_sort((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:632
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 632, in any_key_sort\n", "any_key_sort() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:632
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)any_key_sort__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000any_key_sort\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000my_key\000any_key_sort\000";

} // extern C

