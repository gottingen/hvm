#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue my_hash64(void* handle_2_71828182846=((void*)(int64_t)0));
int my_hash64__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_hash64(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:38
  Unicode s = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:39
  int64_t k = (kernel_farmhash_hash64_mod(GenericValueConverter<unicode_view>{}(s), (int64_t)1024576));  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:40
  return (RTValue(k));  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:41
}

int my_hash64__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_hash64(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:38
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py\", line 38, in my_hash64\n", "my_hash64() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_pypi_farmhash.py:38
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_hash64__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_hash64\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000my_hash64\000";

} // extern C

