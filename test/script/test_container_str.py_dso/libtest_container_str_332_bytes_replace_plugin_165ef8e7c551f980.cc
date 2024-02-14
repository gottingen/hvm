#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL String bytes_replace(const string_view& s, const string_view& o, const string_view& n, int64_t c, void* handle_2_71828182846=((void*)(int64_t)0));
int bytes_replace__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL String bytes_replace(const string_view& s, const string_view& o, const string_view& n, int64_t c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:333
  if (Kernel_bool::make(((c == (int64_t)-1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:334
    return (kernel_str_replace(s, o, n, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:335
  } else {
    return (kernel_str_replace(s, o, n, c));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:337
  }
  return (internal::TypeAsHelper<String>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'py::bytes' type"));
}

int bytes_replace__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "o", "n", "c"};
    KwargsUnpackHelper helper("bytes_replace", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:333
    auto ret = bytes_replace(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'pos_args[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'pos_args[1]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'pos_args[2]' is 'py::bytes' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:333
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = bytes_replace(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'args_t[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'args_t[1]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'args_t[2]' is 'py::bytes' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:333
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 333, in bytes_replace\n", "bytes_replace() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:333
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bytes_replace__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bytes_replace\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bytes_replace\000";

} // extern C

