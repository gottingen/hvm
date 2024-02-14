#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode func_with_docstring(void* handle_2_71828182846=((void*)(int64_t)0));
int func_with_docstring__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode func_with_docstring(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:26
  (void)unicode_view(U"\u000A\u0020\u0020\u0020\u0020\u0054\u0068\u0069\u0073\u0020\u0069\u0073\u0020\u0061\u0020\u0066\u0075\u006E\u0063\u0074\u0069\u006F\u006E\u000A\u0020\u0020\u0020\u0020", 28);  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:27
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0031\u0032\u0033", 3)));  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:30
}

int func_with_docstring__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = func_with_docstring(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:26
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_docstring.py\", line 26, in func_with_docstring\n", "func_with_docstring() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_docstring.py:26
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)func_with_docstring__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000func_with_docstring\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000func_with_docstring\000";

} // extern C

