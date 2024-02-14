#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t sum(const List& l, void* handle_2_71828182846=((void*)(int64_t)0));
int sum__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t sum(const List& l, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:72
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:73
  s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, ((l).get_item(((int64_t)0))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 75, in sum\n", "expect 'ArithOps::add(s, ((l).get_item(((int64_t)0))))' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:75
  s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, ((l).get_item(((int64_t)1))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 76, in sum\n", "expect 'ArithOps::add(s, ((l).get_item(((int64_t)1))))' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:76
  {
    RTValue const& __reserved_eval_cons_x40652_0 = ((l).get_item(((int64_t)2)));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
    RTValue __reserved_next_holder_x49879_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
    auto __reserved_iter_x39111_0 = Kernel_Iterable::make(__reserved_eval_cons_x40652_0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
    auto __reserved_has_next_x29324_0 = __reserved_iter_x39111_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
    while (__reserved_has_next_x29324_0) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
      RTView x = __reserved_iter_x39111_0.NextView(&__reserved_has_next_x29324_0, &__reserved_next_holder_x49879_0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:77
      {
        s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, x)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 78, in sum\n", "expect 'ArithOps::add(s, x)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:78
      }
    }
  }
  s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)0))}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 79, in sum\n", "expect 'ArithOps::add(s, kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)0))}))' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:79
  s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)1))}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 80, in sum\n", "expect 'ArithOps::add(s, kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)1))}))' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:80
  {
    RTValue const& __reserved_eval_cons_x40652_01 = kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)2))});  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
    RTValue __reserved_next_holder_x49879_01;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
    auto __reserved_iter_x39111_01 = Kernel_Iterable::make(__reserved_eval_cons_x40652_01);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
    auto __reserved_has_next_x29324_01 = __reserved_iter_x39111_01.HasNext();  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
    while (__reserved_has_next_x29324_01) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
      RTView x1 = __reserved_iter_x39111_01.NextView(&__reserved_has_next_x29324_01, &__reserved_next_holder_x49879_01);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:81
      {
        s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, x1)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 82, in sum\n", "expect 'ArithOps::add(s, x1)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:82
      }
    }
  }
  {
    RTValue const& __reserved_eval_cons_kv19726_0 = kernel_object_items(kernel_object___fused_getitem__(((l).get_item(((int64_t)3))), {(RTView((int64_t)3))}), {});  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
    RTValue __reserved_next_holder_kv33248_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
    auto __reserved_iter_kv24752_0 = Kernel_Iterable::make(__reserved_eval_cons_kv19726_0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
    auto __reserved_has_next_kv45573_0 = __reserved_iter_kv24752_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
    while (__reserved_has_next_kv45573_0) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
      RTView kv = __reserved_iter_kv24752_0.NextView(&__reserved_has_next_kv45573_0, &__reserved_next_holder_kv33248_0);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:83
      {
        if (!((kernel_object___len__(kv) == (int64_t)2))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 84, in sum\n", "ValueError: values to unpack mismatch (expected 2)"); }  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:84
        RTValue k = (kernel_object___fused_getitem__(kv, {(RTView((int64_t)0))}));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:84
        RTValue v = (kernel_object___fused_getitem__(kv, {(RTView((int64_t)1))}));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:84
        s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, k)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 85, in sum\n", "expect 'ArithOps::add(s, k)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:85
        s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, v)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 86, in sum\n", "expect 'ArithOps::add(s, v)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:86
      }
    }
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:88
}

int sum__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"l"};
    KwargsUnpackHelper helper("sum", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:72
    auto ret = sum(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 72, in sum\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:72
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = sum(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 72, in sum\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:72
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 72, in sum\n", "sum() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:72
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)sum__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000sum\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000sum\000";

} // extern C

