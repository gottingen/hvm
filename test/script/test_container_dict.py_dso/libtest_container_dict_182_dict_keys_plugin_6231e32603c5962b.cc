#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List dict_keys(const Dict& a, void* handle_2_71828182846=((void*)(int64_t)0));
int dict_keys__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List dict_keys(const Dict& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:182
  List k_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:183
  {
    Iterator const& __reserved_eval_cons_k11112_0 = (a).key_iter();  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
    RTValue __reserved_next_holder_k33252_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
    auto __reserved_iter_k3285_0 = __reserved_eval_cons_k11112_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
    auto __reserved_has_next_k49776_0 = __reserved_iter_k3285_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
    while (__reserved_has_next_k49776_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
      RTView k = __reserved_iter_k3285_0.NextView(&__reserved_has_next_k49776_0, &__reserved_next_holder_k33252_0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:184
      {
        (void)(k_list).append((k));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:185
      }
    }
  }
  return (k_list);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:186
}

int dict_keys__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("dict_keys", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:182
    auto ret = dict_keys(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 182, in dict_keys\n", "expect 'pos_args[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:182
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = dict_keys(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 182, in dict_keys\n", "expect 'args_t[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:182
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 182, in dict_keys\n", "dict_keys() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:182
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dict_keys__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dict_keys\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dict_keys\000";

} // extern C

