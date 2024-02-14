#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyEchoOp2;
namespace {
// User class forward declarations
struct MyEchoOp2;
struct MyEchoOp2_SharedView;

MyEchoOp2_SharedView MyEchoOp2__F___init___wrapper(const unicode_view& file_path, void* handle_2_71828182846=((void*)(int64_t)0));
int MyEchoOp2__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyEchoOp2__F___init__(const MyEchoOp2_SharedView& self, const unicode_view& file_path, void* handle_2_71828182846=((void*)(int64_t)0));
int MyEchoOp2__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MyEchoOp2__F___call__(const MyEchoOp2_SharedView& self);
int MyEchoOp2__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyEchoOp2 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyEchoOp2"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyEchoOp2::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"c_data", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"c_data", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  UserDataRef c_data;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return c_data; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->c_data = HERCULES_TYPE_AS(val, UserDataRef); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const unicode_view& file_path, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List __call__();
};

// flags for convert check
uint32_t MyEchoOp2::tag_s_2_71828182846_ = -3929646159234772223;
uint32_t MyEchoOp2::var_num_s_2_71828182846_ = 1;
string_view MyEchoOp2::class_name_s_2_71828182846_ = "MyEchoOp2";
IUserDataRoot::__FunctionTable__ MyEchoOp2::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyEchoOp2, "MyEchoOp2");

struct MyEchoOp2_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyEchoOp2 *ptr;
  // constructor
  MyEchoOp2_SharedView(MyEchoOp2 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyEchoOp2_SharedView(MyEchoOp2 *ptr) : ptr(ptr) {}
  MyEchoOp2_SharedView() : ptr(nullptr) {}
  MyEchoOp2_SharedView(const hercules::runtime::Any& ref) : MyEchoOp2_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyEchoOp2")) {}
  // UserDataRef
  MyEchoOp2_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyEchoOp2"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyEchoOp2::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyEchoOp2' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyEchoOp2*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyEchoOp2* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyEchoOp2_F__deleter__(ILightUserData* ptr) { delete static_cast<MyEchoOp2*>(ptr); }
void* MyEchoOp2_F__placement_new__(void* buf) { return new (buf) MyEchoOp2; }
void MyEchoOp2_F__placement_del__(ILightUserData* ptr) { static_cast<MyEchoOp2*>(ptr)->MyEchoOp2::~MyEchoOp2(); }
MyEchoOp2_SharedView MyEchoOp2__F___init___wrapper(const unicode_view& file_path, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyEchoOp2)) {
    auto self = new MyEchoOp2;
    self->function_table_2_71828182846_ = &MyEchoOp2::function_table_s_2_71828182846_;
    MyEchoOp2__F___init__(self,  file_path,  handle_2_71828182846);
    UserDataRef self_ref(MyEchoOp2::tag_s_2_71828182846_, MyEchoOp2::var_num_s_2_71828182846_, self, MyEchoOp2_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyEchoOp2::tag_s_2_71828182846_, MyEchoOp2::var_num_s_2_71828182846_, sizeof(MyEchoOp2), MyEchoOp2_F__placement_new__, MyEchoOp2_F__placement_del__, __hercules_module_ctx);
    MyEchoOp2_SharedView self_view((MyEchoOp2*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyEchoOp2::function_table_s_2_71828182846_;
    MyEchoOp2__F___init__(self_view,  file_path,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyEchoOp2::__init__(const unicode_view& file_path, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
  this->c_data = make_native_userdata(string_view("MyNativeDataExample", 19), file_path);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:43
  return (None);
}

HERCULES_DLL RTValue MyEchoOp2__F___init__(const MyEchoOp2_SharedView& self, const unicode_view& file_path, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
  return (self->__init__(file_path, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
}

int MyEchoOp2__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "file_path"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    auto ret = MyEchoOp2__F___init__(MyEchoOp2_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyEchoOp2__F___init__(MyEchoOp2_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    }
  }

  return 0;
}

int MyEchoOp2__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"file_path"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    auto ret = MyEchoOp2__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyEchoOp2__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 42, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:42
    }
  }

  return 0;
}

List MyEchoOp2::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
  return (internal::TypeAsHelper<List>::run(((this->c_data).generic_call_attr("get_content", {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 46, in __call__\n", "expect '(this->c_data).generic_call_attr(\"get_content\", {})' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:46
}

HERCULES_DLL List MyEchoOp2__F___call__(const MyEchoOp2_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
}

int MyEchoOp2__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
    auto ret = MyEchoOp2__F___call__(MyEchoOp2_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyEchoOp2__F___call__(MyEchoOp2_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 45, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:45
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyEchoOp2[] = {
    (HerculesBackendPackedCFunc)MyEchoOp2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyEchoOp2__F___init____c_api,
    (HerculesBackendPackedCFunc)MyEchoOp2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyEchoOp2 = {
    "3\000MyEchoOp2__F___init___wrapper\000MyEchoOp2__F___init__\000MyEchoOp2__F___call__\000",    __hercules_func_array__MyEchoOp2,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyEchoOp2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyEchoOp2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyEchoOp2__F___init___wrapper\000MyEchoOp2__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyEchoOp2__F___init___wrapper\000MyEchoOp2__F___init__\000";

} // extern C

