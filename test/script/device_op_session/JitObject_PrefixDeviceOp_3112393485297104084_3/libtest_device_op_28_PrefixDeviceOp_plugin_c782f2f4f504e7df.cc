#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__PrefixDeviceOp;
namespace {
// User class forward declarations
struct PrefixDeviceOp;
struct PrefixDeviceOp_SharedView;

PrefixDeviceOp_SharedView PrefixDeviceOp__F___init___wrapper(const RTView& device=None, void* handle_2_71828182846=((void*)(int64_t)0));
int PrefixDeviceOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue PrefixDeviceOp__F___init__(const PrefixDeviceOp_SharedView& self, const RTView& device=None, void* handle_2_71828182846=((void*)(int64_t)0));
int PrefixDeviceOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL String PrefixDeviceOp__F___call__(const PrefixDeviceOp_SharedView& self, const string_view& prefix);
int PrefixDeviceOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct PrefixDeviceOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "PrefixDeviceOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {PrefixDeviceOp::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"func", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"func", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  RTValue func;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return func; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->func = HERCULES_TYPE_AS(val, RTValue); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const RTView& device=None, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual String __call__(const string_view& prefix);
};

// flags for convert check
uint32_t PrefixDeviceOp::tag_s_2_71828182846_ = 7310918171908533157;
uint32_t PrefixDeviceOp::var_num_s_2_71828182846_ = 1;
string_view PrefixDeviceOp::class_name_s_2_71828182846_ = "PrefixDeviceOp";
IUserDataRoot::__FunctionTable__ PrefixDeviceOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__PrefixDeviceOp, "PrefixDeviceOp");

struct PrefixDeviceOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  PrefixDeviceOp *ptr;
  // constructor
  PrefixDeviceOp_SharedView(PrefixDeviceOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  PrefixDeviceOp_SharedView(PrefixDeviceOp *ptr) : ptr(ptr) {}
  PrefixDeviceOp_SharedView() : ptr(nullptr) {}
  PrefixDeviceOp_SharedView(const hercules::runtime::Any& ref) : PrefixDeviceOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "PrefixDeviceOp")) {}
  // UserDataRef
  PrefixDeviceOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("PrefixDeviceOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(PrefixDeviceOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'PrefixDeviceOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<PrefixDeviceOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  PrefixDeviceOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void PrefixDeviceOp_F__deleter__(ILightUserData* ptr) { delete static_cast<PrefixDeviceOp*>(ptr); }
void* PrefixDeviceOp_F__placement_new__(void* buf) { return new (buf) PrefixDeviceOp; }
void PrefixDeviceOp_F__placement_del__(ILightUserData* ptr) { static_cast<PrefixDeviceOp*>(ptr)->PrefixDeviceOp::~PrefixDeviceOp(); }
PrefixDeviceOp_SharedView PrefixDeviceOp__F___init___wrapper(const RTView& device, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(PrefixDeviceOp)) {
    auto self = new PrefixDeviceOp;
    self->function_table_2_71828182846_ = &PrefixDeviceOp::function_table_s_2_71828182846_;
    PrefixDeviceOp__F___init__(self,  device,  handle_2_71828182846);
    UserDataRef self_ref(PrefixDeviceOp::tag_s_2_71828182846_, PrefixDeviceOp::var_num_s_2_71828182846_, self, PrefixDeviceOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(PrefixDeviceOp::tag_s_2_71828182846_, PrefixDeviceOp::var_num_s_2_71828182846_, sizeof(PrefixDeviceOp), PrefixDeviceOp_F__placement_new__, PrefixDeviceOp_F__placement_del__, __hercules_module_ctx);
    PrefixDeviceOp_SharedView self_view((PrefixDeviceOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &PrefixDeviceOp::function_table_s_2_71828182846_;
    PrefixDeviceOp__F___init__(self_view,  device,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue PrefixDeviceOp::__init__(const RTView& device, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
  this->func = RTValue(make_native_userdata(string_view("MyDeviceOpExample", 17), kernel_object_call(device, {})));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:30
  return (None);
}

HERCULES_DLL RTValue PrefixDeviceOp__F___init__(const PrefixDeviceOp_SharedView& self, const RTView& device, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
  return (self->__init__(device, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
}

int PrefixDeviceOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "device"};
    static RTValue default_args[1]{RTValue(None)};
    KwargsUnpackHelper helper("__init__", arg_names, 2, default_args, 1);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    auto ret = PrefixDeviceOp__F___init__(PrefixDeviceOp_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = PrefixDeviceOp__F___init__(PrefixDeviceOp_SharedView(static_cast<const Any&>(args_t[0])), None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = PrefixDeviceOp__F___init__(PrefixDeviceOp_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 29, in __init__\n", "__init__() takes from 1 to 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    }
  }

  return 0;
}

int PrefixDeviceOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"device"};
    static RTValue default_args[1]{RTValue(None)};
    KwargsUnpackHelper helper("__init__", arg_names, 1, default_args, 1);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    auto ret = PrefixDeviceOp__F___init___wrapper((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 0: {
        auto ret = PrefixDeviceOp__F___init___wrapper(None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      case 1: {
        auto ret = PrefixDeviceOp__F___init___wrapper((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 29, in __init__\n", "__init__() takes from 0 to 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:29
    }
  }

  return 0;
}

String PrefixDeviceOp::__call__(const string_view& prefix) {  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
  return (internal::TypeAsHelper<String>::run((kernel_object___dispatch__(this->func, "device_check", {(prefix)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 33, in __call__\n", "expect 'kernel_object___dispatch__(this->func, \"device_check\", {(prefix)})' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:33
}

HERCULES_DLL String PrefixDeviceOp__F___call__(const PrefixDeviceOp_SharedView& self, const string_view& prefix) {  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
  return (self->__call__(prefix));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
}

int PrefixDeviceOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "prefix"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
    auto ret = PrefixDeviceOp__F___call__(PrefixDeviceOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 32, in __call__\n", "expect 'pos_args[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = PrefixDeviceOp__F___call__(PrefixDeviceOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 32, in __call__\n", "expect 'args_t[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_device_op.py\", line 32, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_device_op.py:32
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__PrefixDeviceOp[] = {
    (HerculesBackendPackedCFunc)PrefixDeviceOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)PrefixDeviceOp__F___init____c_api,
    (HerculesBackendPackedCFunc)PrefixDeviceOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__PrefixDeviceOp = {
    "3\000PrefixDeviceOp__F___init___wrapper\000PrefixDeviceOp__F___init__\000PrefixDeviceOp__F___call__\000",    __hercules_func_array__PrefixDeviceOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)PrefixDeviceOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)PrefixDeviceOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000PrefixDeviceOp__F___init___wrapper\000PrefixDeviceOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000PrefixDeviceOp__F___init___wrapper\000PrefixDeviceOp__F___init__\000";

} // extern C

