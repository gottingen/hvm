#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimpleClass;
namespace {
// User class forward declarations
struct MySimpleClass;
struct MySimpleClass_SharedView;

MySimpleClass_SharedView MySimpleClass__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySimpleClass__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySimpleClass__F___init__(const MySimpleClass_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySimpleClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double MySimpleClass__F_func1(const MySimpleClass_SharedView& self);
int MySimpleClass__F_func1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double MySimpleClass__F_func2(const MySimpleClass_SharedView& self);
int MySimpleClass__F_func2__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MySimpleClass : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySimpleClass"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySimpleClass::tag_s_2_71828182846_};
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
  virtual double func1();
  virtual double func2();
};

// flags for convert check
uint32_t MySimpleClass::tag_s_2_71828182846_ = 4656272059028373587;
uint32_t MySimpleClass::var_num_s_2_71828182846_ = 0;
string_view MySimpleClass::class_name_s_2_71828182846_ = "MySimpleClass";
IUserDataRoot::__FunctionTable__ MySimpleClass::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySimpleClass, "MySimpleClass");

struct MySimpleClass_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySimpleClass *ptr;
  // constructor
  MySimpleClass_SharedView(MySimpleClass *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySimpleClass_SharedView(MySimpleClass *ptr) : ptr(ptr) {}
  MySimpleClass_SharedView() : ptr(nullptr) {}
  MySimpleClass_SharedView(const hercules::runtime::Any& ref) : MySimpleClass_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySimpleClass")) {}
  // UserDataRef
  MySimpleClass_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySimpleClass"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySimpleClass::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySimpleClass' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySimpleClass*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySimpleClass* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MySimpleClass_F__deleter__(ILightUserData* ptr) { delete static_cast<MySimpleClass*>(ptr); }
void* MySimpleClass_F__placement_new__(void* buf) { return new (buf) MySimpleClass; }
void MySimpleClass_F__placement_del__(ILightUserData* ptr) { static_cast<MySimpleClass*>(ptr)->MySimpleClass::~MySimpleClass(); }
MySimpleClass_SharedView MySimpleClass__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySimpleClass)) {
    auto self = new MySimpleClass;
    self->function_table_2_71828182846_ = &MySimpleClass::function_table_s_2_71828182846_;
    MySimpleClass__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MySimpleClass::tag_s_2_71828182846_, MySimpleClass::var_num_s_2_71828182846_, self, MySimpleClass_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySimpleClass::tag_s_2_71828182846_, MySimpleClass::var_num_s_2_71828182846_, sizeof(MySimpleClass), MySimpleClass_F__placement_new__, MySimpleClass_F__placement_del__, __hercules_module_ctx);
    MySimpleClass_SharedView self_view((MySimpleClass*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySimpleClass::function_table_s_2_71828182846_;
    MySimpleClass__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MySimpleClass::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
  return (None);
}

HERCULES_DLL RTValue MySimpleClass__F___init__(const MySimpleClass_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
}

int MySimpleClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
    auto ret = MySimpleClass__F___init__(MySimpleClass_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimpleClass__F___init__(MySimpleClass_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 65, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
    }
  }

  return 0;
}

int MySimpleClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySimpleClass__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 65, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:65
  }
  return 0;
}

double MySimpleClass::func1() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
  return (1.0000000000000000000e+00);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:69
}

HERCULES_DLL double MySimpleClass__F_func1(const MySimpleClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
  return (self->func1());  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
}

int MySimpleClass__F_func1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func1", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
    auto ret = MySimpleClass__F_func1(MySimpleClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimpleClass__F_func1(MySimpleClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 68, in func1\n", "func1() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:68
    }
  }

  return 0;
}

double MySimpleClass::func2() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
  return (2.0000000000000000000e+00);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:72
}

HERCULES_DLL double MySimpleClass__F_func2(const MySimpleClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
  return (self->func2());  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
}

int MySimpleClass__F_func2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func2", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
    auto ret = MySimpleClass__F_func2(MySimpleClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimpleClass__F_func2(MySimpleClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 71, in func2\n", "func2() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:71
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySimpleClass[] = {
    (HerculesBackendPackedCFunc)MySimpleClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySimpleClass__F___init____c_api,
    (HerculesBackendPackedCFunc)MySimpleClass__F_func1__c_api,
    (HerculesBackendPackedCFunc)MySimpleClass__F_func2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimpleClass = {
    "4\000MySimpleClass__F___init___wrapper\000MySimpleClass__F___init__\000MySimpleClass__F_func1\000MySimpleClass__F_func2\000",    __hercules_func_array__MySimpleClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MySimpleClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySimpleClass__F_func1__c_api,
    (HerculesBackendPackedCFunc)MySimpleClass__F_func2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MySimpleClass__F___init___wrapper\000MySimpleClass__F_func1\000MySimpleClass__F_func2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MySimpleClass__F___init___wrapper\000MySimpleClass__F___init__\000";

} // extern C

