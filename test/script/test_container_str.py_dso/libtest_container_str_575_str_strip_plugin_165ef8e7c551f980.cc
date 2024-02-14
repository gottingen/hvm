#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode str_strip(const unicode_view& s, const unicode_view& __chars, void* handle_2_71828182846=((void*)(int64_t)0));
int str_strip__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode str_strip(const unicode_view& s, const unicode_view& __chars, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:576
  if (Kernel_bool::make(((kernel_unicode___len__(__chars) == (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:577
    return (GenericValueConverter<Unicode>{}(kernel_unicode_strip(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:578
  } else {
    return (GenericValueConverter<Unicode>{}(kernel_unicode_strip(s, __chars)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:580
  }
  return (internal::TypeAsHelper<Unicode>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'py::str' type"));
}

int str_strip__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"s", "__chars"};
    KwargsUnpackHelper helper("str_strip", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:576
    auto ret = str_strip(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 576, in str_strip\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 576, in str_strip\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:576
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = str_strip(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 576, in str_strip\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 576, in str_strip\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:576
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 576, in str_strip\n", "str_strip() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:576
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_strip__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_strip\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_strip\000";

} // extern C

