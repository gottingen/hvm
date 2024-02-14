#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__myTest;
namespace {
// User class forward declarations
struct myTest;
struct myTest_SharedView;

myTest_SharedView myTest__F___init___wrapper(int64_t value, void* handle_2_71828182846=((void*)(int64_t)0));
int myTest__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue myTest__F___init__(const myTest_SharedView& self, int64_t value, void* handle_2_71828182846=((void*)(int64_t)0));
int myTest__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode myTest__F___str__(const myTest_SharedView& self);
int myTest__F___str____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode myTest__F___repr__(const myTest_SharedView& self);
int myTest__F___repr____c_api(HerculesAny*, int, HerculesAny*, void*);
struct myTest : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "myTest"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {myTest::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"value", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"value", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t value;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return value; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->value = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t value, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode __str__();
  virtual Unicode __repr__();
};

// flags for convert check
uint32_t myTest::tag_s_2_71828182846_ = -8939722286025266974;
uint32_t myTest::var_num_s_2_71828182846_ = 1;
string_view myTest::class_name_s_2_71828182846_ = "myTest";
IUserDataRoot::__FunctionTable__ myTest::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__myTest, "myTest");

struct myTest_SharedView: public IUserDataSharedViewRoot {
  // member var
  myTest *ptr;
  // constructor
  myTest_SharedView(myTest *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  myTest_SharedView(myTest *ptr) : ptr(ptr) {}
  myTest_SharedView() : ptr(nullptr) {}
  myTest_SharedView(const hercules::runtime::Any& ref) : myTest_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "myTest")) {}
  // UserDataRef
  myTest_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("myTest"));
    if(!base_ud_ptr->isinstance_2_71828182846(myTest::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'myTest' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<myTest*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  myTest* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void myTest_F__deleter__(ILightUserData* ptr) { delete static_cast<myTest*>(ptr); }
void* myTest_F__placement_new__(void* buf) { return new (buf) myTest; }
void myTest_F__placement_del__(ILightUserData* ptr) { static_cast<myTest*>(ptr)->myTest::~myTest(); }
myTest_SharedView myTest__F___init___wrapper(int64_t value, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(myTest)) {
    auto self = new myTest;
    self->function_table_2_71828182846_ = &myTest::function_table_s_2_71828182846_;
    myTest__F___init__(self,  value,  handle_2_71828182846);
    UserDataRef self_ref(myTest::tag_s_2_71828182846_, myTest::var_num_s_2_71828182846_, self, myTest_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(myTest::tag_s_2_71828182846_, myTest::var_num_s_2_71828182846_, sizeof(myTest), myTest_F__placement_new__, myTest_F__placement_del__, __hercules_module_ctx);
    myTest_SharedView self_view((myTest*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &myTest::function_table_s_2_71828182846_;
    myTest__F___init__(self_view,  value,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue myTest::__init__(int64_t value, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
  this->value = value;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:74
  return (None);
}

HERCULES_DLL RTValue myTest__F___init__(const myTest_SharedView& self, int64_t value, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
  return (self->__init__(value, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
}

int myTest__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "value"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    auto ret = myTest__F___init__(myTest_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = myTest__F___init__(myTest_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    }
  }

  return 0;
}

int myTest__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"value"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    auto ret = myTest__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = myTest__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 73, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:73
    }
  }

  return 0;
}

Unicode myTest::__str__() {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
  return (ArithOps::add(unicode_view(U"\u0073\u0065\u006C\u0066\u002E\u0076\u0061\u006C\u0075\u0065\u0020\u003D\u0020", 13), Kernel_Unicode::make((this->value))));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:77
}

HERCULES_DLL Unicode myTest__F___str__(const myTest_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
  return (self->__str__());  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
}

int myTest__F___str____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__str__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
    auto ret = myTest__F___str__(myTest_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = myTest__F___str__(myTest_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 76, in __str__\n", "__str__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:76
    }
  }

  return 0;
}

Unicode myTest::__repr__() {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0077\u0072\u006F\u006E\u0067", 5)));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:80
}

HERCULES_DLL Unicode myTest__F___repr__(const myTest_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
  return (self->__repr__());  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
}

int myTest__F___repr____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__repr__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
    auto ret = myTest__F___repr__(myTest_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = myTest__F___repr__(myTest_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 79, in __repr__\n", "__repr__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:79
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__myTest[] = {
    (HerculesBackendPackedCFunc)myTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)myTest__F___init____c_api,
    (HerculesBackendPackedCFunc)myTest__F___str____c_api,
    (HerculesBackendPackedCFunc)myTest__F___repr____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__myTest = {
    "4\000myTest__F___init___wrapper\000myTest__F___init__\000myTest__F___str__\000myTest__F___repr__\000",    __hercules_func_array__myTest,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)myTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)myTest__F___str____c_api,
    (HerculesBackendPackedCFunc)myTest__F___repr____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000myTest__F___init___wrapper\000myTest__F___str__\000myTest__F___repr__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000myTest__F___init___wrapper\000myTest__F___init__\000";

} // extern C

