#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyThreadLocalOp;
namespace {
// User class forward declarations
struct MyThreadLocalOp;
struct MyThreadLocalOp_SharedView;

MyThreadLocalOp_SharedView MyThreadLocalOp__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyThreadLocalOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyThreadLocalOp__F___init__(const MyThreadLocalOp_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyThreadLocalOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyThreadLocalOp__F___call__(const MyThreadLocalOp_SharedView& self);
int MyThreadLocalOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyThreadLocalOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyThreadLocalOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyThreadLocalOp::tag_s_2_71828182846_};
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
uint32_t MyThreadLocalOp::tag_s_2_71828182846_ = 7615061202696204805;
uint32_t MyThreadLocalOp::var_num_s_2_71828182846_ = 1;
string_view MyThreadLocalOp::class_name_s_2_71828182846_ = "MyThreadLocalOp";
IUserDataRoot::__FunctionTable__ MyThreadLocalOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyThreadLocalOp, "MyThreadLocalOp");

struct MyThreadLocalOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyThreadLocalOp *ptr;
  // constructor
  MyThreadLocalOp_SharedView(MyThreadLocalOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyThreadLocalOp_SharedView(MyThreadLocalOp *ptr) : ptr(ptr) {}
  MyThreadLocalOp_SharedView() : ptr(nullptr) {}
  MyThreadLocalOp_SharedView(const hercules::runtime::Any& ref) : MyThreadLocalOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyThreadLocalOp")) {}
  // UserDataRef
  MyThreadLocalOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyThreadLocalOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyThreadLocalOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyThreadLocalOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyThreadLocalOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyThreadLocalOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyThreadLocalOp_F__deleter__(ILightUserData* ptr) { delete static_cast<MyThreadLocalOp*>(ptr); }
void* MyThreadLocalOp_F__placement_new__(void* buf) { return new (buf) MyThreadLocalOp; }
void MyThreadLocalOp_F__placement_del__(ILightUserData* ptr) { static_cast<MyThreadLocalOp*>(ptr)->MyThreadLocalOp::~MyThreadLocalOp(); }
MyThreadLocalOp_SharedView MyThreadLocalOp__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyThreadLocalOp)) {
    auto self = new MyThreadLocalOp;
    self->function_table_2_71828182846_ = &MyThreadLocalOp::function_table_s_2_71828182846_;
    MyThreadLocalOp__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyThreadLocalOp::tag_s_2_71828182846_, MyThreadLocalOp::var_num_s_2_71828182846_, self, MyThreadLocalOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyThreadLocalOp::tag_s_2_71828182846_, MyThreadLocalOp::var_num_s_2_71828182846_, sizeof(MyThreadLocalOp), MyThreadLocalOp_F__placement_new__, MyThreadLocalOp_F__placement_del__, __hercules_module_ctx);
    MyThreadLocalOp_SharedView self_view((MyThreadLocalOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyThreadLocalOp::function_table_s_2_71828182846_;
    MyThreadLocalOp__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyThreadLocalOp::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
  this->create_time = Kernel_int64_t::make(((kernel_time_time() * 1.0000000000000000000e+09)));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:67
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0063\u0061\u006C\u006C\u0020\u004D\u0079\u0054\u0068\u0072\u0065\u0061\u0064\u004C\u006F\u0063\u0061\u006C\u004F\u0070\u002E\u005F\u005F\u0069\u006E\u0069\u0074\u005F\u005F", 29), this->create_time);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:68
  return (None);
}

HERCULES_DLL RTValue MyThreadLocalOp__F___init__(const MyThreadLocalOp_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
}

int MyThreadLocalOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
    auto ret = MyThreadLocalOp__F___init__(MyThreadLocalOp_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyThreadLocalOp__F___init__(MyThreadLocalOp_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 66, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
    }
  }

  return 0;
}

int MyThreadLocalOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyThreadLocalOp__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 66, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:66
  }
  return 0;
}

int64_t MyThreadLocalOp::__call__() {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
  return (this->create_time);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:71
}

HERCULES_DLL int64_t MyThreadLocalOp__F___call__(const MyThreadLocalOp_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
}

int MyThreadLocalOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
    auto ret = MyThreadLocalOp__F___call__(MyThreadLocalOp_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyThreadLocalOp__F___call__(MyThreadLocalOp_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py\", line 70, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_threadlocal_op.py:70
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyThreadLocalOp[] = {
    (HerculesBackendPackedCFunc)MyThreadLocalOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyThreadLocalOp__F___init____c_api,
    (HerculesBackendPackedCFunc)MyThreadLocalOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyThreadLocalOp = {
    "3\000MyThreadLocalOp__F___init___wrapper\000MyThreadLocalOp__F___init__\000MyThreadLocalOp__F___call__\000",    __hercules_func_array__MyThreadLocalOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyThreadLocalOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyThreadLocalOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyThreadLocalOp__F___init___wrapper\000MyThreadLocalOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyThreadLocalOp__F___init___wrapper\000MyThreadLocalOp__F___init__\000";

} // extern C

