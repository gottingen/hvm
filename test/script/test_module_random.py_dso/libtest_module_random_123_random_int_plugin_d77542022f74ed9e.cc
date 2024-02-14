#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List random_int(void* handle_2_71828182846=((void*)(int64_t)0));
int random_int__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List random_int(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:123
  (void)kernel_random_seed({((int64_t)10)});  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:124
  return ([handle_2_71828182846]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
    (void)(__reserved_list_comp_result).reserve(((int64_t)10));  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
    for (int64_t __iter_ = (int64_t)0; __iter_ < (int64_t)10; __iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
      int64_t _1 = __iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
      (void)(__reserved_list_comp_result).append((RTValue(kernel_random_random())));  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:125
}

int random_int__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = random_int(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:123
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 123, in random_int\n", "random_int() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:123
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)random_int__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000random_int\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000random_int\000";

} // extern C

