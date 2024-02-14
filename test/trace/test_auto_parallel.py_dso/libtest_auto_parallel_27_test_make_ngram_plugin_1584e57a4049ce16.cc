#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List test_make_ngram(Unicode query, int64_t max_ngram_size, void* handle_2_71828182846=((void*)(int64_t)0));
int test_make_ngram__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_make_ngram(Unicode query, int64_t max_ngram_size, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:28
  double k = (kernel_random_random());  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:29
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0062\u0065\u0067\u0069\u006E\u0020", 6), k, unicode_view(U"\u003A\u0020", 2), kernel_time_time());  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:30
  List ngram_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:31
  List positions = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:32
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)10000; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:33
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:33
    query = kernel_unicode_strip(GenericValueConverter<unicode_view>{}(query));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:34
    List query_terms = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(query), unicode_view(U"\u0020", 1), (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:35
    ngram_list = Kernel_List::make(std::initializer_list<List::value_type>{});  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:36
    positions = Kernel_List::make(std::initializer_list<List::value_type>{});  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:37
    int64_t l_stop_49819269 = ((max_ngram_size + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:39
    for (int64_t l_iter_ = (int64_t)1; l_iter_ < l_stop_49819269; l_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:39
      int64_t l = l_iter_;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:39
      int64_t j_stop_74024035 = ((((query_terms).size() - l) + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:40
      for (int64_t j_iter_ = (int64_t)0; j_iter_ < j_stop_74024035; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:40
        int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:40
        (void)(ngram_list).append((RTValue(kernel_unicode_join(unicode_view(U"\u0020", 1), (query_terms).get_slice((j), ((j + l)), ((int64_t)1))))));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:41
        (void)(positions).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:42
      }
    }
  }
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0065\u006E\u0064\u0020", 4), k, unicode_view(U"\u003A\u0020", 2), kernel_time_time());  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:43
  return (ngram_list);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:44
}

int test_make_ngram__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"query", "max_ngram_size"};
    KwargsUnpackHelper helper("test_make_ngram", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:28
    auto ret = test_make_ngram(internal::TypeAsHelper<Unicode>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py\", line 28, in test_make_ngram\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py\", line 28, in test_make_ngram\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = test_make_ngram(internal::TypeAsHelper<Unicode>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py\", line 28, in test_make_ngram\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py\", line 28, in test_make_ngram\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py\", line 28, in test_make_ngram\n", "test_make_ngram() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel.py:28
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_make_ngram__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_make_ngram\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_make_ngram\000";

} // extern C

