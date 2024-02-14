#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t nested_loop(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int nested_loop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t nested_loop(int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:127
  int64_t sum_ = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:128
  int64_t cnt = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:129
  while ((cnt < (int64_t)5)) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:130
    for (int64_t i_iter_ = (int64_t)0; i_iter_ < a; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:131
      int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:131
      sum_ = (sum_ + (i + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:132
    }
    cnt = (cnt + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:133
  }
  return (sum_);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:134
}

int nested_loop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("nested_loop", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:127
    auto ret = nested_loop(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 127, in nested_loop\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:127
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = nested_loop(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 127, in nested_loop\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:127
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 127, in nested_loop\n", "nested_loop() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:127
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)nested_loop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000nested_loop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000nested_loop\000";

} // extern C

