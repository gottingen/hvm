#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t my_key(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int my_key__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ft_list_key_sort(const List& a, const List& e, void* handle_2_71828182846=((void*)(int64_t)0));
int ft_list_key_sort__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t my_key(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:155
  return ((x * (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:156
}

int my_key__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("my_key", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:155
    auto ret = my_key(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 155, in my_key\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:155
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_key(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 155, in my_key\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:155
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 155, in my_key\n", "my_key() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:155
    }
  }

  return 0;
}

HERCULES_DLL RTValue ft_list_key_sort(const List& a, const List& e, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:158
  FTList<int64_t> b = ([handle_2_71828182846, a]() -> FTList<int64_t> {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
    FTList<int64_t> __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
    (void)(__reserved_list_comp_result).reserve(((a).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
    {
      const List&__reserved_eval_cons_k11112_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
      auto __reserved_iter_k3285_0 = __reserved_eval_cons_k11112_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
      auto __reserved_iter_end_k48823_0 = __reserved_eval_cons_k11112_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
      while ((__reserved_iter_k3285_0 != __reserved_iter_end_k48823_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
        int64_t k = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_k3285_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 159, in ft_list_key_sort\n", "expect 'the element in a' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
        ++__reserved_iter_k3285_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
        {
          (void)(__reserved_list_comp_result).append((k));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:159
  (void)(b).sort((RTView(MakeUserFunction(string_view("my_key", 6), (HerculesBackendPackedCFunc)my_key__c_api, handle_2_71828182846))), ((bool)0));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:160
  List result = ([handle_2_71828182846, b, e]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
    (void)(__reserved_list_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
    for (int64_t k_iter_ = (int64_t)0; k_iter_ < (b).size(); k_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
      int64_t k1 = k_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
      (void)(__reserved_list_comp_result).append((RTValue(((b).get_item((k1)) == internal::TypeAsHelper<int64_t>::run(((e).get_item((k1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 161, in ft_list_key_sort\n", "expect '(e).get_item((k1))' is 'int64_t' type")))));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:161
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:162
}

int ft_list_key_sort__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "e"};
    KwargsUnpackHelper helper("ft_list_key_sort", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:158
    auto ret = ft_list_key_sort(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 158, in ft_list_key_sort\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 158, in ft_list_key_sort\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:158
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ft_list_key_sort(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 158, in ft_list_key_sort\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 158, in ft_list_key_sort\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:158
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 158, in ft_list_key_sort\n", "ft_list_key_sort() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:158
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ft_list_key_sort__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ft_list_key_sort\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000my_key\000ft_list_key_sort\000";

} // extern C

