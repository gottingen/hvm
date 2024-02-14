#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LookupTableWithConfig;
namespace {
// User class forward declarations
struct LookupTableWithConfig;
struct LookupTableWithConfig_SharedView;

LookupTableWithConfig_SharedView LookupTableWithConfig__F___init___wrapper(const Dict& config, void* handle_2_71828182846=((void*)(int64_t)0));
int LookupTableWithConfig__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue LookupTableWithConfig__F___init__(const LookupTableWithConfig_SharedView& self, const Dict& config, void* handle_2_71828182846=((void*)(int64_t)0));
int LookupTableWithConfig__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue LookupTableWithConfig__F___call__(const LookupTableWithConfig_SharedView& self, const RTView& t);
int LookupTableWithConfig__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct LookupTableWithConfig : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "LookupTableWithConfig"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {LookupTableWithConfig::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"table", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"table", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Dict table{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return table; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->table = HERCULES_TYPE_AS(val, Dict); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const Dict& config, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual RTValue __call__(const RTView& t);
};

// flags for convert check
uint32_t LookupTableWithConfig::tag_s_2_71828182846_ = 4559649278908366937;
uint32_t LookupTableWithConfig::var_num_s_2_71828182846_ = 1;
string_view LookupTableWithConfig::class_name_s_2_71828182846_ = "LookupTableWithConfig";
IUserDataRoot::__FunctionTable__ LookupTableWithConfig::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__LookupTableWithConfig, "LookupTableWithConfig");

struct LookupTableWithConfig_SharedView: public IUserDataSharedViewRoot {
  // member var
  LookupTableWithConfig *ptr;
  // constructor
  LookupTableWithConfig_SharedView(LookupTableWithConfig *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  LookupTableWithConfig_SharedView(LookupTableWithConfig *ptr) : ptr(ptr) {}
  LookupTableWithConfig_SharedView() : ptr(nullptr) {}
  LookupTableWithConfig_SharedView(const hercules::runtime::Any& ref) : LookupTableWithConfig_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "LookupTableWithConfig")) {}
  // UserDataRef
  LookupTableWithConfig_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("LookupTableWithConfig"));
    if(!base_ud_ptr->isinstance_2_71828182846(LookupTableWithConfig::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'LookupTableWithConfig' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<LookupTableWithConfig*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  LookupTableWithConfig* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void LookupTableWithConfig_F__deleter__(ILightUserData* ptr) { delete static_cast<LookupTableWithConfig*>(ptr); }
void* LookupTableWithConfig_F__placement_new__(void* buf) { return new (buf) LookupTableWithConfig; }
void LookupTableWithConfig_F__placement_del__(ILightUserData* ptr) { static_cast<LookupTableWithConfig*>(ptr)->LookupTableWithConfig::~LookupTableWithConfig(); }
LookupTableWithConfig_SharedView LookupTableWithConfig__F___init___wrapper(const Dict& config, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(LookupTableWithConfig)) {
    auto self = new LookupTableWithConfig;
    self->function_table_2_71828182846_ = &LookupTableWithConfig::function_table_s_2_71828182846_;
    LookupTableWithConfig__F___init__(self,  config,  handle_2_71828182846);
    UserDataRef self_ref(LookupTableWithConfig::tag_s_2_71828182846_, LookupTableWithConfig::var_num_s_2_71828182846_, self, LookupTableWithConfig_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(LookupTableWithConfig::tag_s_2_71828182846_, LookupTableWithConfig::var_num_s_2_71828182846_, sizeof(LookupTableWithConfig), LookupTableWithConfig_F__placement_new__, LookupTableWithConfig_F__placement_del__, __hercules_module_ctx);
    LookupTableWithConfig_SharedView self_view((LookupTableWithConfig*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &LookupTableWithConfig::function_table_s_2_71828182846_;
    LookupTableWithConfig__F___init__(self_view,  config,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue LookupTableWithConfig::__init__(const Dict& config, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
  this->table = Kernel_Dict::make(std::initializer_list<Dict::value_type>{});  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:185
  {
    File const& __reserved_eval_cons_line34973_0 = kernel_file_open({(kernel_object___fused_getitem__(((config).get_item((unicode_view(U"\u0072\u006F\u006F\u0074", 4)))), {(RTView(unicode_view(U"\u006C\u006F\u0063\u0061\u0074\u0069\u006F\u006E\u0073", 9))), (RTView(unicode_view(U"\u006C\u006F\u0063\u005F\u0031", 5)))})), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))});  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
    RTValue __reserved_next_holder_line33764_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
    auto __reserved_iter_line61663_0 = Kernel_Iterable::make(__reserved_eval_cons_line34973_0);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
    auto __reserved_has_next_line48177_0 = __reserved_iter_line61663_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
    while (__reserved_has_next_line48177_0) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
      Unicode line = internal::TypeAsHelper<Unicode>::run((__reserved_iter_line61663_0.NextView(&__reserved_has_next_line48177_0, &__reserved_next_holder_line33764_0)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 186, in __init__\n", "expect 'the next element in kernel_file_open({(kernel_object___fused_getitem__(((config).get_item((unicode_view(U\"\\u0072\\u006F\\u006F\\u0074\", 4)))), {(RTView(unicode_view(U\"\\u006C\\u006F\\u0063\\u0061\\u0074\\u0069\\u006F\\u006E\\u0073\", 9))), (RTView(unicode_view(U\"\\u006C\\u006F\\u0063\\u005F\\u0031\", 5)))})), (unicode_view(U\"\\u0072\", 1)), (unicode_view(U\"\\u0075\\u0074\\u0066\\u0038\", 4))})' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:186
      {
        line = kernel_unicode_strip(GenericValueConverter<unicode_view>{}(line));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:187
        if (Kernel_bool::make(((kernel_unicode___len__(GenericValueConverter<unicode_view>{}(line)) == (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:188
          continue;
        }
        List unpack_74024035 = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(line), None, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:190
        if (!(((unpack_74024035).size() == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
        Unicode a = (internal::TypeAsHelper<Unicode>::run(((unpack_74024035).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 190, in __init__\n", "expect '(unpack_74024035).get_item(((int64_t)0))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:190
        Unicode b = (internal::TypeAsHelper<Unicode>::run(((unpack_74024035).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 190, in __init__\n", "expect '(unpack_74024035).get_item(((int64_t)1))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:190
        (void)(this->table).set_item((RTValue(a)), (RTValue(b)));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:191
      }
    }
  }
  {
    File const& __reserved_eval_cons_line34973_01 = kernel_file_open({(kernel_object___fused_getitem__(((config).get_item((unicode_view(U"\u0072\u006F\u006F\u0074", 4)))), {(RTView(unicode_view(U"\u006C\u006F\u0063\u0061\u0074\u0069\u006F\u006E\u0073", 9))), (RTView(unicode_view(U"\u006C\u006F\u0063\u005F\u0032", 5)))})), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))});  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
    RTValue __reserved_next_holder_line33764_01;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
    auto __reserved_iter_line61663_01 = Kernel_Iterable::make(__reserved_eval_cons_line34973_01);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
    auto __reserved_has_next_line48177_01 = __reserved_iter_line61663_01.HasNext();  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
    while (__reserved_has_next_line48177_01) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
      Unicode line1 = internal::TypeAsHelper<Unicode>::run((__reserved_iter_line61663_01.NextView(&__reserved_has_next_line48177_01, &__reserved_next_holder_line33764_01)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 192, in __init__\n", "expect 'the next element in kernel_file_open({(kernel_object___fused_getitem__(((config).get_item((unicode_view(U\"\\u0072\\u006F\\u006F\\u0074\", 4)))), {(RTView(unicode_view(U\"\\u006C\\u006F\\u0063\\u0061\\u0074\\u0069\\u006F\\u006E\\u0073\", 9))), (RTView(unicode_view(U\"\\u006C\\u006F\\u0063\\u005F\\u0032\", 5)))})), (unicode_view(U\"\\u0072\", 1)), (unicode_view(U\"\\u0075\\u0074\\u0066\\u0038\", 4))})' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:192
      {
        line1 = kernel_unicode_strip(GenericValueConverter<unicode_view>{}(line1));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:193
        if (Kernel_bool::make(((kernel_unicode___len__(GenericValueConverter<unicode_view>{}(line1)) == (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:194
          continue;
        }
        List unpack_49819269 = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(line1), None, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:196
        if (!(((unpack_49819269).size() == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
        Unicode a = (internal::TypeAsHelper<Unicode>::run(((unpack_49819269).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 196, in __init__\n", "expect '(unpack_49819269).get_item(((int64_t)0))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:196
        Unicode b = (internal::TypeAsHelper<Unicode>::run(((unpack_49819269).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 196, in __init__\n", "expect '(unpack_49819269).get_item(((int64_t)1))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:196
        (void)(this->table).set_item((RTValue(a)), (RTValue(b)));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:197
      }
    }
  }
  return (None);
}

HERCULES_DLL RTValue LookupTableWithConfig__F___init__(const LookupTableWithConfig_SharedView& self, const Dict& config, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
  return (self->__init__(config, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
}

int LookupTableWithConfig__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "config"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    auto ret = LookupTableWithConfig__F___init__(LookupTableWithConfig_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<Dict>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "expect 'pos_args[1]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LookupTableWithConfig__F___init__(LookupTableWithConfig_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<Dict>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "expect 'args_t[1]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    }
  }

  return 0;
}

int LookupTableWithConfig__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"config"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    auto ret = LookupTableWithConfig__F___init___wrapper(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "expect 'pos_args[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = LookupTableWithConfig__F___init___wrapper(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "expect 'args_t[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 184, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:184
    }
  }

  return 0;
}

RTValue LookupTableWithConfig::__call__(const RTView& t) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
  return (((this->table).get_item((t))));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:200
}

HERCULES_DLL RTValue LookupTableWithConfig__F___call__(const LookupTableWithConfig_SharedView& self, const RTView& t) {  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
  return (self->__call__(t));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
}

int LookupTableWithConfig__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "t"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
    auto ret = LookupTableWithConfig__F___call__(LookupTableWithConfig_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LookupTableWithConfig__F___call__(LookupTableWithConfig_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]));  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py\", line 199, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_bundle_resource.py:199
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__LookupTableWithConfig[] = {
    (HerculesBackendPackedCFunc)LookupTableWithConfig__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LookupTableWithConfig__F___init____c_api,
    (HerculesBackendPackedCFunc)LookupTableWithConfig__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LookupTableWithConfig = {
    "3\000LookupTableWithConfig__F___init___wrapper\000LookupTableWithConfig__F___init__\000LookupTableWithConfig__F___call__\000",    __hercules_func_array__LookupTableWithConfig,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)LookupTableWithConfig__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LookupTableWithConfig__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000LookupTableWithConfig__F___init___wrapper\000LookupTableWithConfig__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000LookupTableWithConfig__F___init___wrapper\000LookupTableWithConfig__F___init__\000";

} // extern C

