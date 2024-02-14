#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass1;
namespace {
// User class forward declarations
struct MyClass1;
struct MyClass1_SharedView;

MyClass1_SharedView MyClass1__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass1__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass1__F___init__(const MyClass1_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass1__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyClass1__F_func(const MyClass1_SharedView& self, int64_t i);
int MyClass1__F_func__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyClass1 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyClass1"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyClass1::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"init", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"init", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t init;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return init; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->init = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t func(int64_t i);
};

// flags for convert check
uint32_t MyClass1::tag_s_2_71828182846_ = -2599871027842554882;
uint32_t MyClass1::var_num_s_2_71828182846_ = 1;
string_view MyClass1::class_name_s_2_71828182846_ = "MyClass1";
IUserDataRoot::__FunctionTable__ MyClass1::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyClass1, "MyClass1");

struct MyClass1_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyClass1 *ptr;
  // constructor
  MyClass1_SharedView(MyClass1 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyClass1_SharedView(MyClass1 *ptr) : ptr(ptr) {}
  MyClass1_SharedView() : ptr(nullptr) {}
  MyClass1_SharedView(const hercules::runtime::Any& ref) : MyClass1_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyClass1")) {}
  // UserDataRef
  MyClass1_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyClass1"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyClass1::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyClass1' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyClass1*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyClass1* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyClass1_F__deleter__(ILightUserData* ptr) { delete static_cast<MyClass1*>(ptr); }
void* MyClass1_F__placement_new__(void* buf) { return new (buf) MyClass1; }
void MyClass1_F__placement_del__(ILightUserData* ptr) { static_cast<MyClass1*>(ptr)->MyClass1::~MyClass1(); }
MyClass1_SharedView MyClass1__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyClass1)) {
    auto self = new MyClass1;
    self->function_table_2_71828182846_ = &MyClass1::function_table_s_2_71828182846_;
    MyClass1__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyClass1::tag_s_2_71828182846_, MyClass1::var_num_s_2_71828182846_, self, MyClass1_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyClass1::tag_s_2_71828182846_, MyClass1::var_num_s_2_71828182846_, sizeof(MyClass1), MyClass1_F__placement_new__, MyClass1_F__placement_del__, __hercules_module_ctx);
    MyClass1_SharedView self_view((MyClass1*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyClass1::function_table_s_2_71828182846_;
    MyClass1__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyClass1::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
  this->init = (int64_t)1;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:60
  return (None);
}

HERCULES_DLL RTValue MyClass1__F___init__(const MyClass1_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
}

int MyClass1__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
    auto ret = MyClass1__F___init__(MyClass1_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass1__F___init__(MyClass1_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 59, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
    }
  }

  return 0;
}

int MyClass1__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyClass1__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 59, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:59
  }
  return 0;
}

int64_t MyClass1::func(int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
  return ((i + this->init));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:63
}

HERCULES_DLL int64_t MyClass1__F_func(const MyClass1_SharedView& self, int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
  return (self->func(i));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
}

int MyClass1__F_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "i"};
    KwargsUnpackHelper helper("func", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
    auto ret = MyClass1__F_func(MyClass1_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 62, in func\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass1__F_func(MyClass1_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 62, in func\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 62, in func\n", "func() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:62
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass1[] = {
    (HerculesBackendPackedCFunc)MyClass1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass1__F___init____c_api,
    (HerculesBackendPackedCFunc)MyClass1__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass1 = {
    "3\000MyClass1__F___init___wrapper\000MyClass1__F___init__\000MyClass1__F_func\000",    __hercules_func_array__MyClass1,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass1__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyClass1__F___init___wrapper\000MyClass1__F_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyClass1__F___init___wrapper\000MyClass1__F___init__\000";

} // extern C

