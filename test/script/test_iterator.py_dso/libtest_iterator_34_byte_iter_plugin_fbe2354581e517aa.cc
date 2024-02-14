#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue byte_iter(const string_view& a, void* handle_2_71828182846=((void*)(int64_t)0));
int byte_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue byte_iter(const string_view& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:34
  {
    const string_view&__reserved_eval_cons_s18529_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
    auto __reserved_iter_s17455_0 = __reserved_eval_cons_s18529_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
    auto __reserved_iter_end_s39070_0 = __reserved_eval_cons_s18529_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
    while ((__reserved_iter_s17455_0 != __reserved_iter_end_s39070_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
      int64_t s = *__reserved_iter_s17455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
      ++__reserved_iter_s17455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:35
      {
        (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, s);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:36
      }
    }
  }
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:37
}

int byte_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("byte_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:34
    auto ret = byte_iter(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 34, in byte_iter\n", "expect 'pos_args[0]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:34
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = byte_iter(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 34, in byte_iter\n", "expect 'args_t[0]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:34
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 34, in byte_iter\n", "byte_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:34
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)byte_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000byte_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000byte_iter\000";

} // extern C

