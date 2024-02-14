#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__HloLogicalOperate;
namespace {
// User class forward declarations
struct HloLogicalOperate;
struct HloLogicalOperate_SharedView;

HloLogicalOperate_SharedView HloLogicalOperate__F___init___wrapper(bool flag, void* handle_2_71828182846=((void*)(int64_t)0));
int HloLogicalOperate__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue HloLogicalOperate__F___init__(const HloLogicalOperate_SharedView& self, bool flag, void* handle_2_71828182846=((void*)(int64_t)0));
int HloLogicalOperate__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool HloLogicalOperate__F___call__(const HloLogicalOperate_SharedView& self, bool value, const unicode_view& op);
int HloLogicalOperate__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct HloLogicalOperate : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "HloLogicalOperate"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {HloLogicalOperate::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"flag", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"flag", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  bool flag;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return flag; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->flag = HERCULES_TYPE_AS(val, bool); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(bool flag, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual bool __call__(bool value, const unicode_view& op);
};

// flags for convert check
uint32_t HloLogicalOperate::tag_s_2_71828182846_ = 4211676928362041750;
uint32_t HloLogicalOperate::var_num_s_2_71828182846_ = 1;
string_view HloLogicalOperate::class_name_s_2_71828182846_ = "HloLogicalOperate";
IUserDataRoot::__FunctionTable__ HloLogicalOperate::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__HloLogicalOperate, "HloLogicalOperate");

struct HloLogicalOperate_SharedView: public IUserDataSharedViewRoot {
  // member var
  HloLogicalOperate *ptr;
  // constructor
  HloLogicalOperate_SharedView(HloLogicalOperate *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  HloLogicalOperate_SharedView(HloLogicalOperate *ptr) : ptr(ptr) {}
  HloLogicalOperate_SharedView() : ptr(nullptr) {}
  HloLogicalOperate_SharedView(const hercules::runtime::Any& ref) : HloLogicalOperate_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "HloLogicalOperate")) {}
  // UserDataRef
  HloLogicalOperate_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("HloLogicalOperate"));
    if(!base_ud_ptr->isinstance_2_71828182846(HloLogicalOperate::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'HloLogicalOperate' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<HloLogicalOperate*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  HloLogicalOperate* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void HloLogicalOperate_F__deleter__(ILightUserData* ptr) { delete static_cast<HloLogicalOperate*>(ptr); }
void* HloLogicalOperate_F__placement_new__(void* buf) { return new (buf) HloLogicalOperate; }
void HloLogicalOperate_F__placement_del__(ILightUserData* ptr) { static_cast<HloLogicalOperate*>(ptr)->HloLogicalOperate::~HloLogicalOperate(); }
HloLogicalOperate_SharedView HloLogicalOperate__F___init___wrapper(bool flag, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(HloLogicalOperate)) {
    auto self = new HloLogicalOperate;
    self->function_table_2_71828182846_ = &HloLogicalOperate::function_table_s_2_71828182846_;
    HloLogicalOperate__F___init__(self,  flag,  handle_2_71828182846);
    UserDataRef self_ref(HloLogicalOperate::tag_s_2_71828182846_, HloLogicalOperate::var_num_s_2_71828182846_, self, HloLogicalOperate_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(HloLogicalOperate::tag_s_2_71828182846_, HloLogicalOperate::var_num_s_2_71828182846_, sizeof(HloLogicalOperate), HloLogicalOperate_F__placement_new__, HloLogicalOperate_F__placement_del__, __hercules_module_ctx);
    HloLogicalOperate_SharedView self_view((HloLogicalOperate*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &HloLogicalOperate::function_table_s_2_71828182846_;
    HloLogicalOperate__F___init__(self_view,  flag,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue HloLogicalOperate::__init__(bool flag, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
  this->flag = flag;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:87
  return (None);
}

HERCULES_DLL RTValue HloLogicalOperate__F___init__(const HloLogicalOperate_SharedView& self, bool flag, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
  return (self->__init__(flag, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
}

int HloLogicalOperate__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "flag"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    auto ret = HloLogicalOperate__F___init__(HloLogicalOperate_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "expect 'pos_args[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = HloLogicalOperate__F___init__(HloLogicalOperate_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "expect 'args_t[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    }
  }

  return 0;
}

int HloLogicalOperate__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"flag"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    auto ret = HloLogicalOperate__F___init___wrapper(internal::TypeAsHelper<bool>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "expect 'pos_args[0]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = HloLogicalOperate__F___init___wrapper(internal::TypeAsHelper<bool>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "expect 'args_t[0]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 86, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:86
    }
  }

  return 0;
}

bool HloLogicalOperate::__call__(bool value, const unicode_view& op) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
  if (Kernel_bool::make(((op == unicode_view(U"\u0061\u006E\u0064", 3))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:90
    return ((!this->flag && value));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:91
  } else {
    return ((!this->flag || value));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:93
  }
  return (internal::TypeAsHelper<bool>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'bool' type"));
}

HERCULES_DLL bool HloLogicalOperate__F___call__(const HloLogicalOperate_SharedView& self, bool value, const unicode_view& op) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
  return (self->__call__(value, op));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
}

int HloLogicalOperate__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "value", "op"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
    auto ret = HloLogicalOperate__F___call__(HloLogicalOperate_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 89, in __call__\n", "expect 'pos_args[1]' is 'bool' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 89, in __call__\n", "expect 'pos_args[2]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = HloLogicalOperate__F___call__(HloLogicalOperate_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 89, in __call__\n", "expect 'args_t[1]' is 'bool' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 89, in __call__\n", "expect 'args_t[2]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 89, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:89
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__HloLogicalOperate[] = {
    (HerculesBackendPackedCFunc)HloLogicalOperate__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)HloLogicalOperate__F___init____c_api,
    (HerculesBackendPackedCFunc)HloLogicalOperate__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__HloLogicalOperate = {
    "3\000HloLogicalOperate__F___init___wrapper\000HloLogicalOperate__F___init__\000HloLogicalOperate__F___call__\000",    __hercules_func_array__HloLogicalOperate,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)HloLogicalOperate__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)HloLogicalOperate__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000HloLogicalOperate__F___init___wrapper\000HloLogicalOperate__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000HloLogicalOperate__F___init___wrapper\000HloLogicalOperate__F___init__\000";

} // extern C

