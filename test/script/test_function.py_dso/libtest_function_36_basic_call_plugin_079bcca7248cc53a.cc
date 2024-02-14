#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t add_three(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int add_three__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t basic_call(int64_t x, int64_t z, void* handle_2_71828182846=((void*)(int64_t)0));
int basic_call__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t add_three(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:33
  return ((x + (int64_t)3));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:34
}

int add_three__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("add_three", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:33
    auto ret = add_three(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 33, in add_three\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = add_three(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 33, in add_three\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 33, in add_three\n", "add_three() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:33
    }
  }

  return 0;
}

HERCULES_DLL int64_t basic_call(int64_t x, int64_t z, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:37
  int64_t y = (add_three(x, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:38
  return (((y + z) + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:39
}

int basic_call__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"x", "z"};
    KwargsUnpackHelper helper("basic_call", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:37
    auto ret = basic_call(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 37, in basic_call\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 37, in basic_call\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = basic_call(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 37, in basic_call\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 37, in basic_call\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 37, in basic_call\n", "basic_call() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:37
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)basic_call__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000basic_call\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000add_three\000basic_call\000";

} // extern C

