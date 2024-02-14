#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue zip_two_any(const RTView& a, const RTView& b, void* handle_2_71828182846=((void*)(int64_t)0));
int zip_two_any__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue zip_two_any(const RTView& a, const RTView& b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:40
  return (RTValue([handle_2_71828182846, a, b]() -> Dict {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
    Dict __reserved_dict_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
    (void)(__reserved_dict_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
    {
      auto const& __reserved_eval_zip_arg_x_y58199_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      auto const& __reserved_eval_zip_arg_x_y58199_1 = b;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      RTValue __reserved_next_holder_x_y60074_0;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      RTValue __reserved_next_holder_x_y60074_1;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      auto __reserved_iter_x_y11948_0 = Kernel_Iterable::make(__reserved_eval_zip_arg_x_y58199_0);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      auto __reserved_has_next_x_y35759_0 = __reserved_iter_x_y11948_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      auto __reserved_iter_x_y11948_1 = Kernel_Iterable::make(__reserved_eval_zip_arg_x_y58199_1);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      auto __reserved_has_next_x_y35759_1 = __reserved_iter_x_y11948_1.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
      while (__reserved_has_next_x_y35759_0 && __reserved_has_next_x_y35759_1) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
        RTValue x = __reserved_iter_x_y11948_0.Next(&__reserved_has_next_x_y35759_0);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
        RTValue y = __reserved_iter_x_y11948_1.Next(&__reserved_has_next_x_y35759_1);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
        {
          (void)(__reserved_dict_comp_result).set_item((x), (y));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
        }
      }
    }
    return (__reserved_dict_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
  }()));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:41
}

int zip_two_any__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("zip_two_any", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:40
    auto ret = zip_two_any((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = zip_two_any((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 40, in zip_two_any\n", "zip_two_any() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:40
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)zip_two_any__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000zip_two_any\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000zip_two_any\000";

} // extern C

