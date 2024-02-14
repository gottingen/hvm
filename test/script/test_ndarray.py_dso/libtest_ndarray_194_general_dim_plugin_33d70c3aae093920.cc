#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t general_dim(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int general_dim__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t general_dim(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:194
  return (internal::TypeAsHelper<int64_t>::run((kernel_object_dim(a, {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 195, in general_dim\n", "expect 'kernel_object_dim(a, {})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:195
}

int general_dim__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("general_dim", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:194
    auto ret = general_dim((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:194
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_dim((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:194
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 194, in general_dim\n", "general_dim() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:194
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_dim__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_dim\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_dim\000";

} // extern C

