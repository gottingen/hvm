#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t sum(const List& l, void* handle_2_71828182846=((void*)(int64_t)0));
int sum__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t sum(const List& l, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:106
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:107
  {
    const List&__reserved_eval_cons_x40652_0 = l;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
    auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0.begin();  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
    auto __reserved_iter_end_x1804_0 = __reserved_eval_cons_x40652_0.end();  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
    while ((__reserved_iter_x39111_0 != __reserved_iter_end_x1804_0)) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
      RTView x = internal::TypeAsHelper<RTView>::run((*__reserved_iter_x39111_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 108, in sum\n", "expect 'the element in l' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
      ++__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:108
      {
        s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, x)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 109, in sum\n", "expect 'ArithOps::add(s, x)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:109
      }
    }
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:111
}

int sum__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"l"};
    KwargsUnpackHelper helper("sum", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:106
    auto ret = sum(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 106, in sum\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:106
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = sum(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 106, in sum\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:106
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 106, in sum\n", "sum() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:106
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)sum__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000sum\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000sum\000";

} // extern C

