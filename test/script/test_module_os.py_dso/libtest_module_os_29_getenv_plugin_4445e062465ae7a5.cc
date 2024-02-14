#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue getenv(const unicode_view& k, const RTView& d=None, void* handle_2_71828182846=((void*)(int64_t)0));
int getenv__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue getenv(const unicode_view& k, const RTView& d, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
  if (Kernel_bool::make((ArithOps::eq(d, None)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:30
    return (kernel_os_getenv({(RTView(k)), (None)}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:31
  }
  return (kernel_os_getenv({(RTView(k)), (d)}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:32
}

int getenv__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"k", "d"};
    static RTValue default_args[1]{RTValue(None)};
    KwargsUnpackHelper helper("getenv", arg_names, 2, default_args, 1);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
    auto ret = getenv(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_os.py\", line 29, in getenv\n", "expect 'pos_args[0]' is 'py::str' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = getenv(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_os.py\", line 29, in getenv\n", "expect 'args_t[0]' is 'py::str' type"), None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = getenv(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_os.py\", line 29, in getenv\n", "expect 'args_t[0]' is 'py::str' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_os.py\", line 29, in getenv\n", "getenv() takes from 1 to 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_os.py:29
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)getenv__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000getenv\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000getenv\000";

} // extern C

