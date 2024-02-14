#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t fibonacci(int64_t n, void* handle_2_71828182846=((void*)(int64_t)0));
int fibonacci__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t fibonacci(int64_t n, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:46
  if (Kernel_bool::make(((n <= (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:47
    return ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:48
  } else {
    if (Kernel_bool::make(((n == (int64_t)1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:49
      return ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:50
    } else {
      if (Kernel_bool::make(((n == (int64_t)2)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:51
        return ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:52
      } else {
        return ((fibonacci((n - (int64_t)1), handle_2_71828182846) + fibonacci((n - (int64_t)2), handle_2_71828182846)));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:54
      }
    }
  }
  return (internal::TypeAsHelper<int64_t>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'int64_t' type"));
}

int fibonacci__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"n"};
    KwargsUnpackHelper helper("fibonacci", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:46
    auto ret = fibonacci(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 46, in fibonacci\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:46
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = fibonacci(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 46, in fibonacci\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:46
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 46, in fibonacci\n", "fibonacci() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:46
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)fibonacci__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000fibonacci\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000fibonacci\000";

} // extern C

