#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode generic_format(const RTView& s, const RTView& param, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_format__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode generic_format(const RTView& s, const RTView& param, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:702
  return (internal::TypeAsHelper<Unicode>::run((kernel_object_format(s, {(param)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 703, in generic_format\n", "expect 'kernel_object_format(s, {(param)})' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:703
}

int generic_format__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"s", "param"};
    KwargsUnpackHelper helper("generic_format", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:702
    auto ret = generic_format((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:702
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = generic_format((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:702
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 702, in generic_format\n", "generic_format() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:702
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_format__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_format\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_format\000";

} // extern C

