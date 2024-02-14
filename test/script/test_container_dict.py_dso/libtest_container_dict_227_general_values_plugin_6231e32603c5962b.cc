#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List general_values(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int general_values__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List general_values(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:227
  List v_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:228
  {
    RTValue const& __reserved_eval_cons_v10398_0 = kernel_object_values(a, {});  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
    RTValue __reserved_next_holder_v9615_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
    auto __reserved_iter_v27369_0 = Kernel_Iterable::make(__reserved_eval_cons_v10398_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
    auto __reserved_has_next_v57171_0 = __reserved_iter_v27369_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
    while (__reserved_has_next_v57171_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
      RTView v = __reserved_iter_v27369_0.NextView(&__reserved_has_next_v57171_0, &__reserved_next_holder_v9615_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:229
      {
        (void)(v_list).append((v));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:230
      }
    }
  }
  return (v_list);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:231
}

int general_values__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("general_values", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:227
    auto ret = general_values((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:227
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_values((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:227
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 227, in general_values\n", "general_values() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:227
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_values__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_values\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_values\000";

} // extern C

