#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool bytes_startswith_tup_except(const string_view& s, void* handle_2_71828182846=((void*)(int64_t)0));
int bytes_startswith_tup_except__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool bytes_startswith_tup_except(const string_view& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:391
  Tuple prefixes = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u0068\u0068", 2)), (unicode_view(U"\u0075\u0075", 2))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:392
  return (kernel_str_startswith(s, prefixes));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:393
}

int bytes_startswith_tup_except__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("bytes_startswith_tup_except", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:391
    auto ret = bytes_startswith_tup_except(internal::TypeAsHelper<string_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 391, in bytes_startswith_tup_except\n", "expect 'pos_args[0]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:391
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = bytes_startswith_tup_except(internal::TypeAsHelper<string_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 391, in bytes_startswith_tup_except\n", "expect 'args_t[0]' is 'py::bytes' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:391
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 391, in bytes_startswith_tup_except\n", "bytes_startswith_tup_except() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:391
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bytes_startswith_tup_except__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bytes_startswith_tup_except\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bytes_startswith_tup_except\000";

} // extern C

