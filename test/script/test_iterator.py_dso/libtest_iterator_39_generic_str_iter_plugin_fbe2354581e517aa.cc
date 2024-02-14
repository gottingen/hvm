#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_str_iter(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_str_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_str_iter(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:39
  {
    const RTView&__reserved_eval_cons_s18529_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
    RTValue __reserved_next_holder_s30740_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
    auto __reserved_iter_s17455_0 = Kernel_Iterable::make(__reserved_eval_cons_s18529_0);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
    auto __reserved_has_next_s5577_0 = __reserved_iter_s17455_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
    while (__reserved_has_next_s5577_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
      RTView s = __reserved_iter_s17455_0.NextView(&__reserved_has_next_s5577_0, &__reserved_next_holder_s30740_0);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:40
      {
        (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, s);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:41
      }
    }
  }
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:42
}

int generic_str_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("generic_str_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:39
    auto ret = generic_str_iter((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_str_iter((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 39, in generic_str_iter\n", "generic_str_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:39
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_str_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_str_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_str_iter\000";

} // extern C

