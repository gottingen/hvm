#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFoo;
namespace {
// User class forward declarations
struct MyFoo;
struct MyFoo_SharedView;

MyFoo_SharedView MyFoo__F___init___wrapper(int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFoo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t test_call1(void* handle_2_71828182846=((void*)(int64_t)0));
int test_call1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyFoo__F___init__(const MyFoo_SharedView& self, int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFoo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyFoo__F_foo(const MyFoo_SharedView& self, int64_t c, int64_t d);
int MyFoo__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyFoo : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyFoo"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyFoo::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"a", "b", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"a", 0}, 
      {"b", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t a;
  int64_t b;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return a; } break;
    case 1: { return b; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->a = HERCULES_TYPE_AS(val, int64_t); } break;
    case 1: { this->b = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t foo(int64_t c, int64_t d);
};

// flags for convert check
uint32_t MyFoo::tag_s_2_71828182846_ = 6500179524284145276;
uint32_t MyFoo::var_num_s_2_71828182846_ = 2;
string_view MyFoo::class_name_s_2_71828182846_ = "MyFoo";
IUserDataRoot::__FunctionTable__ MyFoo::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyFoo, "MyFoo");

struct MyFoo_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyFoo *ptr;
  // constructor
  MyFoo_SharedView(MyFoo *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyFoo_SharedView(MyFoo *ptr) : ptr(ptr) {}
  MyFoo_SharedView() : ptr(nullptr) {}
  MyFoo_SharedView(const hercules::runtime::Any& ref) : MyFoo_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyFoo")) {}
  // UserDataRef
  MyFoo_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyFoo"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyFoo::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyFoo' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyFoo*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyFoo* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyFoo_F__deleter__(ILightUserData* ptr) { delete static_cast<MyFoo*>(ptr); }
void* MyFoo_F__placement_new__(void* buf) { return new (buf) MyFoo; }
void MyFoo_F__placement_del__(ILightUserData* ptr) { static_cast<MyFoo*>(ptr)->MyFoo::~MyFoo(); }
MyFoo_SharedView MyFoo__F___init___wrapper(int64_t a, int64_t b, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyFoo)) {
    auto self = new MyFoo;
    self->function_table_2_71828182846_ = &MyFoo::function_table_s_2_71828182846_;
    MyFoo__F___init__(self,  a,  b,  handle_2_71828182846);
    UserDataRef self_ref(MyFoo::tag_s_2_71828182846_, MyFoo::var_num_s_2_71828182846_, self, MyFoo_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyFoo::tag_s_2_71828182846_, MyFoo::var_num_s_2_71828182846_, sizeof(MyFoo), MyFoo_F__placement_new__, MyFoo_F__placement_del__, __hercules_module_ctx);
    MyFoo_SharedView self_view((MyFoo*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyFoo::function_table_s_2_71828182846_;
    MyFoo__F___init__(self_view,  a,  b,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL int64_t test_call1(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:202
  return (MyFoo__F___init___wrapper((int64_t)3, (int64_t)1, handle_2_71828182846)->foo((int64_t)3, (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:203
}

int test_call1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_call1(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:202
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 202, in test_call1\n", "test_call1() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:202
  }
  return 0;
}

RTValue MyFoo::__init__(int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
  this->a = a;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:196
  this->b = b;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:197
  return (None);
}

HERCULES_DLL RTValue MyFoo__F___init__(const MyFoo_SharedView& self, int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
  return (self->__init__(a, b, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
}

int MyFoo__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "a", "b"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    auto ret = MyFoo__F___init__(MyFoo_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyFoo__F___init__(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    }
  }

  return 0;
}

int MyFoo__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    auto ret = MyFoo__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyFoo__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 195, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:195
    }
  }

  return 0;
}

int64_t MyFoo::foo(int64_t c, int64_t d) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
  return ((((this->a + this->b) + c) + d));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:200
}

HERCULES_DLL int64_t MyFoo__F_foo(const MyFoo_SharedView& self, int64_t c, int64_t d) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
  return (self->foo(c, d));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
}

int MyFoo__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "c", "d"};
    KwargsUnpackHelper helper("foo", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
    auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 199, in foo\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 199, in foo\n", "expect 'pos_args[2]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 199, in foo\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 199, in foo\n", "expect 'args_t[2]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 199, in foo\n", "foo() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:199
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyFoo[] = {
    (HerculesBackendPackedCFunc)MyFoo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyFoo__F___init____c_api,
    (HerculesBackendPackedCFunc)MyFoo__F_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFoo = {
    "3\000MyFoo__F___init___wrapper\000MyFoo__F___init__\000MyFoo__F_foo\000",    __hercules_func_array__MyFoo,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyFoo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)test_call1__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyFoo__F___init___wrapper\000test_call1\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyFoo__F___init___wrapper\000test_call1\000MyFoo__F___init__\000";

} // extern C

