#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t generic_count(const RTView& s, const RTView& x, const RTView& __start, const RTView& __end, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_count__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t generic_count(const RTView& s, const RTView& x, const RTView& __start, const RTView& __end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:626
  if ((Kernel_bool::make((ArithOps::eq(__start, (int64_t)-100))) && Kernel_bool::make((ArithOps::eq(__end, (int64_t)-100))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:627
    return (internal::TypeAsHelper<int64_t>::run((kernel_object_count(s, {(x)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 628, in generic_count\n", "expect 'kernel_object_count(s, {(x)})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:628
  } else {
    if (Kernel_bool::make((ArithOps::eq(__end, (int64_t)-100)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:629
      return (internal::TypeAsHelper<int64_t>::run((kernel_object_count(s, {(x), (__start)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 630, in generic_count\n", "expect 'kernel_object_count(s, {(x), (__start)})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:630
    }
  }
  return (internal::TypeAsHelper<int64_t>::run((kernel_object_count(s, {(x), (__start), (__end)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 631, in generic_count\n", "expect 'kernel_object_count(s, {(x), (__start), (__end)})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:631
}

int generic_count__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "x", "__start", "__end"};
    KwargsUnpackHelper helper("generic_count", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:626
    auto ret = generic_count((pos_args[0]), (pos_args[1]), (pos_args[2]), (pos_args[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:626
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = generic_count((args_t[0]), (args_t[1]), (args_t[2]), (args_t[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:626
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 626, in generic_count\n", "generic_count() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:626
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_count__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_count\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_count\000";

} // extern C

