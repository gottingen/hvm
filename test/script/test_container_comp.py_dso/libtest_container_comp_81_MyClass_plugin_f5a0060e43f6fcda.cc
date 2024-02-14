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
HERCULES_DLL int64_t func1(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int func1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MyClass__F_my_foo(const MyClass_SharedView& self);
int MyClass__F_my_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
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
    static std::initializer_list<string_view> __var_names_s__ = {"a", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"a", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t a;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return a; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->a = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List my_foo();
};

// flags for convert check
uint32_t MyClass::tag_s_2_71828182846_ = -6217301937759993222;
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

HERCULES_DLL int64_t func1(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
  return ((i + (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:76
}

int func1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("func1", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    auto ret = func1(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = func1(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 75, in func1\n", "func1() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:75
    }
  }

  return 0;
}

RTValue MyClass::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
  this->a = (int64_t)1;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:84
  return (None);
}

HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
}

int MyClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
    auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 83, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
    }
  }

  return 0;
}

int MyClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyClass__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 83, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:83
  }
  return 0;
}

List MyClass::my_foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
  return ([this]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
    (void)(__reserved_list_comp_result).reserve(((int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
    for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)1; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
      int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
      (void)(__reserved_list_comp_result).append((RTValue(func1(this->a, this->session_handle_2_71828182846_))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
  }());  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:87
}

HERCULES_DLL List MyClass__F_my_foo(const MyClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
  return (self->my_foo());  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
}

int MyClass__F_my_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("my_foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
    auto ret = MyClass__F_my_foo(MyClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F_my_foo(MyClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_comp.py\", line 86, in my_foo\n", "my_foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_comp.py:86
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass__F___init____c_api,
    (HerculesBackendPackedCFunc)MyClass__F_my_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass = {
    "3\000MyClass__F___init___wrapper\000MyClass__F___init__\000MyClass__F_my_foo\000",    __hercules_func_array__MyClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass__F_my_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyClass__F___init___wrapper\000MyClass__F_my_foo\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyClass__F___init___wrapper\000func1\000MyClass__F___init__\000";

} // extern C

