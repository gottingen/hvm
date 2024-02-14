#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List set_general_iter(const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
int set_general_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List set_general_iter(const RTView& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:126
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:127
  {
    const RTView&__reserved_eval_cons_item40433_0 = s;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
    RTValue __reserved_next_holder_item59531_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
    auto __reserved_iter_item5298_0 = Kernel_Iterable::make(__reserved_eval_cons_item40433_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
    auto __reserved_has_next_item54692_0 = __reserved_iter_item5298_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
    while (__reserved_has_next_item54692_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
      RTView item = __reserved_iter_item5298_0.NextView(&__reserved_has_next_item54692_0, &__reserved_next_holder_item59531_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:128
      {
        (void)(ret).append((item));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:129
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:130
}

int set_general_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("set_general_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:126
    auto ret = set_general_iter((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:126
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = set_general_iter((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:126
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 126, in set_general_iter\n", "set_general_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:126
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_general_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_general_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_general_iter\000";

} // extern C

