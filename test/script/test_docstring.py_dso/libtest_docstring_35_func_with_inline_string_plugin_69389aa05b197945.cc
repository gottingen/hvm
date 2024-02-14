#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode func_with_inline_string(void* handle_2_71828182846=((void*)(int64_t)0));
int func_with_inline_string__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode func_with_inline_string(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:36
  int64_t a = ((int64_t)123);  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:37
  Unicode b = (unicode_view(U"\u0031\u0032\u0033", 3));  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:38
  (void)unicode_view(U"\u000A\u0020\u0020\u0020\u0020\u0054\u0068\u0069\u0073\u0020\u0069\u0073\u0020\u006E\u006F\u0074\u0020\u0061\u0020\u0064\u006F\u0063\u0073\u0074\u0072\u0069\u006E\u0067\u0020\u0061\u0063\u0063\u006F\u0072\u0064\u0069\u006E\u0067\u0020\u0074\u006F\u0020\u0050\u0045\u0050\u0020\u0032\u0035\u0037\u002C\u000A\u0020\u0020\u0020\u0020\u0062\u0075\u0074\u0020\u0069\u0074\u0027\u0073\u0020\u0063\u006F\u006D\u006D\u006F\u006E\u0020\u0069\u006E\u0020\u0050\u0079\u0074\u0068\u006F\u006E\u0020\u0073\u006F\u0020\u0077\u0065\u0020\u0064\u0065\u0063\u0069\u0064\u0065\u0020\u0074\u006F\u0020\u0073\u0075\u0070\u0070\u006F\u0072\u0074\u0020\u0069\u0074\u002E\u000A\u0020\u0020\u0020\u0020", 113);  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:39
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0031\u0032\u0033", 3)));  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:43
}

int func_with_inline_string__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = func_with_inline_string(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:36
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_docstring.py\", line 36, in func_with_inline_string\n", "func_with_inline_string() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:36
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)func_with_inline_string__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000func_with_inline_string\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000func_with_inline_string\000";

} // extern C

