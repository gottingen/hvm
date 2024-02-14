#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue zip_two_list_return_tup(const List& a, const RTView& b, void* handle_2_71828182846=((void*)(int64_t)0));
int zip_two_list_return_tup__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue zip_two_list_return_tup(const List& a, const RTView& b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:64
  return (RTValue([handle_2_71828182846, a, b]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
    (void)(__reserved_list_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
    {
      auto const&__reserved_eval_cons_x40652_0 = generic_builtins_zip(Kernel_Iterable::make(a), Kernel_Iterable::make(b));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
      RTValue __reserved_next_holder_x49879_0;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
      auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
      auto __reserved_has_next_x29324_0 = __reserved_iter_x39111_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
      while (__reserved_has_next_x29324_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
        Tuple x = __reserved_iter_x39111_0.Next(&__reserved_has_next_x29324_0);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
        {
          (void)(__reserved_list_comp_result).append((RTValue(x)));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
  }()));  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:65
}

int zip_two_list_return_tup__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("zip_two_list_return_tup", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:64
    auto ret = zip_two_list_return_tup(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 64, in zip_two_list_return_tup\n", "expect 'pos_args[0]' is 'List' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:64
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = zip_two_list_return_tup(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 64, in zip_two_list_return_tup\n", "expect 'args_t[0]' is 'List' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:64
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_zip.py\", line 64, in zip_two_list_return_tup\n", "zip_two_list_return_tup() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_zip.py:64
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)zip_two_list_return_tup__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000zip_two_list_return_tup\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000zip_two_list_return_tup\000";

} // extern C

