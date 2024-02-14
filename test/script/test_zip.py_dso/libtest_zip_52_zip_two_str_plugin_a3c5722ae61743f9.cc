#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Dict zip_two_str(const unicode_view& a, const unicode_view& b, void* handle_2_71828182846=((void*)(int64_t)0));
int zip_two_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Dict zip_two_str(const unicode_view& a, const unicode_view& b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:52
  return ([handle_2_71828182846, a, b]() -> Dict {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
    Dict __reserved_dict_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
    (void)(__reserved_dict_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
    {
      auto const& __reserved_eval_zip_arg_x_y58199_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      auto const& __reserved_eval_zip_arg_x_y58199_1 = b;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      auto __reserved_iter_x_y11948_0 = __reserved_eval_zip_arg_x_y58199_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      auto __reserved_iter_end_x_y33648_0 = __reserved_eval_zip_arg_x_y58199_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      auto __reserved_iter_x_y11948_1 = __reserved_eval_zip_arg_x_y58199_1.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      auto __reserved_iter_end_x_y33648_1 = __reserved_eval_zip_arg_x_y58199_1.end();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
      while ((__reserved_iter_x_y11948_0 != __reserved_iter_end_x_y33648_0) && (__reserved_iter_x_y11948_1 != __reserved_iter_end_x_y33648_1)) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        Unicode x = Unicode(1, *__reserved_iter_x_y11948_0);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        ++__reserved_iter_x_y11948_0;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        Unicode y = Unicode(1, *__reserved_iter_x_y11948_1);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        ++__reserved_iter_x_y11948_1;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        {
          (void)(__reserved_dict_comp_result).set_item((RTValue(x)), (RTValue(y)));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
        }
      }
    }
    return (__reserved_dict_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:53
}

int zip_two_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("zip_two_str", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:52
    auto ret = zip_two_str(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 52, in zip_two_str\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 52, in zip_two_str\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:52
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = zip_two_str(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 52, in zip_two_str\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 52, in zip_two_str\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:52
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 52, in zip_two_str\n", "zip_two_str() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:52
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)zip_two_str__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000zip_two_str\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000zip_two_str\000";

} // extern C

