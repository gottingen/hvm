#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool generic_startswith(const RTView& s, const RTView& prefix_or_prefixes, const RTView& start, const RTView& end, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_startswith__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool generic_startswith(const RTView& s, const RTView& prefix_or_prefixes, const RTView& start, const RTView& end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:396
  if ((Kernel_bool::make((ArithOps::eq(start, (int64_t)-100))) && Kernel_bool::make((ArithOps::eq(end, (int64_t)-100))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:401
    return (internal::TypeAsHelper<bool>::run((kernel_object_startswith(s, {(prefix_or_prefixes)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 402, in generic_startswith\n", "expect 'kernel_object_startswith(s, {(prefix_or_prefixes)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:402
  } else {
    if (Kernel_bool::make((ArithOps::eq(end, (int64_t)-100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:403
      return (internal::TypeAsHelper<bool>::run((kernel_object_startswith(s, {(prefix_or_prefixes), (start)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 404, in generic_startswith\n", "expect 'kernel_object_startswith(s, {(prefix_or_prefixes), (start)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:404
    } else {
      return (internal::TypeAsHelper<bool>::run((kernel_object_startswith(s, {(prefix_or_prefixes), (start), (end)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 406, in generic_startswith\n", "expect 'kernel_object_startswith(s, {(prefix_or_prefixes), (start), (end)})' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:406
    }
  }
  return (internal::TypeAsHelper<bool>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'bool' type"));
}

int generic_startswith__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "prefix_or_prefixes", "start", "end"};
    KwargsUnpackHelper helper("generic_startswith", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:396
    auto ret = generic_startswith((pos_args[0]), (pos_args[1]), (pos_args[2]), (pos_args[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:396
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = generic_startswith((args_t[0]), (args_t[1]), (args_t[2]), (args_t[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:396
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 396, in generic_startswith\n", "generic_startswith() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:396
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_startswith__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_startswith\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_startswith\000";

} // extern C

