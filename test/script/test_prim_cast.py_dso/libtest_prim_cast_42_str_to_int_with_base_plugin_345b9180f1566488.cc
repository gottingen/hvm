#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t str_to_int_with_base(const unicode_view& a, int64_t base, void* handle_2_71828182846=((void*)(int64_t)0));
int str_to_int_with_base__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t str_to_int_with_base(const unicode_view& a, int64_t base, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:43
  return (Kernel_int64_t::make((a), (base)));  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:44
}

int str_to_int_with_base__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "base"};
    KwargsUnpackHelper helper("str_to_int_with_base", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:43
    auto ret = str_to_int_with_base(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py\", line 43, in str_to_int_with_base\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py\", line 43, in str_to_int_with_base\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = str_to_int_with_base(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py\", line 43, in str_to_int_with_base\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py\", line 43, in str_to_int_with_base\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py\", line 43, in str_to_int_with_base\n", "str_to_int_with_base() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_prim_cast.py:43
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_to_int_with_base__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_to_int_with_base\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_to_int_with_base\000";

} // extern C

