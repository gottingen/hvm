#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t comp(int64_t x, int64_t y, void* handle_2_71828182846=((void*)(int64_t)0));
int comp__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue pushpop_func(const List& x, const RTView& item, void* handle_2_71828182846=((void*)(int64_t)0));
int pushpop_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t comp(int64_t x, int64_t y, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:145
  if (Kernel_bool::make(((x > y)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:146
    return ((int64_t)-1);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:147
  }
  if (Kernel_bool::make(((x < y)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:148
    return ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:149
  }
  return ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:150
}

int comp__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"x", "y"};
    KwargsUnpackHelper helper("comp", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:145
    auto ret = comp(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 145, in comp\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 145, in comp\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:145
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = comp(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 145, in comp\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 145, in comp\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:145
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 145, in comp\n", "comp() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:145
    }
  }

  return 0;
}

HERCULES_DLL RTValue pushpop_func(const List& x, const RTView& item, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:152
  return (kernel_list_module_heap_pushpop({(x), (item), (MakeUserFunction(string_view("comp", 4), (HerculesBackendPackedCFunc)comp__c_api, handle_2_71828182846))}));  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:153
}

int pushpop_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"x", "item"};
    KwargsUnpackHelper helper("pushpop_func", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:152
    auto ret = pushpop_func(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 152, in pushpop_func\n", "expect 'pos_args[0]' is 'List' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:152
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = pushpop_func(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 152, in pushpop_func\n", "expect 'args_t[0]' is 'List' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:152
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_list_heap.py\", line 152, in pushpop_func\n", "pushpop_func() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_list_heap.py:152
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)pushpop_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000pushpop_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000comp\000pushpop_func\000";

} // extern C

