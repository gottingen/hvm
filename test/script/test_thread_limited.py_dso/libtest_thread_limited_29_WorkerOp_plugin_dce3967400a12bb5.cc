#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__WorkerOp;
namespace {
// User class forward declarations
struct WorkerOp;
struct WorkerOp_SharedView;

WorkerOp_SharedView WorkerOp__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int WorkerOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue WorkerOp__F___init__(const WorkerOp_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int WorkerOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double WorkerOp__F___call__(const WorkerOp_SharedView& self, double a);
int WorkerOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct WorkerOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "WorkerOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {WorkerOp::tag_s_2_71828182846_};
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
  virtual double __call__(double a);
};

// flags for convert check
uint32_t WorkerOp::tag_s_2_71828182846_ = 3328509972567280063;
uint32_t WorkerOp::var_num_s_2_71828182846_ = 0;
string_view WorkerOp::class_name_s_2_71828182846_ = "WorkerOp";
IUserDataRoot::__FunctionTable__ WorkerOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__WorkerOp, "WorkerOp");

struct WorkerOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  WorkerOp *ptr;
  // constructor
  WorkerOp_SharedView(WorkerOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  WorkerOp_SharedView(WorkerOp *ptr) : ptr(ptr) {}
  WorkerOp_SharedView() : ptr(nullptr) {}
  WorkerOp_SharedView(const hercules::runtime::Any& ref) : WorkerOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "WorkerOp")) {}
  // UserDataRef
  WorkerOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("WorkerOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(WorkerOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'WorkerOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<WorkerOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  WorkerOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void WorkerOp_F__deleter__(ILightUserData* ptr) { delete static_cast<WorkerOp*>(ptr); }
void* WorkerOp_F__placement_new__(void* buf) { return new (buf) WorkerOp; }
void WorkerOp_F__placement_del__(ILightUserData* ptr) { static_cast<WorkerOp*>(ptr)->WorkerOp::~WorkerOp(); }
WorkerOp_SharedView WorkerOp__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(WorkerOp)) {
    auto self = new WorkerOp;
    self->function_table_2_71828182846_ = &WorkerOp::function_table_s_2_71828182846_;
    WorkerOp__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(WorkerOp::tag_s_2_71828182846_, WorkerOp::var_num_s_2_71828182846_, self, WorkerOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(WorkerOp::tag_s_2_71828182846_, WorkerOp::var_num_s_2_71828182846_, sizeof(WorkerOp), WorkerOp_F__placement_new__, WorkerOp_F__placement_del__, __hercules_module_ctx);
    WorkerOp_SharedView self_view((WorkerOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &WorkerOp::function_table_s_2_71828182846_;
    WorkerOp__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue WorkerOp::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
  return (None);
}

HERCULES_DLL RTValue WorkerOp__F___init__(const WorkerOp_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
}

int WorkerOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
    auto ret = WorkerOp__F___init__(WorkerOp_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = WorkerOp__F___init__(WorkerOp_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 30, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
    }
  }

  return 0;
}

int WorkerOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = WorkerOp__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 30, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:30
  }
  return 0;
}

double WorkerOp::__call__(double a) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
  return ((2.0000000000000000000e+00 * a));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:34
}

HERCULES_DLL double WorkerOp__F___call__(const WorkerOp_SharedView& self, double a) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
  return (self->__call__(a));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
}

int WorkerOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
    auto ret = WorkerOp__F___call__(WorkerOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 33, in __call__\n", "expect 'pos_args[1]' is 'double' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = WorkerOp__F___call__(WorkerOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 33, in __call__\n", "expect 'args_t[1]' is 'double' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py\", line 33, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_limited.py:33
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__WorkerOp[] = {
    (HerculesBackendPackedCFunc)WorkerOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)WorkerOp__F___init____c_api,
    (HerculesBackendPackedCFunc)WorkerOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__WorkerOp = {
    "3\000WorkerOp__F___init___wrapper\000WorkerOp__F___init__\000WorkerOp__F___call__\000",    __hercules_func_array__WorkerOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)WorkerOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)WorkerOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000WorkerOp__F___init___wrapper\000WorkerOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000WorkerOp__F___init___wrapper\000WorkerOp__F___init__\000";

} // extern C

