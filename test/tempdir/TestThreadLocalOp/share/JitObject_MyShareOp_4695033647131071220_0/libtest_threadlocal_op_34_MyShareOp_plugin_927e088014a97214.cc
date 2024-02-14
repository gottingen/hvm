#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyShareOp;
namespace {
// User class forward declarations
struct MyShareOp;
struct MyShareOp_SharedView;

MyShareOp_SharedView MyShareOp__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyShareOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyShareOp__F___init__(const MyShareOp_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyShareOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyShareOp__F___call__(const MyShareOp_SharedView& self);
int MyShareOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyShareOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyShareOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyShareOp::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"create_time", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"create_time", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t create_time;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return create_time; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->create_time = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyShareOp::tag_s_2_71828182846_ = -6202474843868198240;
uint32_t MyShareOp::var_num_s_2_71828182846_ = 1;
string_view MyShareOp::class_name_s_2_71828182846_ = "MyShareOp";
IUserDataRoot::__FunctionTable__ MyShareOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyShareOp, "MyShareOp");

struct MyShareOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyShareOp *ptr;
  // constructor
  MyShareOp_SharedView(MyShareOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyShareOp_SharedView(MyShareOp *ptr) : ptr(ptr) {}
  MyShareOp_SharedView() : ptr(nullptr) {}
  MyShareOp_SharedView(const hercules::runtime::Any& ref) : MyShareOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyShareOp")) {}
  // UserDataRef
  MyShareOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyShareOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyShareOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyShareOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyShareOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyShareOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyShareOp_F__deleter__(ILightUserData* ptr) { delete static_cast<MyShareOp*>(ptr); }
void* MyShareOp_F__placement_new__(void* buf) { return new (buf) MyShareOp; }
void MyShareOp_F__placement_del__(ILightUserData* ptr) { static_cast<MyShareOp*>(ptr)->MyShareOp::~MyShareOp(); }
MyShareOp_SharedView MyShareOp__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyShareOp)) {
    auto self = new MyShareOp;
    self->function_table_2_71828182846_ = &MyShareOp::function_table_s_2_71828182846_;
    MyShareOp__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyShareOp::tag_s_2_71828182846_, MyShareOp::var_num_s_2_71828182846_, self, MyShareOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyShareOp::tag_s_2_71828182846_, MyShareOp::var_num_s_2_71828182846_, sizeof(MyShareOp), MyShareOp_F__placement_new__, MyShareOp_F__placement_del__, __hercules_module_ctx);
    MyShareOp_SharedView self_view((MyShareOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyShareOp::function_table_s_2_71828182846_;
    MyShareOp__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyShareOp::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
  this->create_time = Kernel_int64_t::make(((kernel_time_time() * 1.0000000000000000000e+09)));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:37
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0063\u0061\u006C\u006C\u0020\u004D\u0079\u0053\u0068\u0061\u0072\u0065\u004F\u0070\u002E\u005F\u005F\u0069\u006E\u0069\u0074\u005F\u005F", 23), this->create_time);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:38
  return (None);
}

HERCULES_DLL RTValue MyShareOp__F___init__(const MyShareOp_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
}

int MyShareOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
    auto ret = MyShareOp__F___init__(MyShareOp_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyShareOp__F___init__(MyShareOp_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 36, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
    }
  }

  return 0;
}

int MyShareOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyShareOp__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 36, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:36
  }
  return 0;
}

int64_t MyShareOp::__call__() {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
  return (this->create_time);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:41
}

HERCULES_DLL int64_t MyShareOp__F___call__(const MyShareOp_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
}

int MyShareOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
    auto ret = MyShareOp__F___call__(MyShareOp_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyShareOp__F___call__(MyShareOp_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 40, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:40
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyShareOp[] = {
    (HerculesBackendPackedCFunc)MyShareOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyShareOp__F___init____c_api,
    (HerculesBackendPackedCFunc)MyShareOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyShareOp = {
    "3\000MyShareOp__F___init___wrapper\000MyShareOp__F___init__\000MyShareOp__F___call__\000",    __hercules_func_array__MyShareOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyShareOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyShareOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyShareOp__F___init___wrapper\000MyShareOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyShareOp__F___init___wrapper\000MyShareOp__F___init__\000";

} // extern C

