#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL String bytes_rstrip(const string_view& s, const string_view& __chars, void* handle_2_71828182846=((void*)(int64_t)0));
int bytes_rstrip__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL String bytes_rstrip(const string_view& s, const string_view& __chars, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:513
  if (Kernel_bool::make(((kernel_str___len__(__chars) == (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:514
    return (GenericValueConverter<String>{}(kernel_str_rstrip(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:515
  } else {
    return (GenericValueConverter<String>{}(kernel_str_rstrip(s, __chars)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:517
  }
  return (internal::TypeAsHelper<String>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'py::bytes' type"));
}

int bytes_rstrip__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"s", "__chars"};
    KwargsUnpackHelper helper("bytes_rstrip", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:513
    auto ret = bytes_rstrip(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 513, in bytes_rstrip\n", "expect 'pos_args[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 513, in bytes_rstrip\n", "expect 'pos_args[1]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:513
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = bytes_rstrip(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 513, in bytes_rstrip\n", "expect 'args_t[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 513, in bytes_rstrip\n", "expect 'args_t[1]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:513
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 513, in bytes_rstrip\n", "bytes_rstrip() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:513
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bytes_rstrip__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bytes_rstrip\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bytes_rstrip\000";

} // extern C

