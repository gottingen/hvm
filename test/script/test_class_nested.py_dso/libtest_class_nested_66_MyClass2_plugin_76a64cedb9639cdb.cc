#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass2;
namespace {
// User class forward declarations
struct MyClass2;
struct MyClass2_SharedView;

MyClass2_SharedView MyClass2__F___init___wrapper(const Dict& d, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass2__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass2__F___init__(const MyClass2_SharedView& self, const Dict& d, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass2__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyClass2__F___call__(const MyClass2_SharedView& self, int64_t i);
int MyClass2__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyClass2 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyClass2"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyClass2::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"d", "obj", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"d", 0}, 
      {"obj", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  Dict d{ObjectPtr<Object>{nullptr}};
  RTValue obj;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return d; } break;
    case 1: { return obj; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->d = HERCULES_TYPE_AS(val, Dict); } break;
    case 1: { this->obj = HERCULES_TYPE_AS(val, RTValue); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const Dict& d, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(int64_t i);
};

// flags for convert check
uint32_t MyClass2::tag_s_2_71828182846_ = 4402881428751631528;
uint32_t MyClass2::var_num_s_2_71828182846_ = 2;
string_view MyClass2::class_name_s_2_71828182846_ = "MyClass2";
IUserDataRoot::__FunctionTable__ MyClass2::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyClass2, "MyClass2");

struct MyClass2_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyClass2 *ptr;
  // constructor
  MyClass2_SharedView(MyClass2 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyClass2_SharedView(MyClass2 *ptr) : ptr(ptr) {}
  MyClass2_SharedView() : ptr(nullptr) {}
  MyClass2_SharedView(const hercules::runtime::Any& ref) : MyClass2_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyClass2")) {}
  // UserDataRef
  MyClass2_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyClass2"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyClass2::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyClass2' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyClass2*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyClass2* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyClass2_F__deleter__(ILightUserData* ptr) { delete static_cast<MyClass2*>(ptr); }
void* MyClass2_F__placement_new__(void* buf) { return new (buf) MyClass2; }
void MyClass2_F__placement_del__(ILightUserData* ptr) { static_cast<MyClass2*>(ptr)->MyClass2::~MyClass2(); }
MyClass2_SharedView MyClass2__F___init___wrapper(const Dict& d, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyClass2)) {
    auto self = new MyClass2;
    self->function_table_2_71828182846_ = &MyClass2::function_table_s_2_71828182846_;
    MyClass2__F___init__(self,  d,  handle_2_71828182846);
    UserDataRef self_ref(MyClass2::tag_s_2_71828182846_, MyClass2::var_num_s_2_71828182846_, self, MyClass2_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyClass2::tag_s_2_71828182846_, MyClass2::var_num_s_2_71828182846_, sizeof(MyClass2), MyClass2_F__placement_new__, MyClass2_F__placement_del__, __hercules_module_ctx);
    MyClass2_SharedView self_view((MyClass2*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyClass2::function_table_s_2_71828182846_;
    MyClass2__F___init__(self_view,  d,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyClass2::__init__(const Dict& d, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
  this->d = d;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:68
  this->obj = ((d).get_item((unicode_view(U"\u0063\u0031", 2))));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:69
  return (None);
}

HERCULES_DLL RTValue MyClass2__F___init__(const MyClass2_SharedView& self, const Dict& d, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
  return (self->__init__(d, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
}

int MyClass2__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "d"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    auto ret = MyClass2__F___init__(MyClass2_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<Dict>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "expect 'pos_args[1]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass2__F___init__(MyClass2_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<Dict>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "expect 'args_t[1]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    }
  }

  return 0;
}

int MyClass2__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"d"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    auto ret = MyClass2__F___init___wrapper(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "expect 'pos_args[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass2__F___init___wrapper(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "expect 'args_t[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 67, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:67
    }
  }

  return 0;
}

int64_t MyClass2::__call__(int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
  return (internal::TypeAsHelper<int64_t>::run((kernel_object___dispatch__(this->obj, "func", {(i)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 72, in __call__\n", "expect 'kernel_object___dispatch__(this->obj, \"func\", {(i)})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:72
}

HERCULES_DLL int64_t MyClass2__F___call__(const MyClass2_SharedView& self, int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
  return (self->__call__(i));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
}

int MyClass2__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "i"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
    auto ret = MyClass2__F___call__(MyClass2_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 71, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass2__F___call__(MyClass2_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 71, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 71, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:71
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass2[] = {
    (HerculesBackendPackedCFunc)MyClass2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass2__F___init____c_api,
    (HerculesBackendPackedCFunc)MyClass2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass2 = {
    "3\000MyClass2__F___init___wrapper\000MyClass2__F___init__\000MyClass2__F___call__\000",    __hercules_func_array__MyClass2,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyClass2__F___init___wrapper\000MyClass2__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyClass2__F___init___wrapper\000MyClass2__F___init__\000";

} // extern C

