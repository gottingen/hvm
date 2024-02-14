#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List test_list_comp_nested(List b, void* handle_2_71828182846=((void*)(int64_t)0));
int test_list_comp_nested__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_list_comp_nested(List b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:28
  b = [handle_2_71828182846, b]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
    (void)(__reserved_list_comp_result).reserve((((b).size() * (int64_t)2)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
    {
      List const& __reserved_eval_cons_i45344_0 = b;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
      auto __reserved_iter_i7935_0 = __reserved_eval_cons_i45344_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
      auto __reserved_iter_end_i2112_0 = __reserved_eval_cons_i45344_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
      while ((__reserved_iter_i7935_0 != __reserved_iter_end_i2112_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
        int64_t i = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_i7935_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 29, in test_list_comp_nested\n", "expect 'the element in b' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
        ++__reserved_iter_i7935_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
        {
          if ((ArithOps::floormod(i, (int64_t)2) != (int64_t)0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
            for (int64_t j_iter_ = (int64_t)0; j_iter_ < i; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
              int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
              (void)(__reserved_list_comp_result).append((RTValue(j)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
            }
          }
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
  }();  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:29
  return (b);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:30
}

int test_list_comp_nested__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"b"};
    KwargsUnpackHelper helper("test_list_comp_nested", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:28
    auto ret = test_list_comp_nested(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 28, in test_list_comp_nested\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = test_list_comp_nested(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 28, in test_list_comp_nested\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 28, in test_list_comp_nested\n", "test_list_comp_nested() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:28
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_list_comp_nested__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_list_comp_nested\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_list_comp_nested\000";

} // extern C

