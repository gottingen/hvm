#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t cpp_kw_as_param(int64_t CPP_KW_int, void* handle_2_71828182846=((void*)(int64_t)0));
int cpp_kw_as_param__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t cpp_kw_as_param(int64_t CPP_KW_int, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:39
  return ((CPP_KW_int + (int64_t)3));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:40
}

int cpp_kw_as_param__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"CPP_KW_int"};
    KwargsUnpackHelper helper("cpp_kw_as_param", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:39
    auto ret = cpp_kw_as_param(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 39, in cpp_kw_as_param\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = cpp_kw_as_param(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 39, in cpp_kw_as_param\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 39, in cpp_kw_as_param\n", "cpp_kw_as_param() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:39
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)cpp_kw_as_param__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000cpp_kw_as_param\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000cpp_kw_as_param\000";

} // extern C

