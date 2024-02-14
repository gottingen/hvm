#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool generic_endswith(const RTView& s, const RTView& suffix_or_suffixes, const RTView& start, const RTView& end, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_endswith__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool generic_endswith(const RTView& s, const RTView& suffix_or_suffixes, const RTView& start, const RTView& end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:467
  if ((Kernel_bool::make((ArithOps::eq(start, (int64_t)-100))) && Kernel_bool::make((ArithOps::eq(end, (int64_t)-100))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:472
    return (internal::TypeAsHelper<bool>::run((kernel_object_endswith(s, {(suffix_or_suffixes)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 473, in generic_endswith\n", "expect 'kernel_object_endswith(s, {(suffix_or_suffixes)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:473
  } else {
    if (Kernel_bool::make((ArithOps::eq(end, (int64_t)-100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:474
      return (internal::TypeAsHelper<bool>::run((kernel_object_endswith(s, {(suffix_or_suffixes), (start)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 475, in generic_endswith\n", "expect 'kernel_object_endswith(s, {(suffix_or_suffixes), (start)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:475
    } else {
      return (internal::TypeAsHelper<bool>::run((kernel_object_endswith(s, {(suffix_or_suffixes), (start), (end)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 477, in generic_endswith\n", "expect 'kernel_object_endswith(s, {(suffix_or_suffixes), (start), (end)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:477
    }
  }
  return (internal::TypeAsHelper<bool>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'bool' type"));
}

int generic_endswith__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "suffix_or_suffixes", "start", "end"};
    KwargsUnpackHelper helper("generic_endswith", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:467
    auto ret = generic_endswith((pos_args[0]), (pos_args[1]), (pos_args[2]), (pos_args[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:467
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = generic_endswith((args_t[0]), (args_t[1]), (args_t[2]), (args_t[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:467
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 467, in generic_endswith\n", "generic_endswith() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:467
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_endswith__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_endswith\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_endswith\000";

} // extern C

