#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t bytes_count(const string_view& s, const string_view& x, int64_t __start, int64_t __end, void* handle_2_71828182846=((void*)(int64_t)0));
int bytes_count__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t bytes_count(const string_view& s, const string_view& x, int64_t __start, int64_t __end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:618
  if ((Kernel_bool::make(((__start == (int64_t)-100))) && Kernel_bool::make(((__end == (int64_t)-100))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:619
    return (kernel_str_count(s, x));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:620
  } else {
    if (Kernel_bool::make(((__end == (int64_t)-100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:621
      return (kernel_str_count(s, x, __start));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:622
    }
  }
  return (kernel_str_count(s, x, __start, __end));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:623
}

int bytes_count__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "x", "__start", "__end"};
    KwargsUnpackHelper helper("bytes_count", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:618
    auto ret = bytes_count(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'pos_args[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'pos_args[1]' is 'py::bytes' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:618
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = bytes_count(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'args_t[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'args_t[1]' is 'py::bytes' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:618
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 618, in bytes_count\n", "bytes_count() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:618
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bytes_count__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bytes_count\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bytes_count\000";

} // extern C
