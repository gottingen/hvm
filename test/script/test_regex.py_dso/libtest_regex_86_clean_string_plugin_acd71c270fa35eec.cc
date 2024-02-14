#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode clean_string(const unicode_view& ss, void* handle_2_71828182846=((void*)(int64_t)0));
int clean_string__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode clean_string(const unicode_view& ss, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:87
  List replaces = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:88
  List replace_pair = (Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005B\u005E\u0041\u002D\u005A\u0061\u002D\u007A\u0030\u002D\u0039\u0028\u0029\u002C\u0021\u003F\u005C\u0027\u005C\u0060\u005D", 21)), (unicode_view(U"\u0020", 1))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0027\u0073", 3)), (unicode_view(U"\u0020\u0027\u0073", 3))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0027\u0076\u0065", 4)), (unicode_view(U"\u0020\u0027\u0076\u0065", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u006E\u005C\u0027\u0074", 4)), (unicode_view(U"\u0020\u006E\u0027\u0074", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0027\u0072\u0065", 4)), (unicode_view(U"\u0020\u0027\u0072\u0065", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0027\u0064", 3)), (unicode_view(U"\u0020\u0027\u0064", 3))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0027\u006C\u006C", 4)), (unicode_view(U"\u0020\u0027\u006C\u006C", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u002C", 1)), (unicode_view(U"\u0020\u002C\u0020", 3))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u0021", 1)), (unicode_view(U"\u0020\u0021\u0020", 3))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0028", 2)), (unicode_view(U"\u0020\u005C\u0028\u0020", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0029", 2)), (unicode_view(U"\u0020\u005C\u0029\u0020", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u003F", 2)), (unicode_view(U"\u0020\u005C\u003F\u0020", 4))})), (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(unicode_view(U"\u005C\u0073\u007B\u0032\u002C\u007D", 6)), (unicode_view(U"\u0020", 1))}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:89
  {
    List const& __reserved_eval_cons_tup49883_0 = replace_pair;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
    auto __reserved_iter_tup21554_0 = __reserved_eval_cons_tup49883_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
    auto __reserved_iter_end_tup46839_0 = __reserved_eval_cons_tup49883_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
    while ((__reserved_iter_tup21554_0 != __reserved_iter_end_tup46839_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
      RTView tup = internal::TypeAsHelper<RTView>::run((*__reserved_iter_tup21554_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 104, in clean_string\n", "expect 'the element in replace_pair' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
      ++__reserved_iter_tup21554_0;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:104
      {
        (void)(replaces).append((RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(Kernel_Regex::make((kernel_object___fused_getitem__(tup, {(RTView((int64_t)0))})), ((bool)0), ((bool)0), ((bool)0), ((bool)0), ((bool)1))), (kernel_object___fused_getitem__(tup, {(RTView((int64_t)1))}))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:105
      }
    }
  }
  Unicode ss1 = (ss);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:106
  {
    List const& __reserved_eval_cons_tup49883_01 = replaces;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
    auto __reserved_iter_tup21554_01 = __reserved_eval_cons_tup49883_01.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
    auto __reserved_iter_end_tup46839_01 = __reserved_eval_cons_tup49883_01.end();  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
    while ((__reserved_iter_tup21554_01 != __reserved_iter_end_tup46839_01)) {  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
      RTView tup1 = internal::TypeAsHelper<RTView>::run((*__reserved_iter_tup21554_01), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 107, in clean_string\n", "expect 'the element in replaces' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
      ++__reserved_iter_tup21554_01;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:107
      {
        ss1 = internal::TypeAsHelper<Unicode>::run((kernel_object_replace(kernel_object___fused_getitem__(tup1, {(RTView((int64_t)0))}), {(ss1), (kernel_object___fused_getitem__(tup1, {(RTView((int64_t)1))}))})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 108, in clean_string\n", "expect 'kernel_object_replace(kernel_object___fused_getitem__(tup1, {(RTView((int64_t)0))}), {(ss1), (kernel_object___fused_getitem__(tup1, {(RTView((int64_t)1))}))})' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:108
      }
    }
  }
  return (kernel_unicode_strip(GenericValueConverter<unicode_view>{}(ss1)));  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:109
}

int clean_string__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"ss"};
    KwargsUnpackHelper helper("clean_string", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:87
    auto ret = clean_string(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 87, in clean_string\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:87
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = clean_string(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 87, in clean_string\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:87
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_regex.py\", line 87, in clean_string\n", "clean_string() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_regex.py:87
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)clean_string__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000clean_string\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000clean_string\000";

} // extern C

