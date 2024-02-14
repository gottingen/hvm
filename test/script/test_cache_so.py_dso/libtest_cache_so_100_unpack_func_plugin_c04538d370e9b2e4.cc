#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue func(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t unpack_func(void* handle_2_71828182846=((void*)(int64_t)0));
int unpack_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue func(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:97
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), (((int64_t)2 * x))})));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:98
}

int func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:97
    auto ret = func(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cache_so.py\", line 97, in func\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:97
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cache_so.py\", line 97, in func\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:97
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cache_so.py\", line 97, in func\n", "func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:97
    }
  }

  return 0;
}

HERCULES_DLL int64_t unpack_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:100
  RTValue unpack_74024035 = (func((int64_t)1, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:101
  if (!((kernel_object___len__(unpack_74024035) == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
  RTValue a = (kernel_object___fused_getitem__(unpack_74024035, {(RTView((int64_t)0))}));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:101
  RTValue b = (kernel_object___fused_getitem__(unpack_74024035, {(RTView((int64_t)1))}));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:101
  RTValue unpack_49819269 = (func((int64_t)2, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:102
  if (!((kernel_object___len__(unpack_49819269) == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
  RTValue c = (kernel_object___fused_getitem__(unpack_49819269, {(RTView((int64_t)0))}));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:102
  RTValue d = (kernel_object___fused_getitem__(unpack_49819269, {(RTView((int64_t)1))}));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:102
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(ArithOps::add(ArithOps::add(a, b), c), d)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cache_so.py\", line 103, in unpack_func\n", "expect 'ArithOps::add(ArithOps::add(ArithOps::add(a, b), c), d)' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:103
}

int unpack_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = unpack_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:100
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cache_so.py\", line 100, in unpack_func\n", "unpack_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cache_so.py:100
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)unpack_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000unpack_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000func\000unpack_func\000";

} // extern C

