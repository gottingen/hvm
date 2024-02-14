#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t for_with_neg_step3(int64_t step, void* handle_2_71828182846=((void*)(int64_t)0));
int for_with_neg_step3__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t for_with_neg_step3(int64_t step, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:185
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:186
  for (int64_t i_iter_ = (int64_t)5; step > 0 ? (i_iter_ < (int64_t)1) : i_iter_ > (int64_t)1; i_iter_ += step) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:187
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:187
    s = (s + i);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:188
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:189
}

int for_with_neg_step3__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"step"};
    KwargsUnpackHelper helper("for_with_neg_step3", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:185
    auto ret = for_with_neg_step3(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 185, in for_with_neg_step3\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:185
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = for_with_neg_step3(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 185, in for_with_neg_step3\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:185
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 185, in for_with_neg_step3\n", "for_with_neg_step3() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:185
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)for_with_neg_step3__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000for_with_neg_step3\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000for_with_neg_step3\000";

} // extern C

