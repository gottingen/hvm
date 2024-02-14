#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool str_startswith(const unicode_view& s, const unicode_view& prefix, int64_t start, int64_t end, void* handle_2_71828182846=((void*)(int64_t)0));
int str_startswith__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool str_startswith(const unicode_view& s, const unicode_view& prefix, int64_t start, int64_t end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:360
  if ((Kernel_bool::make(((start == (int64_t)-100))) && Kernel_bool::make(((end == (int64_t)-100))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:361
    return (kernel_unicode_startswith(s, prefix));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:362
  } else {
    if (Kernel_bool::make(((end == (int64_t)-100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:363
      return (kernel_unicode_startswith(s, prefix, start));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:364
    } else {
      return (kernel_unicode_startswith(s, prefix, start, end));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:366
    }
  }
  return (internal::TypeAsHelper<bool>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'bool' type"));
}

int str_startswith__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "prefix", "start", "end"};
    KwargsUnpackHelper helper("str_startswith", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:360
    auto ret = str_startswith(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:360
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = str_startswith(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:360
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 360, in str_startswith\n", "str_startswith() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:360
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_startswith__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_startswith\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_startswith\000";

} // extern C

