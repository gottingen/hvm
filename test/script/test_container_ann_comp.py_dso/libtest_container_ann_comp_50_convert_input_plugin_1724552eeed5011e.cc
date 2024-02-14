#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL FTList<FTSet<int64_t>> convert_input(const List& a, void* handle_2_71828182846=((void*)(int64_t)0));
int convert_input__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL FTList<FTSet<int64_t>> convert_input(const List& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:50
  FTList<FTSet<int64_t>> a_ft = ([handle_2_71828182846, a]() -> FTList<FTSet<int64_t>> {  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
    FTList<FTSet<int64_t>> __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
    (void)(__reserved_list_comp_result).reserve(((a).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
    {
      const List&__reserved_eval_cons_item40433_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
      auto __reserved_iter_item5298_0 = __reserved_eval_cons_item40433_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
      auto __reserved_iter_end_item1481_0 = __reserved_eval_cons_item40433_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
      while ((__reserved_iter_item5298_0 != __reserved_iter_end_item1481_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
        List item = internal::TypeAsHelper<List>::run((*__reserved_iter_item5298_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py\", line 51, in convert_input\n", "expect 'the element in a' is 'List' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
        ++__reserved_iter_item5298_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
        {
          (void)(__reserved_list_comp_result).append(([handle_2_71828182846, item]() -> FTSet<int64_t> {  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
            FTSet<int64_t> __reserved_set_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
            (void)(__reserved_set_comp_result).reserve(((item).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
            {
              List const& __reserved_eval_cons_i45344_0 = item;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
              auto __reserved_iter_i7935_0 = __reserved_eval_cons_i45344_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
              auto __reserved_iter_end_i2112_0 = __reserved_eval_cons_i45344_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
              while ((__reserved_iter_i7935_0 != __reserved_iter_end_i2112_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
                int64_t i = internal::TypeAsHelper<int64_t>::run((*__reserved_iter_i7935_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py\", line 52, in convert_input\n", "expect 'the element in item' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
                ++__reserved_iter_i7935_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
                {
                  (void)(__reserved_set_comp_result).add((i));  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
                }
              }
            }
            return (__reserved_set_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:52
          }()));  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:51
  return (a_ft);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:54
}

int convert_input__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("convert_input", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:50
    auto ret = convert_input(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py\", line 50, in convert_input\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:50
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = convert_input(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py\", line 50, in convert_input\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:50
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py\", line 50, in convert_input\n", "convert_input() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_ann_comp.py:50
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)convert_input__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000convert_input\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000convert_input\000";

} // extern C

