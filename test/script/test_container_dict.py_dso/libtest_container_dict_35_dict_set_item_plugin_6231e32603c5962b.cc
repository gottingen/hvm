#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Dict dict_set_item(const Dict& container, const RTView& key, const RTView& val, void* handle_2_71828182846=((void*)(int64_t)0));
int dict_set_item__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Dict dict_set_item(const Dict& container, const RTView& key, const RTView& val, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:36
  (void)(container).set_item((key), (val));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:37
  return (container);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:38
}

int dict_set_item__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"container", "key", "val"};
    KwargsUnpackHelper helper("dict_set_item", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:36
    auto ret = dict_set_item(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 36, in dict_set_item\n", "expect 'pos_args[0]' is 'Dict' type"), (pos_args[1]), (pos_args[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = dict_set_item(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 36, in dict_set_item\n", "expect 'args_t[0]' is 'Dict' type"), (args_t[1]), (args_t[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 36, in dict_set_item\n", "dict_set_item() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:36
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dict_set_item__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dict_set_item\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dict_set_item\000";

} // extern C

