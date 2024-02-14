#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t bytes_contain_specific(const string_view& q, const string_view& c, void* handle_2_71828182846=((void*)(int64_t)0));
int bytes_contain_specific__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t bytes_contain_specific(const string_view& q, const string_view& c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:748
  if (Kernel_bool::make((kernel_str___contains__(q, c)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:749
    return ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:750
  }
  return ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:751
}

int bytes_contain_specific__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"q", "c"};
    KwargsUnpackHelper helper("bytes_contain_specific", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:748
    auto ret = bytes_contain_specific(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 748, in bytes_contain_specific\n", "expect 'pos_args[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 748, in bytes_contain_specific\n", "expect 'pos_args[1]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:748
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = bytes_contain_specific(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 748, in bytes_contain_specific\n", "expect 'args_t[0]' is 'py::bytes' type"), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 748, in bytes_contain_specific\n", "expect 'args_t[1]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:748
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 748, in bytes_contain_specific\n", "bytes_contain_specific() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:748
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bytes_contain_specific__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bytes_contain_specific\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bytes_contain_specific\000";

} // extern C

