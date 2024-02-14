#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool short_circuit(void* handle_2_71828182846=((void*)(int64_t)0));
int short_circuit__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool short_circuit(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:53
  List a = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:54
  return ((((a).size() == (int64_t)0) || (((a).size() == (int64_t)1) && (kernel_object___len__(((a).get_item(((int64_t)0)))) == (int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:55
}

int short_circuit__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = short_circuit(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:53
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 53, in short_circuit\n", "short_circuit() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:53
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)short_circuit__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000short_circuit\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000short_circuit\000";

} // extern C

