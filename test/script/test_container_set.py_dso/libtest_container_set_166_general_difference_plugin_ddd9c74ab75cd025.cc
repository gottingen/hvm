#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List general_difference(const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
int general_difference__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List general_difference(const RTView& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:166
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:167
  (void)(ret).append((kernel_object_difference(s, {(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2)}))})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:168
  (void)(ret).append((kernel_object_difference(s, {(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2)}))})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:169
  (void)(ret).append((kernel_object_difference(s, {(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)4)}))})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:170
  (void)(ret).append((kernel_object_difference(s, {(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4)}))})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:171
  (void)(ret).append((kernel_object_difference(s, {})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:172
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:173
}

int general_difference__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("general_difference", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:166
    auto ret = general_difference((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:166
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_difference((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:166
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 166, in general_difference\n", "general_difference() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:166
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_difference__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_difference\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_difference\000";

} // extern C

