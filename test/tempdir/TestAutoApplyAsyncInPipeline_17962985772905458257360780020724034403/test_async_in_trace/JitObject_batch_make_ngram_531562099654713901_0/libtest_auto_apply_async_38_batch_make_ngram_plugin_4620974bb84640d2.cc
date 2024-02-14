#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List make_ngram(Unicode query, void* handle_2_71828182846=((void*)(int64_t)0));
int make_ngram__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List batch_make_ngram(const List& queries, void* handle_2_71828182846=((void*)(int64_t)0));
int batch_make_ngram__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List make_ngram(Unicode query, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:26
  int64_t max_ngram_size = ((int64_t)4);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:27
  List ngram_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:28
  query = kernel_unicode_strip(GenericValueConverter<unicode_view>{}(query));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:29
  List query_terms = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(query), unicode_view(U"\u0020", 1), (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:30
  int64_t l_stop_49819269 = ((max_ngram_size + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:32
  for (int64_t l_iter_ = (int64_t)1; l_iter_ < l_stop_49819269; l_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:32
    int64_t l = l_iter_;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:32
    int64_t j_stop_74024035 = ((((query_terms).size() - l) + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:33
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < j_stop_74024035; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:33
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:33
      (void)(ngram_list).append((RTValue(kernel_unicode_join(unicode_view(U"\u0020", 1), (query_terms).get_slice((j), ((j + l)), ((int64_t)1))))));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:34
    }
  }
  return (ngram_list);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:35
}

int make_ngram__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"query"};
    KwargsUnpackHelper helper("make_ngram", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:26
    auto ret = make_ngram(internal::TypeAsHelper<Unicode>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 26, in make_ngram\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = make_ngram(internal::TypeAsHelper<Unicode>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 26, in make_ngram\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 26, in make_ngram\n", "make_ngram() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:26
    }
  }

  return 0;
}

HERCULES_DLL List batch_make_ngram(const List& queries, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:39
  List futures = ([handle_2_71828182846, queries]() -> List {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
    (void)(__reserved_list_comp_result).reserve(((queries).size()));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
    {
      const List&__reserved_eval_cons_q17081_0 = queries;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
      auto __reserved_iter_q22097_0 = __reserved_eval_cons_q17081_0.begin();  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
      auto __reserved_iter_end_q51242_0 = __reserved_eval_cons_q17081_0.end();  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
      while ((__reserved_iter_q22097_0 != __reserved_iter_end_q51242_0)) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
        unicode_view q = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_q22097_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 40, in batch_make_ngram\n", "expect 'the element in queries' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
        ++__reserved_iter_q22097_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
        {
          (void)(__reserved_list_comp_result).append((ApplyAsync(MakeUserFunction(string_view("make_ngram", 10), (HerculesBackendPackedCFunc)make_ngram__c_api, handle_2_71828182846), {(q)}, handle_2_71828182846)));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
  }());  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:40
  List results = ([handle_2_71828182846, futures]() -> List {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
    (void)(__reserved_list_comp_result).reserve(((futures).size()));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
    {
      List const& __reserved_eval_cons_f39753_0 = futures;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
      auto __reserved_iter_f63549_0 = __reserved_eval_cons_f39753_0.begin();  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
      auto __reserved_iter_end_f13054_0 = __reserved_eval_cons_f39753_0.end();  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
      while ((__reserved_iter_f63549_0 != __reserved_iter_end_f13054_0)) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
        RTValue f = *__reserved_iter_f63549_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
        ++__reserved_iter_f63549_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
        {
          (void)(__reserved_list_comp_result).append((kernel_object_get(f, {})));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
  }());  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:41
  return (results);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:42
}

int batch_make_ngram__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"queries"};
    KwargsUnpackHelper helper("batch_make_ngram", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:39
    auto ret = batch_make_ngram(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 39, in batch_make_ngram\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = batch_make_ngram(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 39, in batch_make_ngram\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py\", line 39, in batch_make_ngram\n", "batch_make_ngram() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_apply_async.py:39
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)batch_make_ngram__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000batch_make_ngram\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000make_ngram\000batch_make_ngram\000";

} // extern C

