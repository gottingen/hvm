#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool if_set(const Set& a, void* handle_2_71828182846=((void*)(int64_t)0));
int if_set__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool if_set(const Set& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:268
  if (Kernel_bool::make((a))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:269
    return ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:270
  }
  return ((bool)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:271
}

int if_set__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("if_set", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:268
    auto ret = if_set(internal::TypeAsHelper<Set>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 268, in if_set\n", "expect 'pos_args[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:268
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = if_set(internal::TypeAsHelper<Set>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 268, in if_set\n", "expect 'args_t[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:268
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 268, in if_set\n", "if_set() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:268
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)if_set__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000if_set\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000if_set\000";

} // extern C

