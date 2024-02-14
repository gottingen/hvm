#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple enumerate_object(const RTView& cons, void* handle_2_71828182846=((void*)(int64_t)0));
int enumerate_object__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple enumerate_object(const RTView& cons, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:44
  List ret1 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:45
  List ret2 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:46
  {
    auto const& __reserved_eval_enumerate_arg_i_val58540_0 = cons;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
    RTValue __reserved_next_holder_i_val55805_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
    int64_t __reserved_enum_pos_i_val10221_0 = (int64_t)0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
    auto __reserved_iter_i_val61513_0 = Kernel_Iterable::make(__reserved_eval_enumerate_arg_i_val58540_0);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
    auto __reserved_has_next_i_val45735_0 = __reserved_iter_i_val61513_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
    while (__reserved_has_next_i_val45735_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
      int64_t i = __reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
      ++__reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
      RTView val = __reserved_iter_i_val61513_0.NextView(&__reserved_has_next_i_val45735_0, &__reserved_next_holder_i_val55805_0);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:47
      {
        (void)(ret1).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:48
        (void)(ret2).append((val));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:49
      }
    }
  }
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(ret1), (ret2)}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:50
}

int enumerate_object__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"cons"};
    KwargsUnpackHelper helper("enumerate_object", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:44
    auto ret = enumerate_object((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:44
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = enumerate_object((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:44
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 44, in enumerate_object\n", "enumerate_object() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:44
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)enumerate_object__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000enumerate_object\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000enumerate_object\000";

} // extern C

