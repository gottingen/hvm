#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t list_index_with_start(const List& l, int64_t target, int64_t start, void* handle_2_71828182846=((void*)(int64_t)0));
int list_index_with_start__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t list_index_with_start(const List& l, int64_t target, int64_t start, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:178
  FTList<int64_t> ft = ([handle_2_71828182846, l]() -> FTList<int64_t> {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
    FTList<int64_t> __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
    (void)(__reserved_list_comp_result).reserve(((l).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
    {
      const List&__reserved_eval_cons_k11112_0 = l;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
      auto __reserved_iter_k3285_0 = __reserved_eval_cons_k11112_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
      auto __reserved_iter_end_k48823_0 = __reserved_eval_cons_k11112_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
      while ((__reserved_iter_k3285_0 != __reserved_iter_end_k48823_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
        int64_t k = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_k3285_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 179, in list_index_with_start\n", "expect 'the element in l' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
        ++__reserved_iter_k3285_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
        {
          (void)(__reserved_list_comp_result).append((k));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:179
  return ((ft).index((target), (start)));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:180
}

int list_index_with_start__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"l", "target", "start"};
    KwargsUnpackHelper helper("list_index_with_start", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:178
    auto ret = list_index_with_start(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:178
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = list_index_with_start(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:178
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 178, in list_index_with_start\n", "list_index_with_start() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:178
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_index_with_start__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_index_with_start\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_index_with_start\000";

} // extern C

