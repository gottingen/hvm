#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List general_subscript(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int general_subscript__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List general_subscript(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:216
  return (internal::TypeAsHelper<List>::run((kernel_object___getslice__(a, RTView((int64_t)1), RTView((int64_t)3), RTView((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 217, in general_subscript\n", "expect 'kernel_object___getslice__(a, RTView((int64_t)1), RTView((int64_t)3), RTView((int64_t)1))' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:217
}

int general_subscript__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("general_subscript", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:216
    auto ret = general_subscript((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:216
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_subscript((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:216
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 216, in general_subscript\n", "general_subscript() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:216
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_subscript__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_subscript\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_subscript\000";

} // extern C
