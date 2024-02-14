#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func(int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t test_call1(void* handle_2_71828182846=((void*)(int64_t)0));
int test_call1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func(int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:79
  return ((a + b));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:80
}

int func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("func", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:79
    auto ret = func(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 79, in func\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 79, in func\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:79
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 79, in func\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 79, in func\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:79
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 79, in func\n", "func() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:79
    }
  }

  return 0;
}

HERCULES_DLL int64_t test_call1(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:82
  RTValue f = (RTValue(MakeUserFunction(string_view("func", 4), (HerculesBackendPackedCFunc)func__c_api, handle_2_71828182846)));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:83
  return (internal::TypeAsHelper<int64_t>::run((kernel_object_call(f, {((int64_t)3), (::hercules::runtime::Kwargs({{"b", (int64_t)1}}))})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 84, in test_call1\n", "expect 'kernel_object_call(f, {((int64_t)3), (::hercules::runtime::Kwargs({{\"b\", (int64_t)1}}))})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:84
}

int test_call1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_call1(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:82
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 82, in test_call1\n", "test_call1() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:82
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_call1__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_call1\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000func\000test_call1\000";

} // extern C

