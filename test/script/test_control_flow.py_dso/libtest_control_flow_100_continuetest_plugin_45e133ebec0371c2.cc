#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t continuetest(int64_t n, void* handle_2_71828182846=((void*)(int64_t)0));
int continuetest__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t continuetest(int64_t n, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:101
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:102
  int64_t i = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:103
  while ((i < n)) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:104
    i = (i + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:105
    s = (s + i);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:106
    if (Kernel_bool::make(((s <= (int64_t)10)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:107
      continue;
    } else {
      break;
    }
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:111
}

int continuetest__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"n"};
    KwargsUnpackHelper helper("continuetest", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:101
    auto ret = continuetest(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 101, in continuetest\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:101
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = continuetest(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 101, in continuetest\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:101
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 101, in continuetest\n", "continuetest() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:101
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)continuetest__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000continuetest\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000continuetest\000";

} // extern C

