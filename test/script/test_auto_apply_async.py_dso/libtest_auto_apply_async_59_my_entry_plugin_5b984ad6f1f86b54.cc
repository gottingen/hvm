#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List my_py_func(const List& x, void* handle_2_71828182846=((void*)(int64_t)0));
int my_py_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_entry(void* handle_2_71828182846=((void*)(int64_t)0));
int my_entry__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List my_py_func(const List& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:30
  return ([handle_2_71828182846, x]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
    (void)(__reserved_list_comp_result).reserve(((x).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
    {
      const List&__reserved_eval_cons_v10398_0 = x;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
      auto __reserved_iter_v27369_0 = __reserved_eval_cons_v10398_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
      auto __reserved_iter_end_v24634_0 = __reserved_eval_cons_v10398_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
      while ((__reserved_iter_v27369_0 != __reserved_iter_end_v24634_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
        unicode_view v = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 31, in my_py_func\n", "expect 'the element in x' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
        ++__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
        {
          (void)(__reserved_list_comp_result).append((RTValue(kernel_unicode_lower(v))));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:31
}

int my_py_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("my_py_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:30
    auto ret = my_py_func(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 30, in my_py_func\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_py_func(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 30, in my_py_func\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 30, in my_py_func\n", "my_py_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:30
    }
  }

  return 0;
}

HERCULES_DLL RTValue my_entry(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:59
  List a = (kernel_list_fused_repeat_many({(unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5)), (unicode_view(U"\u0057\u006F\u0072\u006C\u0064", 5))}, (int64_t)10));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:60
  RTValue b = (ApplyAsync(MakeUserFunction(string_view("my_py_func", 10), (HerculesBackendPackedCFunc)my_py_func__c_api, handle_2_71828182846), {(a)}, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:61
  return (kernel_object_get(b, {}));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:62
}

int my_entry__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_entry(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:59
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 59, in my_entry\n", "my_entry() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:59
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_entry__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_entry\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000my_py_func\000my_entry\000";

} // extern C

