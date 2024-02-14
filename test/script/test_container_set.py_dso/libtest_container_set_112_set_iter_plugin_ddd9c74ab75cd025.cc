#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List set_iter(const Set& s, void* handle_2_71828182846=((void*)(int64_t)0));
int set_iter__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List set_iter(const Set& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:112
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:113
  {
    const Set&__reserved_eval_cons_item40433_0 = s;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
    auto __reserved_iter_item5298_0 = __reserved_eval_cons_item40433_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
    auto __reserved_iter_end_item1481_0 = __reserved_eval_cons_item40433_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
    while ((__reserved_iter_item5298_0 != __reserved_iter_end_item1481_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
      RTView item = internal::TypeAsHelper<RTView>::run((*__reserved_iter_item5298_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 114, in set_iter\n", "expect 'the element in s' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
      ++__reserved_iter_item5298_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:114
      {
        (void)(ret).append((item));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:115
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:116
}

int set_iter__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("set_iter", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:112
    auto ret = set_iter(internal::TypeAsHelper<Set>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 112, in set_iter\n", "expect 'pos_args[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:112
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = set_iter(internal::TypeAsHelper<Set>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 112, in set_iter\n", "expect 'args_t[0]' is 'Set' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:112
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 112, in set_iter\n", "set_iter() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:112
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_iter__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_iter\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_iter\000";

} // extern C

