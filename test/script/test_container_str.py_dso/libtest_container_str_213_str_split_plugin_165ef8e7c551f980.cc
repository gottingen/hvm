#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List str_split(const unicode_view& s, const RTView& sep, int64_t maxsplit, void* handle_2_71828182846=((void*)(int64_t)0));
int str_split__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List str_split(const unicode_view& s, const RTView& sep, int64_t maxsplit, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:214
  if ((Kernel_bool::make((ArithOps::eq(sep, None))) && Kernel_bool::make(((maxsplit == (int64_t)-1))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:215
    return (kernel_unicode_split(s, None, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:216
  } else {
    if (Kernel_bool::make(((maxsplit == (int64_t)-1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:217
      return (kernel_unicode_split(s, sep, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:218
    } else {
      return (kernel_unicode_split(s, sep, maxsplit));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:220
    }
  }
  return (internal::TypeAsHelper<List>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'List' type"));
}

int str_split__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"s", "sep", "maxsplit"};
    KwargsUnpackHelper helper("str_split", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:214
    auto ret = str_split(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 214, in str_split\n", "expect 'pos_args[0]' is 'py::str' type"), (pos_args[1]), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 214, in str_split\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:214
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = str_split(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 214, in str_split\n", "expect 'args_t[0]' is 'py::str' type"), (args_t[1]), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 214, in str_split\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:214
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 214, in str_split\n", "str_split() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:214
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_split__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_split\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_split\000";

} // extern C

