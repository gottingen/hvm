#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_for_loop(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_for_loop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_for_loop(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:938
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:939
  {
    const RTView&__reserved_eval_cons_i45344_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
    RTValue __reserved_next_holder_i39341_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
    auto __reserved_iter_i7935_0 = Kernel_Iterable::make(__reserved_eval_cons_i45344_0);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
    auto __reserved_has_next_i63509_0 = __reserved_iter_i7935_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
    while (__reserved_has_next_i63509_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
      RTView i = __reserved_iter_i7935_0.NextView(&__reserved_has_next_i63509_0, &__reserved_next_holder_i39341_0);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:940
      {
        (void)(ret).append((i));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:941
      }
    }
  }
  return (RTValue(ret));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:942
}

int generic_for_loop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("generic_for_loop", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:938
    auto ret = generic_for_loop((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:938
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_for_loop((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:938
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 938, in generic_for_loop\n", "generic_for_loop() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:938
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_for_loop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_for_loop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_for_loop\000";

} // extern C

