#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool if_ftset(const Set& a, void* handle_2_71828182846=((void*)(int64_t)0));
int if_ftset__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool if_ftset(const Set& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:307
  FTSet<int64_t> b = (Kernel_FTSet::make<int64_t>());  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:308
  {
    const Set&__reserved_eval_cons_x40652_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
    auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
    auto __reserved_iter_end_x1804_0 = __reserved_eval_cons_x40652_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
    while ((__reserved_iter_x39111_0 != __reserved_iter_end_x1804_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
      int64_t x = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_x39111_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 309, in if_ftset\n", "expect 'the element in a' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
      ++__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:309
      {
        (void)(b).add((x));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:310
      }
    }
  }
  if (Kernel_bool::make((b))) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:311
    return ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:312
  }
  return ((bool)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:313
}

int if_ftset__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("if_ftset", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:307
    auto ret = if_ftset(internal::TypeAsHelper<Set>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 307, in if_ftset\n", "expect 'pos_args[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:307
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = if_ftset(internal::TypeAsHelper<Set>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 307, in if_ftset\n", "expect 'args_t[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:307
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 307, in if_ftset\n", "if_ftset() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:307
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)if_ftset__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000if_ftset\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000if_ftset\000";

} // extern C

