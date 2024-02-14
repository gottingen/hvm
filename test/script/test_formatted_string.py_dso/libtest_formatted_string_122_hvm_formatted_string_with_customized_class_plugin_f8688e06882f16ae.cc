#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode hvm_formatted_string_with_customized_class(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int hvm_formatted_string_with_customized_class__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode hvm_formatted_string_with_customized_class(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:122
  return (ArithOps::add(ArithOps::add(unicode_view(U"\u0074\u0068\u0069\u0073\u0020\u006F\u0062\u006A\u0020\u0068\u0061\u0073\u0020", 13), Kernel_Unicode::make((a))), unicode_view(U"\u0020\u0021", 2)));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:123
}

int hvm_formatted_string_with_customized_class__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("hvm_formatted_string_with_customized_class", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:122
    auto ret = hvm_formatted_string_with_customized_class((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:122
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = hvm_formatted_string_with_customized_class((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:122
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 122, in hvm_formatted_string_with_customized_class\n", "hvm_formatted_string_with_customized_class() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:122
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)hvm_formatted_string_with_customized_class__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000hvm_formatted_string_with_customized_class\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000hvm_formatted_string_with_customized_class\000";

} // extern C

