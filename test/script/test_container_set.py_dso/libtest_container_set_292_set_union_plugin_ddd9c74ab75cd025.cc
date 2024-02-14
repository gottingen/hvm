#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple set_union(void* handle_2_71828182846=((void*)(int64_t)0));
int set_union__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple set_union(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:292
  Set a = (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:293
  Set b = ((a).set_union({(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)4)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)5)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)3)}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:294
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a), (b)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:295
}

int set_union__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = set_union(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:292
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 292, in set_union\n", "set_union() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:292
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_union__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_union\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_union\000";

} // extern C

