#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry___Lazy;
namespace {
// User class forward declarations
struct _Lazy;
struct _Lazy_SharedView;

_Lazy_SharedView _Lazy__F___init___wrapper(const UserDataRef& fu, void* handle_2_71828182846=((void*)(int64_t)0));
int _Lazy__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue _Lazy__F___init__(const _Lazy_SharedView& self, const UserDataRef& fu, void* handle_2_71828182846=((void*)(int64_t)0));
int _Lazy__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue _Lazy__F___call__(const _Lazy_SharedView& self);
int _Lazy__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct _Lazy : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "_Lazy"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {_Lazy::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"_fu", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"_fu", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  UserDataRef _fu;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return _fu; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->_fu = HERCULES_TYPE_AS(val, UserDataRef); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const UserDataRef& fu, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual RTValue __call__();
};

// flags for convert check
uint32_t _Lazy::tag_s_2_71828182846_ = 1365780963777479853;
uint32_t _Lazy::var_num_s_2_71828182846_ = 1;
string_view _Lazy::class_name_s_2_71828182846_ = "_Lazy";
IUserDataRoot::__FunctionTable__ _Lazy::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry___Lazy, "_Lazy");

struct _Lazy_SharedView: public IUserDataSharedViewRoot {
  // member var
  _Lazy *ptr;
  // constructor
  _Lazy_SharedView(_Lazy *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  _Lazy_SharedView(_Lazy *ptr) : ptr(ptr) {}
  _Lazy_SharedView() : ptr(nullptr) {}
  _Lazy_SharedView(const hercules::runtime::Any& ref) : _Lazy_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "_Lazy")) {}
  // UserDataRef
  _Lazy_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("_Lazy"));
    if(!base_ud_ptr->isinstance_2_71828182846(_Lazy::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect '_Lazy' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<_Lazy*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  _Lazy* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void _Lazy_F__deleter__(ILightUserData* ptr) { delete static_cast<_Lazy*>(ptr); }
void* _Lazy_F__placement_new__(void* buf) { return new (buf) _Lazy; }
void _Lazy_F__placement_del__(ILightUserData* ptr) { static_cast<_Lazy*>(ptr)->_Lazy::~_Lazy(); }
_Lazy_SharedView _Lazy__F___init___wrapper(const UserDataRef& fu, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(_Lazy)) {
    auto self = new _Lazy;
    self->function_table_2_71828182846_ = &_Lazy::function_table_s_2_71828182846_;
    _Lazy__F___init__(self,  fu,  handle_2_71828182846);
    UserDataRef self_ref(_Lazy::tag_s_2_71828182846_, _Lazy::var_num_s_2_71828182846_, self, _Lazy_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(_Lazy::tag_s_2_71828182846_, _Lazy::var_num_s_2_71828182846_, sizeof(_Lazy), _Lazy_F__placement_new__, _Lazy_F__placement_del__, __hercules_module_ctx);
    _Lazy_SharedView self_view((_Lazy*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &_Lazy::function_table_s_2_71828182846_;
    _Lazy__F___init__(self_view,  fu,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue _Lazy::__init__(const UserDataRef& fu, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
  this->_fu = make_native_userdata(string_view("Future", 6), fu);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:56
  return (None);
}

HERCULES_DLL RTValue _Lazy__F___init__(const _Lazy_SharedView& self, const UserDataRef& fu, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
  return (self->__init__(fu, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
}

int _Lazy__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "fu"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    auto ret = _Lazy__F___init__(_Lazy_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<UserDataRef>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "expect 'pos_args[1]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = _Lazy__F___init__(_Lazy_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<UserDataRef>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "expect 'args_t[1]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    }
  }

  return 0;
}

int _Lazy__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"fu"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    auto ret = _Lazy__F___init___wrapper(internal::TypeAsHelper<UserDataRef>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "expect 'pos_args[0]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = _Lazy__F___init___wrapper(internal::TypeAsHelper<UserDataRef>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "expect 'args_t[0]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 55, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:55
    }
  }

  return 0;
}

RTValue _Lazy::__call__() {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
  return ((this->_fu).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:59
}

HERCULES_DLL RTValue _Lazy__F___call__(const _Lazy_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
}

int _Lazy__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
    auto ret = _Lazy__F___call__(_Lazy_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = _Lazy__F___call__(_Lazy_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 58, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:58
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array___Lazy[] = {
    (HerculesBackendPackedCFunc)_Lazy__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)_Lazy__F___init____c_api,
    (HerculesBackendPackedCFunc)_Lazy__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry___Lazy = {
    "3\000_Lazy__F___init___wrapper\000_Lazy__F___init__\000_Lazy__F___call__\000",    __hercules_func_array___Lazy,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)_Lazy__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)_Lazy__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000_Lazy__F___init___wrapper\000_Lazy__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000_Lazy__F___init___wrapper\000_Lazy__F___init__\000";

} // extern C

