#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List explicit_no_enough_params(const unicode_view& s, void* handle_2_71828182846=((void*)(int64_t)0));
int explicit_no_enough_params__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List explicit_no_enough_params(const unicode_view& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:58
  return (kernel_unicode_split(s, None, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:59
}

int explicit_no_enough_params__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("explicit_no_enough_params", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:58
    auto ret = explicit_no_enough_params(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 58, in explicit_no_enough_params\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:58
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = explicit_no_enough_params(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 58, in explicit_no_enough_params\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:58
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 58, in explicit_no_enough_params\n", "explicit_no_enough_params() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:58
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)explicit_no_enough_params__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000explicit_no_enough_params\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000explicit_no_enough_params\000";

} // extern C

