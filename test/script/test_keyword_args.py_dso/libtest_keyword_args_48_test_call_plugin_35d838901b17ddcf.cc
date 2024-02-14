#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func(int64_t x, int64_t a=(int64_t)5, int64_t b=(int64_t)6, void* handle_2_71828182846=((void*)(int64_t)0));
int func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_call(void* handle_2_71828182846=((void*)(int64_t)0));
int test_call__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func(int64_t x, int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
  return (((x + a) + b));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:46
}

int func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"x", "a", "b"};
    static RTValue default_args[2]{RTValue((int64_t)5), RTValue((int64_t)6)};
    KwargsUnpackHelper helper("func", arg_names, 3, default_args, 2);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
    auto ret = func(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[0]' is 'int64_t' type"), (int64_t)5, (int64_t)6, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[1]' is 'int64_t' type"), (int64_t)6, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 3: {
        auto ret = func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 45, in func\n", "func() takes from 1 to 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:45
    }
  }

  return 0;
}

HERCULES_DLL RTValue test_call(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:48
  List result = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:49
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:51
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:52
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:53
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:54
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:60
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:61
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:64
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:65
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:66
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:69
  (void)(result).append((RTValue(func((int64_t)1, (int64_t)5, (int64_t)6, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:70
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:72
}

int test_call__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_call(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:48
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 48, in test_call\n", "test_call() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:48
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_call__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_call\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000func\000test_call\000";

} // extern C

