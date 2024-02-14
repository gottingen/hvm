#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode make_str(const unicode_view& s, void* handle_2_71828182846=((void*)(int64_t)0));
int make_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue opt_loop_var(const List& a, bool cond, void* handle_2_71828182846=((void*)(int64_t)0));
int opt_loop_var__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode make_str(const unicode_view& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:33
  return (ArithOps::add(unicode_view(U"\u005B\u0043\u004C\u0053\u005D\u0020", 6), s));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:34
}

int make_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("make_str", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:33
    auto ret = make_str(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 33, in make_str\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = make_str(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 33, in make_str\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 33, in make_str\n", "make_str() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:33
    }
  }

  return 0;
}

HERCULES_DLL RTValue opt_loop_var(const List& a, bool cond, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:36
  List d = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:37
  {
    const List&__reserved_eval_cons_c17499_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
    auto __reserved_iter_c54642_0 = __reserved_eval_cons_c17499_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
    auto __reserved_iter_end_c38345_0 = __reserved_eval_cons_c17499_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
    while ((__reserved_iter_c54642_0 != __reserved_iter_end_c38345_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
      RTView c = internal::TypeAsHelper<RTView>::run((*__reserved_iter_c54642_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 38, in opt_loop_var\n", "expect 'the element in a' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
      ++__reserved_iter_c54642_0;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
      {
        RTValue c_holder_74024035;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:38
        if (Kernel_bool::make((cond))) {  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:39
          c_holder_74024035 = RTValue(make_str(internal::TypeAsHelper<unicode_view>::run((c), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 40, in opt_loop_var\n", "expect 'c' is 'py::str' type"), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:40
          c = c_holder_74024035;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:40
        } else {
          c_holder_74024035 = RTValue(make_str(unicode_view(U"\u0068\u0069", 2), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:42
          c = c_holder_74024035;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:42
        }
        (void)(d).append((c));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:43
      }
    }
  }
  return (RTValue(d));  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:44
}

int opt_loop_var__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "cond"};
    KwargsUnpackHelper helper("opt_loop_var", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:36
    auto ret = opt_loop_var(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 36, in opt_loop_var\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 36, in opt_loop_var\n", "expect 'pos_args[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = opt_loop_var(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 36, in opt_loop_var\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 36, in opt_loop_var\n", "expect 'args_t[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py\", line 36, in opt_loop_var\n", "opt_loop_var() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_view_optimization.py:36
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)opt_loop_var__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000opt_loop_var\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000make_str\000opt_loop_var\000";

} // extern C

