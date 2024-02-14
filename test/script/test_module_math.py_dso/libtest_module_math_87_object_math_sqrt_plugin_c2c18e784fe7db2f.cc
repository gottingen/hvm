#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue object_math_sqrt(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int object_math_sqrt__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue object_math_sqrt(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:88
  return (RTValue(Math<double(double)>::check_call<sqrt>(internal::TypeAsHelper<double>::run((a), __FILE__, __LINE__, "", "expect 'a' is 'double' type"))));  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:89
}

int object_math_sqrt__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("object_math_sqrt", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:88
    auto ret = object_math_sqrt((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:88
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = object_math_sqrt((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:88
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_math.py\", line 88, in object_math_sqrt\n", "object_math_sqrt() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_math.py:88
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)object_math_sqrt__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000object_math_sqrt\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000object_math_sqrt\000";

} // extern C

