#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOutputTwoRes;
namespace {
// User class forward declarations
struct MyOutputTwoRes;
struct MyOutputTwoRes_SharedView;

MyOutputTwoRes_SharedView MyOutputTwoRes__F___init___wrapper(int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
int MyOutputTwoRes__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyOutputTwoRes__F___init__(const MyOutputTwoRes_SharedView& self, int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
int MyOutputTwoRes__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple MyOutputTwoRes__F___call__(const MyOutputTwoRes_SharedView& self, int64_t a);
int MyOutputTwoRes__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyOutputTwoRes : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyOutputTwoRes"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyOutputTwoRes::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"bias", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"bias", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t bias;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return bias; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->bias = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Tuple __call__(int64_t a);
};

// flags for convert check
uint32_t MyOutputTwoRes::tag_s_2_71828182846_ = -4756936813805447312;
uint32_t MyOutputTwoRes::var_num_s_2_71828182846_ = 1;
string_view MyOutputTwoRes::class_name_s_2_71828182846_ = "MyOutputTwoRes";
IUserDataRoot::__FunctionTable__ MyOutputTwoRes::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyOutputTwoRes, "MyOutputTwoRes");

struct MyOutputTwoRes_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyOutputTwoRes *ptr;
  // constructor
  MyOutputTwoRes_SharedView(MyOutputTwoRes *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyOutputTwoRes_SharedView(MyOutputTwoRes *ptr) : ptr(ptr) {}
  MyOutputTwoRes_SharedView() : ptr(nullptr) {}
  MyOutputTwoRes_SharedView(const hercules::runtime::Any& ref) : MyOutputTwoRes_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyOutputTwoRes")) {}
  // UserDataRef
  MyOutputTwoRes_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyOutputTwoRes"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyOutputTwoRes::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyOutputTwoRes' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyOutputTwoRes*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyOutputTwoRes* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyOutputTwoRes_F__deleter__(ILightUserData* ptr) { delete static_cast<MyOutputTwoRes*>(ptr); }
void* MyOutputTwoRes_F__placement_new__(void* buf) { return new (buf) MyOutputTwoRes; }
void MyOutputTwoRes_F__placement_del__(ILightUserData* ptr) { static_cast<MyOutputTwoRes*>(ptr)->MyOutputTwoRes::~MyOutputTwoRes(); }
MyOutputTwoRes_SharedView MyOutputTwoRes__F___init___wrapper(int64_t bias, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyOutputTwoRes)) {
    auto self = new MyOutputTwoRes;
    self->function_table_2_71828182846_ = &MyOutputTwoRes::function_table_s_2_71828182846_;
    MyOutputTwoRes__F___init__(self,  bias,  handle_2_71828182846);
    UserDataRef self_ref(MyOutputTwoRes::tag_s_2_71828182846_, MyOutputTwoRes::var_num_s_2_71828182846_, self, MyOutputTwoRes_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyOutputTwoRes::tag_s_2_71828182846_, MyOutputTwoRes::var_num_s_2_71828182846_, sizeof(MyOutputTwoRes), MyOutputTwoRes_F__placement_new__, MyOutputTwoRes_F__placement_del__, __hercules_module_ctx);
    MyOutputTwoRes_SharedView self_view((MyOutputTwoRes*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyOutputTwoRes::function_table_s_2_71828182846_;
    MyOutputTwoRes__F___init__(self_view,  bias,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyOutputTwoRes::__init__(int64_t bias, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
  this->bias = bias;  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:52
  return (None);
}

HERCULES_DLL RTValue MyOutputTwoRes__F___init__(const MyOutputTwoRes_SharedView& self, int64_t bias, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
  return (self->__init__(bias, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
}

int MyOutputTwoRes__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "bias"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    auto ret = MyOutputTwoRes__F___init__(MyOutputTwoRes_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyOutputTwoRes__F___init__(MyOutputTwoRes_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    }
  }

  return 0;
}

int MyOutputTwoRes__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"bias"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    auto ret = MyOutputTwoRes__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyOutputTwoRes__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 51, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:51
    }
  }

  return 0;
}

Tuple MyOutputTwoRes::__call__(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((a + this->bias)), ((a * this->bias))}));  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:55
}

HERCULES_DLL Tuple MyOutputTwoRes__F___call__(const MyOutputTwoRes_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
  return (self->__call__(a));  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
}

int MyOutputTwoRes__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
    auto ret = MyOutputTwoRes__F___call__(MyOutputTwoRes_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 54, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyOutputTwoRes__F___call__(MyOutputTwoRes_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 54, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py\", line 54, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_symbol_free.py:54
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyOutputTwoRes[] = {
    (HerculesBackendPackedCFunc)MyOutputTwoRes__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOutputTwoRes__F___init____c_api,
    (HerculesBackendPackedCFunc)MyOutputTwoRes__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOutputTwoRes = {
    "3\000MyOutputTwoRes__F___init___wrapper\000MyOutputTwoRes__F___init__\000MyOutputTwoRes__F___call__\000",    __hercules_func_array__MyOutputTwoRes,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyOutputTwoRes__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOutputTwoRes__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyOutputTwoRes__F___init___wrapper\000MyOutputTwoRes__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyOutputTwoRes__F___init___wrapper\000MyOutputTwoRes__F___init__\000";

} // extern C

