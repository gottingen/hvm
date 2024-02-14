#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue ft_list_basic_sort(const List& a, const List& e, void* handle_2_71828182846=((void*)(int64_t)0));
int ft_list_basic_sort__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ft_list_basic_sort(const List& a, const List& e, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:127
  FTList<int64_t> b = ([handle_2_71828182846, a]() -> FTList<int64_t> {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
    FTList<int64_t> __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
    (void)(__reserved_list_comp_result).reserve(((a).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
    {
      const List&__reserved_eval_cons_k11112_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
      auto __reserved_iter_k3285_0 = __reserved_eval_cons_k11112_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
      auto __reserved_iter_end_k48823_0 = __reserved_eval_cons_k11112_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
      while ((__reserved_iter_k3285_0 != __reserved_iter_end_k48823_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
        int64_t k = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_k3285_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 128, in ft_list_basic_sort\n", "expect 'the element in a' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
        ++__reserved_iter_k3285_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
        {
          (void)(__reserved_list_comp_result).append((k));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:128
  (void)(b).sort(((bool)0));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:129
  List result = ([handle_2_71828182846, b, e]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
    (void)(__reserved_list_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
    for (int64_t k_iter_ = (int64_t)0; k_iter_ < (b).size(); k_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
      int64_t k1 = k_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
      (void)(__reserved_list_comp_result).append((RTValue(((b).get_item((k1)) == internal::TypeAsHelper<int64_t>::run(((e).get_item((k1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 130, in ft_list_basic_sort\n", "expect '(e).get_item((k1))' is 'int64_t' type")))));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:130
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:131
}

int ft_list_basic_sort__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "e"};
    KwargsUnpackHelper helper("ft_list_basic_sort", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:127
    auto ret = ft_list_basic_sort(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 127, in ft_list_basic_sort\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 127, in ft_list_basic_sort\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:127
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ft_list_basic_sort(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 127, in ft_list_basic_sort\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 127, in ft_list_basic_sort\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:127
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 127, in ft_list_basic_sort\n", "ft_list_basic_sort() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:127
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ft_list_basic_sort__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ft_list_basic_sort\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000ft_list_basic_sort\000";

} // extern C

