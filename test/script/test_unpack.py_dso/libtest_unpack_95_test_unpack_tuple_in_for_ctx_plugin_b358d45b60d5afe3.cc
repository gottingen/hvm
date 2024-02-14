#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List test_unpack_tuple_in_for_ctx(const List& int_list, void* handle_2_71828182846=((void*)(int64_t)0));
int test_unpack_tuple_in_for_ctx__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_unpack_tuple_in_for_ctx(const List& int_list, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:95
  List ret_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:96
  {
    const List&__reserved_eval_cons_a_b8398_0 = int_list;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
    auto __reserved_iter_a_b39646_0 = __reserved_eval_cons_a_b8398_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
    auto __reserved_iter_end_a_b2876_0 = __reserved_eval_cons_a_b8398_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
    while ((__reserved_iter_a_b39646_0 != __reserved_iter_end_a_b2876_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      const auto& __reserved_value_tup_a_b37689_0 = internal::TypeAsHelper<Tuple>::run((*__reserved_iter_a_b39646_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 97, in test_unpack_tuple_in_for_ctx\n", "expect 'the element in int_list' is 'Tuple' type");  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      ++__reserved_iter_a_b39646_0;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      if (kernel_builtins_len(__reserved_value_tup_a_b37689_0) != 2) { THROW_PY_ValueError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 97, in test_unpack_tuple_in_for_ctx\n", "values to unpack mismatch"); }  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      List a = kernel_builtins_unpack<0, List>(__reserved_value_tup_a_b37689_0);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      List b = kernel_builtins_unpack<1, List>(__reserved_value_tup_a_b37689_0);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:97
      {
        (void)(ret_list).append((((a).get_item(((int64_t)0)))));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:98
        (void)(ret_list).append((((b).get_item(((int64_t)0)))));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:99
      }
    }
  }
  return (ret_list);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:100
}

int test_unpack_tuple_in_for_ctx__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"int_list"};
    KwargsUnpackHelper helper("test_unpack_tuple_in_for_ctx", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:95
    auto ret = test_unpack_tuple_in_for_ctx(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 95, in test_unpack_tuple_in_for_ctx\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:95
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = test_unpack_tuple_in_for_ctx(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 95, in test_unpack_tuple_in_for_ctx\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:95
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 95, in test_unpack_tuple_in_for_ctx\n", "test_unpack_tuple_in_for_ctx() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:95
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_unpack_tuple_in_for_ctx__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_unpack_tuple_in_for_ctx\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_unpack_tuple_in_for_ctx\000";

} // extern C

