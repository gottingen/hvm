#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple autofor_list_append_0(const List& outer, void* handle_2_71828182846=((void*)(int64_t)0));
int autofor_list_append_0__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple autofor_list_append_0(const List& outer, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:464
  List inner = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4), ((int64_t)5)}));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:465
  int64_t useless_cnt = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:466
  {
    const List&__reserved_eval_cons_item40433_0 = outer;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
    auto __reserved_iter_item5298_0 = __reserved_eval_cons_item40433_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
    auto __reserved_iter_end_item1481_0 = __reserved_eval_cons_item40433_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
    while ((__reserved_iter_item5298_0 != __reserved_iter_end_item1481_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
      RTView item = internal::TypeAsHelper<RTView>::run((*__reserved_iter_item5298_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 467, in autofor_list_append_0\n", "expect 'the element in outer' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
      ++__reserved_iter_item5298_0;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:467
      {
        {
          List const& __reserved_eval_cons_item250023_0 = inner;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
          auto __reserved_iter_item258174_0 = __reserved_eval_cons_item250023_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
          auto __reserved_iter_end_item262645_0 = __reserved_eval_cons_item250023_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
          while ((__reserved_iter_item258174_0 != __reserved_iter_end_item262645_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
            RTView item2 = internal::TypeAsHelper<RTView>::run((*__reserved_iter_item258174_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 468, in autofor_list_append_0\n", "expect 'the element in inner' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
            ++__reserved_iter_item258174_0;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:468
            {
              useless_cnt = (useless_cnt + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:469
            }
          }
        }
        (void)(inner).append((RTValue((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:470
      }
    }
  }
  (void)(outer).append((RTValue((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:471
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(outer), (inner)}));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:472
}

int autofor_list_append_0__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"outer"};
    KwargsUnpackHelper helper("autofor_list_append_0", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:464
    auto ret = autofor_list_append_0(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 464, in autofor_list_append_0\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:464
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = autofor_list_append_0(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 464, in autofor_list_append_0\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:464
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 464, in autofor_list_append_0\n", "autofor_list_append_0() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:464
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)autofor_list_append_0__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000autofor_list_append_0\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000autofor_list_append_0\000";

} // extern C

