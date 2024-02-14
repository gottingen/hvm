#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_replace(const RTView& s, const RTView& o, const RTView& n, int64_t c, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_replace__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_replace(const RTView& s, const RTView& o, const RTView& n, int64_t c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:340
  if (Kernel_bool::make(((c == (int64_t)-1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:341
    return (kernel_object_replace(s, {(o), (n)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:342
  } else {
    return (kernel_object_replace(s, {(o), (n), (c)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:344
  }
  return (None);
}

int generic_replace__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"s", "o", "n", "c"};
    KwargsUnpackHelper helper("generic_replace", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:340
    auto ret = generic_replace((pos_args[0]), (pos_args[1]), (pos_args[2]), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 340, in generic_replace\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:340
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = generic_replace((args_t[0]), (args_t[1]), (args_t[2]), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 340, in generic_replace\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:340
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 340, in generic_replace\n", "generic_replace() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:340
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_replace__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_replace\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_replace\000";

} // extern C

