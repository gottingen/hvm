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

MyFoo_SharedView MyFoo__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyFoo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_call_methods(void* handle_2_71828182846=((void*)(int64_t)0));
int test_call_methods__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyFoo__F___init__(const MyFoo_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFoo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyFoo__F_foo(const MyFoo_SharedView& self, int64_t x, int64_t a=(int64_t)5, int64_t b=(int64_t)6);
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
    static std::initializer_list<string_view> __var_names_s__ = {};
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t foo(int64_t x, int64_t a=(int64_t)5, int64_t b=(int64_t)6);
};

// flags for convert check
uint32_t MyFoo::tag_s_2_71828182846_ = 5654099914212768090;
uint32_t MyFoo::var_num_s_2_71828182846_ = 0;
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
MyFoo_SharedView MyFoo__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyFoo)) {
    auto self = new MyFoo;
    self->function_table_2_71828182846_ = &MyFoo::function_table_s_2_71828182846_;
    MyFoo__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyFoo::tag_s_2_71828182846_, MyFoo::var_num_s_2_71828182846_, self, MyFoo_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyFoo::tag_s_2_71828182846_, MyFoo::var_num_s_2_71828182846_, sizeof(MyFoo), MyFoo_F__placement_new__, MyFoo_F__placement_del__, __hercules_module_ctx);
    MyFoo_SharedView self_view((MyFoo*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyFoo::function_table_s_2_71828182846_;
    MyFoo__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue test_call_methods(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:163
  List result = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:164
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5, (int64_t)6))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:166
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5, (int64_t)6))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:167
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5, (int64_t)6))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:168
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5, (int64_t)6))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:169
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:175
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:176
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:179
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:180
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1, (int64_t)5))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:181
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:184
  (void)(result).append((RTValue(MyFoo__F___init___wrapper(handle_2_71828182846)->foo((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:185
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:187
}

int test_call_methods__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_call_methods(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:163
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 163, in test_call_methods\n", "test_call_methods() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:163
  }
  return 0;
}

RTValue MyFoo::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
  return (None);
}

HERCULES_DLL RTValue MyFoo__F___init__(const MyFoo_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
}

int MyFoo__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
    auto ret = MyFoo__F___init__(MyFoo_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyFoo__F___init__(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 127, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
    }
  }

  return 0;
}

int MyFoo__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyFoo__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 127, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:127
  }
  return 0;
}

int64_t MyFoo::foo(int64_t x, int64_t a, int64_t b) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
  return (((x + a) + b));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:131
}

HERCULES_DLL int64_t MyFoo__F_foo(const MyFoo_SharedView& self, int64_t x, int64_t a, int64_t b) {  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
  return (self->foo(x, a, b));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
}

int MyFoo__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"self", "x", "a", "b"};
    static RTValue default_args[2]{RTValue((int64_t)5), RTValue((int64_t)6)};
    KwargsUnpackHelper helper("foo", arg_names, 4, default_args, 2);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
    auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'pos_args[3]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[1]' is 'int64_t' type"), (int64_t)5, (int64_t)6);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 3: {
        auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[2]' is 'int64_t' type"), (int64_t)6);  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 4: {
        auto ret = MyFoo__F_foo(MyFoo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "expect 'args_t[3]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py\", line 130, in foo\n", "foo() takes from 2 to 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_keyword_args.py:130
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
    (HerculesBackendPackedCFunc)test_call_methods__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyFoo__F___init___wrapper\000test_call_methods\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyFoo__F___init___wrapper\000test_call_methods\000MyFoo__F___init__\000";

} // extern C

