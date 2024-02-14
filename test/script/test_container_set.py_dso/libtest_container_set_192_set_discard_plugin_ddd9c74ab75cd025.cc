#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Set set_discard(const Set& s, const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int set_discard__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Set set_discard(const Set& s, const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:192
  (void)(s).discard((a));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:193
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:194
}

int set_discard__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"s", "a"};
    KwargsUnpackHelper helper("set_discard", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:192
    auto ret = set_discard(internal::TypeAsHelper<Set>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 192, in set_discard\n", "expect 'pos_args[0]' is 'Set' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:192
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = set_discard(internal::TypeAsHelper<Set>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 192, in set_discard\n", "expect 'args_t[0]' is 'Set' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:192
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 192, in set_discard\n", "set_discard() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:192
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_discard__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_discard\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_discard\000";

} // extern C

