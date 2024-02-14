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

MyClass_SharedView MyClass__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_func1(void* handle_2_71828182846=((void*)(int64_t)0));
int my_func1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_func2(void* handle_2_71828182846=((void*)(int64_t)0));
int my_func2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyClass__F___repr__(const MyClass_SharedView& self);
int MyClass__F___repr____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool MyClass__F___eq__(const MyClass_SharedView& self, const RTView& other);
int MyClass__F___eq____c_api(HerculesAny*, int, HerculesAny*, void*);
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
  virtual Unicode __repr__();
  virtual bool __eq__(const RTView& other);
};

// flags for convert check
uint32_t MyClass::tag_s_2_71828182846_ = 1855777739527617386;
uint32_t MyClass::var_num_s_2_71828182846_ = 0;
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
MyClass_SharedView MyClass__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyClass)) {
    auto self = new MyClass;
    self->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, self, MyClass_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, sizeof(MyClass), MyClass_F__placement_new__, MyClass_F__placement_del__, __hercules_module_ctx);
    MyClass_SharedView self_view((MyClass*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue my_func1(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:35
  UserDataRef creator1 = (MakeUserFunction(string_view("MyClass.__init__", 16), (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:36
  RTValue a1 = ((creator1).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:37
  UserDataRef creator2 = (MakeUserFunction(string_view("MyClass.__init__", 16), (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:38
  RTValue a2 = ((creator2).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:39
  MyClass_SharedView a3 = (MyClass__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:40
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a1), (a2), (a3)})));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:41
}

int my_func1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_func1(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:35
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 35, in my_func1\n", "my_func1() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:35
  }
  return 0;
}

HERCULES_DLL RTValue my_func2(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:44
  UserDataRef my_func1_c = (MakeUserFunction(string_view("my_func1", 8), (HerculesBackendPackedCFunc)my_func1__c_api, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:45
  RTValue b1 = ((my_func1_c).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:46
  RTValue b2 = (my_func1(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:47
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(b1), (b2)})));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:48
}

int my_func2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_func2(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:44
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 44, in my_func2\n", "my_func2() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:44
  }
  return 0;
}

RTValue MyClass::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
  return (None);
}

HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
}

int MyClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
    auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 25, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
    }
  }

  return 0;
}

int MyClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyClass__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 25, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:25
  }
  return 0;
}

Unicode MyClass::__repr__() {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0043\u006C\u0061\u0073\u0073", 7)));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:29
}

HERCULES_DLL Unicode MyClass__F___repr__(const MyClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
  return (self->__repr__());  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
}

int MyClass__F___repr____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__repr__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
    auto ret = MyClass__F___repr__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F___repr__(MyClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 28, in __repr__\n", "__repr__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:28
    }
  }

  return 0;
}

bool MyClass::__eq__(const RTView& other) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
  return ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:32
}

HERCULES_DLL bool MyClass__F___eq__(const MyClass_SharedView& self, const RTView& other) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
  return (self->__eq__(other));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
}

int MyClass__F___eq____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "other"};
    KwargsUnpackHelper helper("__eq__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
    auto ret = MyClass__F___eq__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass__F___eq__(MyClass_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_script.py\", line 31, in __eq__\n", "__eq__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_script.py:31
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass__F___init____c_api,
    (HerculesBackendPackedCFunc)MyClass__F___repr____c_api,
    (HerculesBackendPackedCFunc)MyClass__F___eq____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass = {
    "4\000MyClass__F___init___wrapper\000MyClass__F___init__\000MyClass__F___repr__\000MyClass__F___eq__\000",    __hercules_func_array__MyClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)my_func2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyClass__F___init___wrapper\000my_func2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000MyClass__F___init___wrapper\000my_func1\000my_func2\000MyClass__F___init__\000";

} // extern C
