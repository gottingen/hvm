#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t func(const FTList<int64_t>& l1, const List& l2, void* handle_2_71828182846=((void*)(int64_t)0));
int func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t func(const FTList<int64_t>& l1, const List& l2, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:65
  int64_t ret = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:66
  {
    const FTList<int64_t>&__reserved_eval_cons_v10398_0 = l1;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
    auto __reserved_iter_v27369_0 = __reserved_eval_cons_v10398_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
    auto __reserved_iter_end_v24634_0 = __reserved_eval_cons_v10398_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
    while ((__reserved_iter_v27369_0 != __reserved_iter_end_v24634_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
      int64_t v = *__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
      ++__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:67
      {
        ret = (ret + v);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:68
      }
    }
  }
  {
    const List&__reserved_eval_cons_v10398_01 = l2;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
    auto __reserved_iter_v27369_01 = __reserved_eval_cons_v10398_01.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
    auto __reserved_iter_end_v24634_01 = __reserved_eval_cons_v10398_01.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
    while ((__reserved_iter_v27369_01 != __reserved_iter_end_v24634_01)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
      int64_t v1 = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_v27369_01), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 69, in func\n", "expect 'the element in l2' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
      ++__reserved_iter_v27369_01;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:69
      {
        ret = (ret + v1);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:70
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:71
}

int func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"l1", "l2"};
    KwargsUnpackHelper helper("func", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:65
    auto ret = func(internal::TypeAsHelper<FTList<int64_t>>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 65, in func\n", "expect 'pos_args[0]' is 'FTList<int64_t>' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 65, in func\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:65
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = func(internal::TypeAsHelper<FTList<int64_t>>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 65, in func\n", "expect 'args_t[0]' is 'FTList<int64_t>' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 65, in func\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:65
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 65, in func\n", "func() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:65
    }
  }

  return 0;
}

HERCULES_DLL int64_t wrapper(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:73
  return (func(Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}), Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4), ((int64_t)5), ((int64_t)6)}), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:74
}

int wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:73
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 73, in wrapper\n", "wrapper() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:73
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000func\000wrapper\000";

} // extern C

