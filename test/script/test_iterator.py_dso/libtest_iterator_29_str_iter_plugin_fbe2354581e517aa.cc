#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue str_iter(const unicode_view& a, void* handle_2_71828182846=((void*)(int64_t)0));
int str_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue str_iter(const unicode_view& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:29
  {
    const unicode_view&__reserved_eval_cons_s18529_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
    auto __reserved_iter_s17455_0 = __reserved_eval_cons_s18529_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
    auto __reserved_iter_end_s39070_0 = __reserved_eval_cons_s18529_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
    while ((__reserved_iter_s17455_0 != __reserved_iter_end_s39070_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
      unicode_view s = unicode_view(__reserved_iter_s17455_0, 1);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
      ++__reserved_iter_s17455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:30
      {
        (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, s);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:31
      }
    }
  }
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:32
}

int str_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("str_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:29
    auto ret = str_iter(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 29, in str_iter\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = str_iter(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 29, in str_iter\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 29, in str_iter\n", "str_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:29
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_iter\000";

} // extern C

