#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t number_comp(const RTView& x, const RTView& y, void* handle_2_71828182846=((void*)(int64_t)0));
int number_comp__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t number_comp(const RTView& x, const RTView& y, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:37
  if (Kernel_bool::make((ArithOps::gt(x, y)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:38
    return ((int64_t)-1);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:39
  }
  if (Kernel_bool::make((ArithOps::lt(x, y)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:40
    return ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:41
  }
  return ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:42
}

int number_comp__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"x", "y"};
    KwargsUnpackHelper helper("number_comp", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:37
    auto ret = number_comp((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = number_comp((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_list_sort.py\", line 37, in number_comp\n", "number_comp() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_list_sort.py:37
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)number_comp__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000number_comp\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000number_comp\000";

} // extern C

