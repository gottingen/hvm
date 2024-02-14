#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double worker_func(double a, void* handle_2_71828182846=((void*)(int64_t)0));
int worker_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double worker_func(double a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:25
  return ((2.0000000000000000000e+00 * a));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:26
}

int worker_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("worker_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:25
    auto ret = worker_func(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 25, in worker_func\n", "expect 'pos_args[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:25
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = worker_func(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 25, in worker_func\n", "expect 'args_t[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:25
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 25, in worker_func\n", "worker_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:25
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)worker_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000worker_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000worker_func\000";

} // extern C

