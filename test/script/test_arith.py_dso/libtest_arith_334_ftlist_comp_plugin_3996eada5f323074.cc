#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue ftlist_comp(const List& aa, const List& bb, void* handle_2_71828182846=((void*)(int64_t)0));
int ftlist_comp__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ftlist_comp(const List& aa, const List& bb, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:334
  FTList<int64_t> a = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:335
  {
    const List&__reserved_eval_cons_x40652_0 = aa;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
    auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
    auto __reserved_iter_end_x1804_0 = __reserved_eval_cons_x40652_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
    while ((__reserved_iter_x39111_0 != __reserved_iter_end_x1804_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
      int64_t x = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_x39111_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 336, in ftlist_comp\n", "expect 'the element in aa' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
      ++__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:336
      {
        (void)(a).append((x));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:337
      }
    }
  }
  FTList<int64_t> b = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:338
  {
    const List&__reserved_eval_cons_x40652_01 = bb;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
    auto __reserved_iter_x39111_01 = __reserved_eval_cons_x40652_01.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
    auto __reserved_iter_end_x1804_01 = __reserved_eval_cons_x40652_01.end();  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
    while ((__reserved_iter_x39111_01 != __reserved_iter_end_x1804_01)) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
      int64_t x1 = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_x39111_01), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 339, in ftlist_comp\n", "expect 'the element in bb' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
      ++__reserved_iter_x39111_01;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:339
      {
        (void)(b).append((x1));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:340
      }
    }
  }
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((a > b)), ((a >= b)), ((a < b)), ((a <= b))})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:341
}

int ftlist_comp__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"aa", "bb"};
    KwargsUnpackHelper helper("ftlist_comp", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:334
    auto ret = ftlist_comp(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 334, in ftlist_comp\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 334, in ftlist_comp\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:334
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ftlist_comp(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 334, in ftlist_comp\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 334, in ftlist_comp\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:334
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 334, in ftlist_comp\n", "ftlist_comp() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:334
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ftlist_comp__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ftlist_comp\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000ftlist_comp\000";

} // extern C

