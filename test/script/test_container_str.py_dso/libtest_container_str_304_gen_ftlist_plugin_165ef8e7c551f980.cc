#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL FTList<Unicode> gen_ftlist(void* handle_2_71828182846=((void*)(int64_t)0));
int gen_ftlist__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL FTList<Unicode> gen_ftlist(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:305
  return (Kernel_FTList::make<Unicode>(std::initializer_list<FTList<Unicode>::value_type>{(unicode_view(U"\u0031", 1)), (unicode_view(U"\u0032\u0033", 2)), (unicode_view(U"\u0034", 1))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:306
}

int gen_ftlist__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = gen_ftlist(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:305
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 305, in gen_ftlist\n", "gen_ftlist() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:305
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)gen_ftlist__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000gen_ftlist\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000gen_ftlist\000";

} // extern C

