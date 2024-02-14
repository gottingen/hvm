#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t f(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int f__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue run_function(void* handle_2_71828182846=((void*)(int64_t)0));
int run_function__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t f(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:90
  List x = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:91
  return (internal::TypeAsHelper<int64_t>::run(((x).get_item((i))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 92, in f\n", "expect '(x).get_item((i))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:92
}

int f__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("f", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:90
    auto ret = f(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 90, in f\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:90
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = f(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 90, in f\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:90
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 90, in f\n", "f() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:90
    }
  }

  return 0;
}

HERCULES_DLL RTValue run_function(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:95
  UserDataRef thread_pool = (make_native_userdata(string_view("ThreadPoolExecutor", 18), (int64_t)4, (bool)1));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:96
  RTValue ret = ((thread_pool).generic_call_attr("ParallelFor", {(MakeUserFunction(string_view("f", 1), (HerculesBackendPackedCFunc)f__c_api, handle_2_71828182846)), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)0), ((int64_t)1), ((int64_t)2), ((int64_t)3)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:97
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, ret);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:98
  return (None);
}

int run_function__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = run_function(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:95
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 95, in run_function\n", "run_function() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:95
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)run_function__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000run_function\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000f\000run_function\000";

} // extern C

