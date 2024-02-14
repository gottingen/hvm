#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass;
namespace {
// User class forward declarations
struct MyClass;
struct MyClass_SharedView;

MyClass_SharedView MyClass__F___init___wrapper(const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyClass : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyClass"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyClass::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"s", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"s", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  RTValue s;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return s; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->s = HERCULES_TYPE_AS(val, RTValue); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const RTView& s, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t MyClass::tag_s_2_71828182846_ = 2171605434393538594;
uint32_t MyClass::var_num_s_2_71828182846_ = 1;
string_view MyClass::class_name_s_2_71828182846_ = "MyClass";
IUserDataRoot::__FunctionTable__ MyClass::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyClass, "MyClass");

struct MyClass_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyClass *ptr;
  // constructor
  MyClass_SharedView(MyClass *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyClass_SharedView(MyClass *ptr) : ptr(ptr) {}
  MyClass_SharedView() : ptr(nullptr) {}
  MyClass_SharedView(const hercules::runtime::Any& ref) : MyClass_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyClass")) {}
  // UserDataRef
  MyClass_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyClass"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyClass::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyClass' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyClass*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyClass* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyClass_F__deleter__(ILightUserData* ptr) { delete static_cast<MyClass*>(ptr); }
void* MyClass_F__placement_new__(void* buf) { return new (buf) MyClass; }
void MyClass_F__placement_del__(ILightUserData* ptr) { static_cast<MyClass*>(ptr)->MyClass::~MyClass(); }
MyClass_SharedView MyClass__F___init___wrapper(const RTView& s, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyClass)) {
    auto self = new MyClass;
    self->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self,  s,  handle_2_71828182846);
    UserDataRef self_ref(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, self, MyClass_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, sizeof(MyClass), MyClass_F__placement_new__, MyClass_F__placement_del__, __hercules_module_ctx);
    MyClass_SharedView self_view((MyClass*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self_view,  s,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyClass::__init__(const RTView& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
  this->s = std::move(s);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:73
  return (None);
}

HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, const RTView& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
  return (self->__init__(s, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
}

int MyClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "s"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 72, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    }
  }

  return 0;
}

int MyClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    auto ret = MyClass__F___init___wrapper((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F___init___wrapper((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 72, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:72
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass = {
    "2\000MyClass__F___init___wrapper\000MyClass__F___init__\000",    __hercules_func_array__MyClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000MyClass__F___init___wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyClass__F___init___wrapper\000MyClass__F___init__\000";

} // extern C

