#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue return_if_expr(const RTView& x, void* handle_2_71828182846=((void*)(int64_t)0));
int return_if_expr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue return_if_expr(const RTView& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:43
  return ((ArithOps::gt(x, (int64_t)3) ? unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5) : ArithOps::sub(x, (int64_t)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:44
}

int return_if_expr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("return_if_expr", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:43
    auto ret = return_if_expr((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = return_if_expr((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py\", line 43, in return_if_expr\n", "return_if_expr() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_if_then_else.py:43
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)return_if_expr__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000return_if_expr\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000return_if_expr\000";

} // extern C

