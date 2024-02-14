#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t more_control_flow(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int more_control_flow__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t more_control_flow(int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:114
  int64_t sum_ = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:115
  while ((a > (int64_t)0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:116
    sum_ = (sum_ + a);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:117
    a = (a - (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:118
    if ((Kernel_bool::make(((a == (int64_t)3))) || (Kernel_bool::make(((a == (int64_t)4))) && Kernel_bool::make(((a > (int64_t)0)))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:119
      break;
    }
    if (Kernel_bool::make(((a == (int64_t)10)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:121
      a = (a - (int64_t)2);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:122
      continue;
    }
  }
  return (sum_);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:124
}

int more_control_flow__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("more_control_flow", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:114
    auto ret = more_control_flow(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 114, in more_control_flow\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:114
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = more_control_flow(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 114, in more_control_flow\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:114
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 114, in more_control_flow\n", "more_control_flow() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:114
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)more_control_flow__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000more_control_flow\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000more_control_flow\000";

} // extern C
