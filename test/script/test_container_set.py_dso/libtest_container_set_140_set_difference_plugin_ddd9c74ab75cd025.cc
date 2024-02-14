#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List set_difference(const Set& s, void* handle_2_71828182846=((void*)(int64_t)0));
int set_difference__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List set_difference(const Set& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:140
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:141
  (void)(ret).append((RTValue((s).difference({(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2)}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:142
  (void)(ret).append((RTValue((s).difference({(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2)}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:143
  (void)(ret).append((RTValue((s).difference({(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)4)}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:144
  (void)(ret).append((RTValue((s).difference({(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4)}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:145
  (void)(ret).append((RTValue((s).difference({}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:146
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:147
}

int set_difference__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("set_difference", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:140
    auto ret = set_difference(internal::TypeAsHelper<Set>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 140, in set_difference\n", "expect 'pos_args[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:140
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = set_difference(internal::TypeAsHelper<Set>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 140, in set_difference\n", "expect 'args_t[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:140
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 140, in set_difference\n", "set_difference() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:140
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_difference__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_difference\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_difference\000";

} // extern C

