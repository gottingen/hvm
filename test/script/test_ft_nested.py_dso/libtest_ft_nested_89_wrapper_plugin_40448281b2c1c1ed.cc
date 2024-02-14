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

MyClass_SharedView MyClass__F___init___wrapper(const FTList<int64_t>& l, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, const FTList<int64_t>& l, void* handle_2_71828182846=((void*)(int64_t)0));
int MyClass__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyClass__F_func(const MyClass_SharedView& self);
int MyClass__F_func__c_api(HerculesAny*, int, HerculesAny*, void*);
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
    static std::initializer_list<string_view> __var_names_s__ = {"l", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"l", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  FTList<int64_t> l;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return l; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->l = HERCULES_TYPE_AS(val, FTList<int64_t>); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const FTList<int64_t>& l, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t func();
};

// flags for convert check
uint32_t MyClass::tag_s_2_71828182846_ = 6861120890270453334;
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
MyClass_SharedView MyClass__F___init___wrapper(const FTList<int64_t>& l, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyClass)) {
    auto self = new MyClass;
    self->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self,  l,  handle_2_71828182846);
    UserDataRef self_ref(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, self, MyClass_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyClass::tag_s_2_71828182846_, MyClass::var_num_s_2_71828182846_, sizeof(MyClass), MyClass_F__placement_new__, MyClass_F__placement_del__, __hercules_module_ctx);
    MyClass_SharedView self_view((MyClass*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyClass::function_table_s_2_71828182846_;
    MyClass__F___init__(self_view,  l,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL int64_t wrapper(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:89
  MyClass_SharedView c = (MyClass__F___init___wrapper(Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:90
  return (c->func());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:91
}

int wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:89
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 89, in wrapper\n", "wrapper() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:89
  }
  return 0;
}

RTValue MyClass::__init__(const FTList<int64_t>& l, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
  this->l = std::move(l);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:81
  return (None);
}

HERCULES_DLL RTValue MyClass__F___init__(const MyClass_SharedView& self, const FTList<int64_t>& l, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
  return (self->__init__(l, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
}

int MyClass__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "l"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<FTList<int64_t>>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "expect 'pos_args[1]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyClass__F___init__(MyClass_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<FTList<int64_t>>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "expect 'args_t[1]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    }
  }

  return 0;
}

int MyClass__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"l"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    auto ret = MyClass__F___init___wrapper(internal::TypeAsHelper<FTList<int64_t>>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "expect 'pos_args[0]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F___init___wrapper(internal::TypeAsHelper<FTList<int64_t>>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "expect 'args_t[0]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 80, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:80
    }
  }

  return 0;
}

int64_t MyClass::func() {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
  int64_t ret = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:84
  {
    FTList<int64_t> const& __reserved_eval_cons_v10398_0 = this->l;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
    auto __reserved_iter_v27369_0 = __reserved_eval_cons_v10398_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
    auto __reserved_iter_end_v24634_0 = __reserved_eval_cons_v10398_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
    while ((__reserved_iter_v27369_0 != __reserved_iter_end_v24634_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
      int64_t v = *__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
      ++__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:85
      {
        ret = (ret + v);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:86
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:87
}

HERCULES_DLL int64_t MyClass__F_func(const MyClass_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
  return (self->func());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
}

int MyClass__F_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
    auto ret = MyClass__F_func(MyClass_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyClass__F_func(MyClass_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py\", line 83, in func\n", "func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_nested.py:83
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyClass[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyClass__F___init____c_api,
    (HerculesBackendPackedCFunc)MyClass__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyClass = {
    "3\000MyClass__F___init___wrapper\000MyClass__F___init__\000MyClass__F_func\000",    __hercules_func_array__MyClass,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyClass__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyClass__F___init___wrapper\000wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyClass__F___init___wrapper\000wrapper\000MyClass__F___init__\000";

} // extern C

