#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func1(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int func1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List my_func(void* handle_2_71828182846=((void*)(int64_t)0));
int my_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func1(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
  return ((i + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:76
}

int func1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("func1", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    auto ret = func1(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func1(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "func1() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    }
  }

  return 0;
}

HERCULES_DLL List my_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:78
  return ([handle_2_71828182846]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
    (void)(__reserved_list_comp_result).reserve(((int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
    for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)1; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
      int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
      (void)(__reserved_list_comp_result).append((RTValue(func1(i, handle_2_71828182846))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:79
}

int my_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:78
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 78, in my_func\n", "my_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:78
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000func1\000my_func\000";

} // extern C

