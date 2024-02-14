#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode hvm_formatted_string_with_customized_class(const RTView& a, const unicode_view& s, int64_t i, double f, void* handle_2_71828182846=((void*)(int64_t)0));
int hvm_formatted_string_with_customized_class__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode hvm_formatted_string_with_customized_class(const RTView& a, const unicode_view& s, int64_t i, double f, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:159
  return (ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(unicode_view(U"\u0049\u0020\u0067\u006F\u0074\u0020\u0073\u0074\u0072\u0069\u006E\u0067\u0020", 13), Kernel_Unicode::make((s))), unicode_view(U"\u002C\u0020\u0069\u006E\u0074\u0020", 6)), Kernel_Unicode::make((i))), unicode_view(U"\u002C\u0020\u0066\u006C\u006F\u0061\u0074\u0020", 8)), Kernel_Unicode::make((f))), unicode_view(U"\u002C\u0020\u0061\u006E\u0064\u0020\u0061\u0020\u006F\u0062\u006A\u0020", 12)), Kernel_Unicode::make((a))));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:160
}

int hvm_formatted_string_with_customized_class__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"a", "s", "i", "f"};
    KwargsUnpackHelper helper("hvm_formatted_string_with_customized_class", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:159
    auto ret = hvm_formatted_string_with_customized_class((pos_args[0]), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'pos_args[3]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:159
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = hvm_formatted_string_with_customized_class((args_t[0]), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "expect 'args_t[3]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:159
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 159, in hvm_formatted_string_with_customized_class\n", "hvm_formatted_string_with_customized_class() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:159
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

