#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyMod;
namespace {
// User class forward declarations
struct MyMod;
struct MyMod_SharedView;

MyMod_SharedView MyMod__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyMod__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue call_external_module_attr(void* handle_2_71828182846=((void*)(int64_t)0));
int call_external_module_attr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyMod__F___init__(const MyMod_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyMod__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyMod__F_foo(const MyMod_SharedView& self);
int MyMod__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyMod : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyMod"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyMod::tag_s_2_71828182846_};
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
  virtual int64_t foo();
};

// flags for convert check
uint32_t MyMod::tag_s_2_71828182846_ = -1573338046872688689;
uint32_t MyMod::var_num_s_2_71828182846_ = 1;
string_view MyMod::class_name_s_2_71828182846_ = "MyMod";
IUserDataRoot::__FunctionTable__ MyMod::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyMod, "MyMod");

struct MyMod_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyMod *ptr;
  // constructor
  MyMod_SharedView(MyMod *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyMod_SharedView(MyMod *ptr) : ptr(ptr) {}
  MyMod_SharedView() : ptr(nullptr) {}
  MyMod_SharedView(const hercules::runtime::Any& ref) : MyMod_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyMod")) {}
  // UserDataRef
  MyMod_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyMod"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyMod::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyMod' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyMod*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyMod* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyMod_F__deleter__(ILightUserData* ptr) { delete static_cast<MyMod*>(ptr); }
void* MyMod_F__placement_new__(void* buf) { return new (buf) MyMod; }
void MyMod_F__placement_del__(ILightUserData* ptr) { static_cast<MyMod*>(ptr)->MyMod::~MyMod(); }
MyMod_SharedView MyMod__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyMod)) {
    auto self = new MyMod;
    self->function_table_2_71828182846_ = &MyMod::function_table_s_2_71828182846_;
    MyMod__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyMod::tag_s_2_71828182846_, MyMod::var_num_s_2_71828182846_, self, MyMod_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyMod::tag_s_2_71828182846_, MyMod::var_num_s_2_71828182846_, sizeof(MyMod), MyMod_F__placement_new__, MyMod_F__placement_del__, __hercules_module_ctx);
    MyMod_SharedView self_view((MyMod*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyMod::function_table_s_2_71828182846_;
    MyMod__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue call_external_module_attr(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:68
  MyMod_SharedView a = (MyMod__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:69
  return (RTValue(a->foo()));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:70
}

int call_external_module_attr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = call_external_module_attr(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:68
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py\", line 68, in call_external_module_attr\n", "call_external_module_attr() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:68
  }
  return 0;
}

RTValue MyMod::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
  this->a = (int64_t)0;  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:23
  return (None);
}

HERCULES_DLL RTValue MyMod__F___init__(const MyMod_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
}

int MyMod__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
    auto ret = MyMod__F___init__(MyMod_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyMod__F___init__(MyMod_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py\", line 21, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
    }
  }

  return 0;
}

int MyMod__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyMod__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py\", line 21, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:21
  }
  return 0;
}

int64_t MyMod::foo() {  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
  return (this->a);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:26
}

HERCULES_DLL int64_t MyMod__F_foo(const MyMod_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
}

int MyMod__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
    auto ret = MyMod__F_foo(MyMod_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyMod__F_foo(MyMod_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py\", line 25, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/external_module/my_class.py:25
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyMod[] = {
    (HerculesBackendPackedCFunc)MyMod__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyMod__F___init____c_api,
    (HerculesBackendPackedCFunc)MyMod__F_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyMod = {
    "3\000MyMod__F___init___wrapper\000MyMod__F___init__\000MyMod__F_foo\000",    __hercules_func_array__MyMod,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyMod__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)call_external_module_attr__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyMod__F___init___wrapper\000call_external_module_attr\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyMod__F___init___wrapper\000call_external_module_attr\000MyMod__F___init__\000";

} // extern C

