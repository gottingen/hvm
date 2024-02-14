#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__EmptyClass;
namespace {
// User class forward declarations
struct EmptyClass;
struct EmptyClass_SharedView;

EmptyClass_SharedView EmptyClass__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int EmptyClass__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue EmptyClass__F___init__(const EmptyClass_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int EmptyClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode EmptyClass__F___call__(const EmptyClass_SharedView& self);
int EmptyClass__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct EmptyClass : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "EmptyClass"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {EmptyClass::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {};
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode __call__();
};

// flags for convert check
uint32_t EmptyClass::tag_s_2_71828182846_ = 2680921162760744795;
uint32_t EmptyClass::var_num_s_2_71828182846_ = 0;
string_view EmptyClass::class_name_s_2_71828182846_ = "EmptyClass";
IUserDataRoot::__FunctionTable__ EmptyClass::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__EmptyClass, "EmptyClass");

struct EmptyClass_SharedView: public IUserDataSharedViewRoot {
  // member var
  EmptyClass *ptr;
  // constructor
  EmptyClass_SharedView(EmptyClass *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  EmptyClass_SharedView(EmptyClass *ptr) : ptr(ptr) {}
  EmptyClass_SharedView() : ptr(nullptr) {}
  EmptyClass_SharedView(const hercules::runtime::Any& ref) : EmptyClass_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "EmptyClass")) {}
  // UserDataRef
  EmptyClass_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("EmptyClass"));
    if(!base_ud_ptr->isinstance_2_71828182846(EmptyClass::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'EmptyClass' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<EmptyClass*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  EmptyClass* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void EmptyClass_F__deleter__(ILightUserData* ptr) { delete static_cast<EmptyClass*>(ptr); }
void* EmptyClass_F__placement_new__(void* buf) { return new (buf) EmptyClass; }
void EmptyClass_F__placement_del__(ILightUserData* ptr) { static_cast<EmptyClass*>(ptr)->EmptyClass::~EmptyClass(); }
EmptyClass_SharedView EmptyClass__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(EmptyClass)) {
    auto self = new EmptyClass;
    self->function_table_2_71828182846_ = &EmptyClass::function_table_s_2_71828182846_;
    EmptyClass__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(EmptyClass::tag_s_2_71828182846_, EmptyClass::var_num_s_2_71828182846_, self, EmptyClass_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(EmptyClass::tag_s_2_71828182846_, EmptyClass::var_num_s_2_71828182846_, sizeof(EmptyClass), EmptyClass_F__placement_new__, EmptyClass_F__placement_del__, __hercules_module_ctx);
    EmptyClass_SharedView self_view((EmptyClass*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &EmptyClass::function_table_s_2_71828182846_;
    EmptyClass__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue EmptyClass::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
  return (None);
}

HERCULES_DLL RTValue EmptyClass__F___init__(const EmptyClass_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
}

int EmptyClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
    auto ret = EmptyClass__F___init__(EmptyClass_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = EmptyClass__F___init__(EmptyClass_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 28, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
    }
  }

  return 0;
}

int EmptyClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = EmptyClass__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 28, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:28
  }
  return 0;
}

Unicode EmptyClass::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064\u0021", 12)));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:32
}

HERCULES_DLL Unicode EmptyClass__F___call__(const EmptyClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
}

int EmptyClass__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
    auto ret = EmptyClass__F___call__(EmptyClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = EmptyClass__F___call__(EmptyClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 31, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:31
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__EmptyClass[] = {
    (HerculesBackendPackedCFunc)EmptyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)EmptyClass__F___init____c_api,
    (HerculesBackendPackedCFunc)EmptyClass__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__EmptyClass = {
    "3\000EmptyClass__F___init___wrapper\000EmptyClass__F___init__\000EmptyClass__F___call__\000",    __hercules_func_array__EmptyClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)EmptyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)EmptyClass__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000EmptyClass__F___init___wrapper\000EmptyClass__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000EmptyClass__F___init___wrapper\000EmptyClass__F___init__\000";

} // extern C

