#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue _myfunc_(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int _myfunc___c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue myfunc(void* handle_2_71828182846=((void*)(int64_t)0));
int myfunc__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue _myfunc_(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:28
  List x = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:29
  if (Kernel_bool::make((ArithOps::gt(((x).get_item((i))), (int64_t)5)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:30
    (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u006E\u006F\u0077\u0068\u0065\u0072\u0065", 7));  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:31
  }
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0063\u0072\u0061\u0073\u0068", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:33
  return (None);
}

int _myfunc___c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("_myfunc_", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:28
    auto ret = _myfunc_(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py\", line 28, in _myfunc_\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = _myfunc_(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py\", line 28, in _myfunc_\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py\", line 28, in _myfunc_\n", "_myfunc_() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:28
    }
  }

  return 0;
}

HERCULES_DLL RTValue myfunc(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:36
  (void)_myfunc_((int64_t)3, handle_2_71828182846);  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:37
  return (None);
}

int myfunc__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = myfunc(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:36
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py\", line 36, in myfunc\n", "myfunc() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_runtime_error_report_2.py:36
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)myfunc__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000myfunc\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000_myfunc_\000myfunc\000";

} // extern C

