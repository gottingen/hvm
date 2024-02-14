#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_iterator(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_iterator__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_iterator(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:156
  List result = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:157
  {
    const RTView&__reserved_eval_cons_x40652_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
    RTValue __reserved_next_holder_x49879_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
    auto __reserved_iter_x39111_0 = Kernel_Iterable::make(__reserved_eval_cons_x40652_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
    auto __reserved_has_next_x29324_0 = __reserved_iter_x39111_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
    while (__reserved_has_next_x29324_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
      RTView x = __reserved_iter_x39111_0.NextView(&__reserved_has_next_x29324_0, &__reserved_next_holder_x49879_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:158
      {
        (void)(result).append((x));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:159
      }
    }
  }
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:160
}

int generic_iterator__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("generic_iterator", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:156
    auto ret = generic_iterator((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:156
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_iterator((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:156
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 156, in generic_iterator\n", "generic_iterator() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:156
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_iterator__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_iterator\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_iterator\000";

} // extern C

