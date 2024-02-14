#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFunctor;
namespace {
// User class forward declarations
struct MyFunctor;
struct MyFunctor_SharedView;

MyFunctor_SharedView MyFunctor__F___init___wrapper(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFunctor__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyFunctor__F___init__(const MyFunctor_SharedView& self, int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFunctor__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyFunctor__F_get_a(const MyFunctor_SharedView& self);
int MyFunctor__F_get_a__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyFunctor__F___call__(const MyFunctor_SharedView& self);
int MyFunctor__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyFunctor : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyFunctor"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyFunctor::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"_a", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"_a", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t _a;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return _a; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->_a = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t get_a();
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyFunctor::tag_s_2_71828182846_ = -6772609083837355729;
uint32_t MyFunctor::var_num_s_2_71828182846_ = 1;
string_view MyFunctor::class_name_s_2_71828182846_ = "MyFunctor";
IUserDataRoot::__FunctionTable__ MyFunctor::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyFunctor, "MyFunctor");

struct MyFunctor_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyFunctor *ptr;
  // constructor
  MyFunctor_SharedView(MyFunctor *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyFunctor_SharedView(MyFunctor *ptr) : ptr(ptr) {}
  MyFunctor_SharedView() : ptr(nullptr) {}
  MyFunctor_SharedView(const hercules::runtime::Any& ref) : MyFunctor_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyFunctor")) {}
  // UserDataRef
  MyFunctor_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyFunctor"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyFunctor::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyFunctor' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyFunctor*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyFunctor* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyFunctor_F__deleter__(ILightUserData* ptr) { delete static_cast<MyFunctor*>(ptr); }
void* MyFunctor_F__placement_new__(void* buf) { return new (buf) MyFunctor; }
void MyFunctor_F__placement_del__(ILightUserData* ptr) { static_cast<MyFunctor*>(ptr)->MyFunctor::~MyFunctor(); }
MyFunctor_SharedView MyFunctor__F___init___wrapper(int64_t a, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyFunctor)) {
    auto self = new MyFunctor;
    self->function_table_2_71828182846_ = &MyFunctor::function_table_s_2_71828182846_;
    MyFunctor__F___init__(self,  a,  handle_2_71828182846);
    UserDataRef self_ref(MyFunctor::tag_s_2_71828182846_, MyFunctor::var_num_s_2_71828182846_, self, MyFunctor_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyFunctor::tag_s_2_71828182846_, MyFunctor::var_num_s_2_71828182846_, sizeof(MyFunctor), MyFunctor_F__placement_new__, MyFunctor_F__placement_del__, __hercules_module_ctx);
    MyFunctor_SharedView self_view((MyFunctor*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyFunctor::function_table_s_2_71828182846_;
    MyFunctor__F___init__(self_view,  a,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyFunctor::__init__(int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
  this->_a = a;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:37
  return (None);
}

HERCULES_DLL RTValue MyFunctor__F___init__(const MyFunctor_SharedView& self, int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
  return (self->__init__(a, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
}

int MyFunctor__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    auto ret = MyFunctor__F___init__(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyFunctor__F___init__(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    }
  }

  return 0;
}

int MyFunctor__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    auto ret = MyFunctor__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyFunctor__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 36, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:36
    }
  }

  return 0;
}

int64_t MyFunctor::get_a() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
  return (this->_a);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:40
}

HERCULES_DLL int64_t MyFunctor__F_get_a(const MyFunctor_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
  return (self->get_a());  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
}

int MyFunctor__F_get_a__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("get_a", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
    auto ret = MyFunctor__F_get_a(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyFunctor__F_get_a(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 39, in get_a\n", "get_a() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:39
    }
  }

  return 0;
}

int64_t MyFunctor::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
  return (this->_a);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:43
}

HERCULES_DLL int64_t MyFunctor__F___call__(const MyFunctor_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
}

int MyFunctor__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
    auto ret = MyFunctor__F___call__(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyFunctor__F___call__(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 42, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:42
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyFunctor[] = {
    (HerculesBackendPackedCFunc)MyFunctor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___init____c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F_get_a__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFunctor = {
    "4\000MyFunctor__F___init___wrapper\000MyFunctor__F___init__\000MyFunctor__F_get_a\000MyFunctor__F___call__\000",    __hercules_func_array__MyFunctor,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyFunctor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F_get_a__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyFunctor__F___init___wrapper\000MyFunctor__F_get_a\000MyFunctor__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyFunctor__F___init___wrapper\000MyFunctor__F___init__\000";

} // extern C

