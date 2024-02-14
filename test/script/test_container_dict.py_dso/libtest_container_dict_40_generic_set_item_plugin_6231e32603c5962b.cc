#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_set_item(const RTView& container, const RTView& key, const RTView& val, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_set_item__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_set_item(const RTView& container, const RTView& key, const RTView& val, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:41
  (void)kernel_object___fused_setitem__(container, {(key)}, val);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:42
  return (container);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:43
}

int generic_set_item__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"container", "key", "val"};
    KwargsUnpackHelper helper("generic_set_item", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:41
    auto ret = generic_set_item((pos_args[0]), (pos_args[1]), (pos_args[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:41
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = generic_set_item((args_t[0]), (args_t[1]), (args_t[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:41
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 41, in generic_set_item\n", "generic_set_item() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:41
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_set_item__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_set_item\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_set_item\000";

} // extern C

