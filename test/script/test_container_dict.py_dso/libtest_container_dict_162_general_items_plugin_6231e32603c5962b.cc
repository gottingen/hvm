#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple general_items(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int general_items__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple general_items(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:162
  List k_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:163
  List v_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:164
  {
    RTValue const& __reserved_eval_cons_item40433_0 = kernel_object_items(a, {});  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
    RTValue __reserved_next_holder_item59531_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
    auto __reserved_iter_item5298_0 = Kernel_Iterable::make(__reserved_eval_cons_item40433_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
    auto __reserved_has_next_item54692_0 = __reserved_iter_item5298_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
    while (__reserved_has_next_item54692_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
      RTView item = __reserved_iter_item5298_0.NextView(&__reserved_has_next_item54692_0, &__reserved_next_holder_item59531_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:165
      {
        if (!((kernel_object___len__(item) == (int64_t)2))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 166, in general_items\n", "ValueError: values to unpack mismatch (expected 2)"); }  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:166
        RTValue k = (kernel_object___fused_getitem__(item, {(RTView((int64_t)0))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:166
        RTValue v = (kernel_object___fused_getitem__(item, {(RTView((int64_t)1))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:166
        (void)(k_list).append((k));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:167
        (void)(v_list).append((v));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:168
      }
    }
  }
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(k_list), (v_list)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:169
}

int general_items__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("general_items", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:162
    auto ret = general_items((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:162
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_items((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:162
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 162, in general_items\n", "general_items() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:162
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_items__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_items\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_items\000";

} // extern C

