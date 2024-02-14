#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool generic_isdigit(const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_isdigit__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool generic_isdigit(const RTView& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:87
  return (internal::TypeAsHelper<bool>::run((kernel_object_isdigit(s, {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 88, in generic_isdigit\n", "expect 'kernel_object_isdigit(s, {})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:88
}

int generic_isdigit__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("generic_isdigit", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:87
    auto ret = generic_isdigit((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:87
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_isdigit((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:87
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 87, in generic_isdigit\n", "generic_isdigit() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:87
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_isdigit__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_isdigit\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_isdigit\000";

} // extern C

