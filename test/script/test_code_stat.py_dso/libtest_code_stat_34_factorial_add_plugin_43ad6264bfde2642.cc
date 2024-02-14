#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t factorial(int64_t n, void* handle_2_71828182846=((void*)(int64_t)0));
int factorial__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t factorial_add(int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int factorial_add__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t factorial(int64_t n, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:27
  if (Kernel_bool::make(((n <= (int64_t)1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:28
    return (n);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:29
  }
  return ((n * factorial((n - (int64_t)1), handle_2_71828182846)));  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:31
}

int factorial__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"n"};
    KwargsUnpackHelper helper("factorial", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:27
    auto ret = factorial(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 27, in factorial\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = factorial(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 27, in factorial\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 27, in factorial\n", "factorial() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:27
    }
  }

  return 0;
}

HERCULES_DLL int64_t factorial_add(int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:34
  int64_t m = (factorial(a, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:35
  int64_t n = (factorial(b, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:36
  return ((m + n));  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:38
}

int factorial_add__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("factorial_add", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:34
    auto ret = factorial_add(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 34, in factorial_add\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 34, in factorial_add\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:34
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = factorial_add(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 34, in factorial_add\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 34, in factorial_add\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:34
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_code_stat.py\", line 34, in factorial_add\n", "factorial_add() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_code_stat.py:34
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)factorial_add__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000factorial_add\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000factorial\000factorial_add\000";

} // extern C

