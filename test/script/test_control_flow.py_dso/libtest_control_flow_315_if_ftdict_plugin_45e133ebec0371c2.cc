#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool if_ftdict(const Dict& a, void* handle_2_71828182846=((void*)(int64_t)0));
int if_ftdict__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool if_ftdict(const Dict& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:316
  FTDict<int64_t, int64_t> b = (Kernel_FTDict::make<int64_t, int64_t>(std::initializer_list<FTDict<int64_t, int64_t>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:317
  {
    Iterator const& __reserved_eval_cons_k_v25089_0 = (a).item_iter();  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
    RTValue __reserved_next_holder_k_v64805_0;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
    auto __reserved_iter_k_v2602_0 = __reserved_eval_cons_k_v25089_0;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
    auto __reserved_has_next_k_v65279_0 = __reserved_iter_k_v2602_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
    while (__reserved_has_next_k_v65279_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
      const auto& __reserved_value_tup_k_v9601_0 = __reserved_iter_k_v2602_0.NextView(&__reserved_has_next_k_v65279_0, &__reserved_next_holder_k_v64805_0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
      if (kernel_builtins_len(__reserved_value_tup_k_v9601_0) != 2) { THROW_PY_ValueError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 318, in if_ftdict\n", "values to unpack mismatch"); }  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
      RTValue k = kernel_builtins_unpack<0, RTValue>(__reserved_value_tup_k_v9601_0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
      RTValue v = kernel_builtins_unpack<1, RTValue>(__reserved_value_tup_k_v9601_0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:318
      {
        (void)(b).set_item((internal::TypeAsHelper<int64_t>::run((k), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 319, in if_ftdict\n", "expect 'k' is 'int64_t' type")), (internal::TypeAsHelper<int64_t>::run((v), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 319, in if_ftdict\n", "expect 'v' is 'int64_t' type")));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:319
      }
    }
  }
  if (Kernel_bool::make((a))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:320
    return ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:321
  }
  return ((bool)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:322
}

int if_ftdict__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("if_ftdict", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:316
    auto ret = if_ftdict(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 316, in if_ftdict\n", "expect 'pos_args[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:316
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = if_ftdict(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 316, in if_ftdict\n", "expect 'args_t[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:316
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 316, in if_ftdict\n", "if_ftdict() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:316
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)if_ftdict__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000if_ftdict\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000if_ftdict\000";

} // extern C

