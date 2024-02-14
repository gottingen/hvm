#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t generic_extend(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_extend__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t generic_extend(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:144
  List b = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)5), ((int64_t)6)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:145
  (void)kernel_object_extend(a, {(b)});  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:146
  return (internal::TypeAsHelper<int64_t>::run((kernel_object___fused_getitem__(a, {(RTView((int64_t)4))})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 147, in generic_extend\n", "expect 'kernel_object___fused_getitem__(a, {(RTView((int64_t)4))})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:147
}

int generic_extend__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("generic_extend", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:144
    auto ret = generic_extend((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:144
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_extend((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:144
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 144, in generic_extend\n", "generic_extend() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:144
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_extend__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_extend\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_extend\000";

} // extern C

