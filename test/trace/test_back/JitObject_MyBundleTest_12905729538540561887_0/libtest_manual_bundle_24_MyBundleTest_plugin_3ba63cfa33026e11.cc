#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBundleTest;
namespace {
// User class forward declarations
struct MyBundleTest;
struct MyBundleTest_SharedView;

MyBundleTest_SharedView MyBundleTest__F___init___wrapper(const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBundleTest__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBundleTest__F___init__(const MyBundleTest_SharedView& self, const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBundleTest__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBundleTest__F___call__(const MyBundleTest_SharedView& self);
int MyBundleTest__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyBundleTest : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyBundleTest"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyBundleTest::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"loc", "norm_type", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"loc", 0}, 
      {"norm_type", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode loc;
  Unicode norm_type;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return loc; } break;
    case 1: { return norm_type; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->loc = HERCULES_TYPE_AS(val, Unicode); } break;
    case 1: { this->norm_type = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual RTValue __call__();
};

// flags for convert check
uint32_t MyBundleTest::tag_s_2_71828182846_ = -1864963334770023172;
uint32_t MyBundleTest::var_num_s_2_71828182846_ = 2;
string_view MyBundleTest::class_name_s_2_71828182846_ = "MyBundleTest";
IUserDataRoot::__FunctionTable__ MyBundleTest::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyBundleTest, "MyBundleTest");

struct MyBundleTest_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyBundleTest *ptr;
  // constructor
  MyBundleTest_SharedView(MyBundleTest *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyBundleTest_SharedView(MyBundleTest *ptr) : ptr(ptr) {}
  MyBundleTest_SharedView() : ptr(nullptr) {}
  MyBundleTest_SharedView(const hercules::runtime::Any& ref) : MyBundleTest_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyBundleTest")) {}
  // UserDataRef
  MyBundleTest_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyBundleTest"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyBundleTest::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyBundleTest' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyBundleTest*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyBundleTest* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyBundleTest_F__deleter__(ILightUserData* ptr) { delete static_cast<MyBundleTest*>(ptr); }
void* MyBundleTest_F__placement_new__(void* buf) { return new (buf) MyBundleTest; }
void MyBundleTest_F__placement_del__(ILightUserData* ptr) { static_cast<MyBundleTest*>(ptr)->MyBundleTest::~MyBundleTest(); }
MyBundleTest_SharedView MyBundleTest__F___init___wrapper(const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyBundleTest)) {
    auto self = new MyBundleTest;
    self->function_table_2_71828182846_ = &MyBundleTest::function_table_s_2_71828182846_;
    MyBundleTest__F___init__(self,  loc,  norm_type,  handle_2_71828182846);
    UserDataRef self_ref(MyBundleTest::tag_s_2_71828182846_, MyBundleTest::var_num_s_2_71828182846_, self, MyBundleTest_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyBundleTest::tag_s_2_71828182846_, MyBundleTest::var_num_s_2_71828182846_, sizeof(MyBundleTest), MyBundleTest_F__placement_new__, MyBundleTest_F__placement_del__, __hercules_module_ctx);
    MyBundleTest_SharedView self_view((MyBundleTest*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyBundleTest::function_table_s_2_71828182846_;
    MyBundleTest__F___init__(self_view,  loc,  norm_type,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyBundleTest::__init__(const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
  this->loc = GenericValueConverter<Unicode>{}(loc);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:27
  this->norm_type = GenericValueConverter<Unicode>{}(norm_type);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:28
  return (None);
}

HERCULES_DLL RTValue MyBundleTest__F___init__(const MyBundleTest_SharedView& self, const unicode_view& loc, const unicode_view& norm_type, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
  return (self->__init__(loc, norm_type, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
}

int MyBundleTest__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "loc", "norm_type"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    auto ret = MyBundleTest__F___init__(MyBundleTest_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'pos_args[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyBundleTest__F___init__(MyBundleTest_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'args_t[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    }
  }

  return 0;
}

int MyBundleTest__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"loc", "norm_type"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    auto ret = MyBundleTest__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyBundleTest__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 26, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:26
    }
  }

  return 0;
}

RTValue MyBundleTest::__call__() {  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
  return (RTValue((int64_t)0));  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:31
}

HERCULES_DLL RTValue MyBundleTest__F___call__(const MyBundleTest_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
}

int MyBundleTest__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
    auto ret = MyBundleTest__F___call__(MyBundleTest_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBundleTest__F___call__(MyBundleTest_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py\", line 30, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_manual_bundle.py:30
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyBundleTest[] = {
    (HerculesBackendPackedCFunc)MyBundleTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyBundleTest__F___init____c_api,
    (HerculesBackendPackedCFunc)MyBundleTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBundleTest = {
    "3\000MyBundleTest__F___init___wrapper\000MyBundleTest__F___init__\000MyBundleTest__F___call__\000",    __hercules_func_array__MyBundleTest,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyBundleTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyBundleTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyBundleTest__F___init___wrapper\000MyBundleTest__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyBundleTest__F___init___wrapper\000MyBundleTest__F___init__\000";

} // extern C

