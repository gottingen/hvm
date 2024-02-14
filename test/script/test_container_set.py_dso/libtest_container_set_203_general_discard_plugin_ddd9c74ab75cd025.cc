#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Set general_discard(const RTView& s, const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int general_discard__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Set general_discard(const RTView& s, const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:203
  (void)kernel_object_discard(s, {(a)});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:204
  return (internal::TypeAsHelper<Set>::run((s), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 205, in general_discard\n", "expect 's' is 'Set' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:205
}

int general_discard__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"s", "a"};
    KwargsUnpackHelper helper("general_discard", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:203
    auto ret = general_discard((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:203
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = general_discard((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:203
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 203, in general_discard\n", "general_discard() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:203
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_discard__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_discard\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_discard\000";

} // extern C

