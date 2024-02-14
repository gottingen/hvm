#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue tuple_iter(const Tuple& a, void* handle_2_71828182846=((void*)(int64_t)0));
int tuple_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue tuple_iter(const Tuple& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:55
  {
    const Tuple&__reserved_eval_cons_s18529_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
    auto __reserved_iter_s17455_0 = __reserved_eval_cons_s18529_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
    auto __reserved_iter_end_s39070_0 = __reserved_eval_cons_s18529_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
    while ((__reserved_iter_s17455_0 != __reserved_iter_end_s39070_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
      RTView s = internal::TypeAsHelper<RTView>::run((*__reserved_iter_s17455_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 56, in tuple_iter\n", "expect 'the element in a' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
      ++__reserved_iter_s17455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:56
      {
        (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, s);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:57
      }
    }
  }
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:58
}

int tuple_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("tuple_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:55
    auto ret = tuple_iter(internal::TypeAsHelper<Tuple>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 55, in tuple_iter\n", "expect 'pos_args[0]' is 'Tuple' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:55
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = tuple_iter(internal::TypeAsHelper<Tuple>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 55, in tuple_iter\n", "expect 'args_t[0]' is 'Tuple' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:55
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 55, in tuple_iter\n", "tuple_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:55
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)tuple_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000tuple_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000tuple_iter\000";

} // extern C

