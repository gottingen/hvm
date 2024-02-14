#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func_a(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int func_a__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func_b(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int func_b__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func_c(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int func_c__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func_a(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:27
  if (Kernel_bool::make(((x > (int64_t)100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:28
    return (x);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:29
  }
  return (func_c((x + (int64_t)1), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:30
}

int func_a__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("func_a", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:27
    auto ret = func_a(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 27, in func_a\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func_a(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 27, in func_a\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 27, in func_a\n", "func_a() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:27
    }
  }

  return 0;
}

HERCULES_DLL int64_t func_b(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:32
  if (Kernel_bool::make(((x > (int64_t)100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:33
    return (x);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:34
  }
  return (func_a((x + (int64_t)1), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:35
}

int func_b__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("func_b", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:32
    auto ret = func_b(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 32, in func_b\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func_b(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 32, in func_b\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 32, in func_b\n", "func_b() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:32
    }
  }

  return 0;
}

HERCULES_DLL int64_t func_c(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:37
  if (Kernel_bool::make(((x > (int64_t)100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:38
    return (x);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:39
  }
  return (func_b((x + (int64_t)1), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:40
}

int func_c__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("func_c", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:37
    auto ret = func_c(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 37, in func_c\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func_c(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 37, in func_c\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py\", line 37, in func_c\n", "func_c() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_ring.py:37
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)func_c__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000func_c\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000func_a\000func_b\000func_c\000";

} // extern C

