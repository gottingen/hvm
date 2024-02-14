#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Op;
namespace {
// User class forward declarations
struct Op;
struct Op_SharedView;

Op_SharedView Op__F___init___wrapper(int64_t v, void* handle_2_71828182846=((void*)(int64_t)0));
int Op__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Op__F___init__(const Op_SharedView& self, int64_t v, void* handle_2_71828182846=((void*)(int64_t)0));
int Op__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Op__F_forward(const Op_SharedView& self);
int Op__F_forward__c_api(HerculesAny*, int, HerculesAny*, void*);
struct Op : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Op"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Op::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"CPP_KW_protected", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"CPP_KW_protected", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t CPP_KW_protected;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return CPP_KW_protected; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->CPP_KW_protected = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t v, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t forward();
};

// flags for convert check
uint32_t Op::tag_s_2_71828182846_ = 406910014014779440;
uint32_t Op::var_num_s_2_71828182846_ = 1;
string_view Op::class_name_s_2_71828182846_ = "Op";
IUserDataRoot::__FunctionTable__ Op::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Op, "Op");

struct Op_SharedView: public IUserDataSharedViewRoot {
  // member var
  Op *ptr;
  // constructor
  Op_SharedView(Op *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Op_SharedView(Op *ptr) : ptr(ptr) {}
  Op_SharedView() : ptr(nullptr) {}
  Op_SharedView(const hercules::runtime::Any& ref) : Op_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Op")) {}
  // UserDataRef
  Op_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Op"));
    if(!base_ud_ptr->isinstance_2_71828182846(Op::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Op' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Op*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Op* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Op_F__deleter__(ILightUserData* ptr) { delete static_cast<Op*>(ptr); }
void* Op_F__placement_new__(void* buf) { return new (buf) Op; }
void Op_F__placement_del__(ILightUserData* ptr) { static_cast<Op*>(ptr)->Op::~Op(); }
Op_SharedView Op__F___init___wrapper(int64_t v, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Op)) {
    auto self = new Op;
    self->function_table_2_71828182846_ = &Op::function_table_s_2_71828182846_;
    Op__F___init__(self,  v,  handle_2_71828182846);
    UserDataRef self_ref(Op::tag_s_2_71828182846_, Op::var_num_s_2_71828182846_, self, Op_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Op::tag_s_2_71828182846_, Op::var_num_s_2_71828182846_, sizeof(Op), Op_F__placement_new__, Op_F__placement_del__, __hercules_module_ctx);
    Op_SharedView self_view((Op*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Op::function_table_s_2_71828182846_;
    Op__F___init__(self_view,  v,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Op::__init__(int64_t v, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
  this->CPP_KW_protected = v;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:51
  return (None);
}

HERCULES_DLL RTValue Op__F___init__(const Op_SharedView& self, int64_t v, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
  return (self->__init__(v, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
}

int Op__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "v"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    auto ret = Op__F___init__(Op_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Op__F___init__(Op_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    }
  }

  return 0;
}

int Op__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"v"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    auto ret = Op__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Op__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 50, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:50
    }
  }

  return 0;
}

int64_t Op::forward() {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
  return (this->CPP_KW_protected);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:54
}

HERCULES_DLL int64_t Op__F_forward(const Op_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
  return (self->forward());  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
}

int Op__F_forward__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("forward", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
    auto ret = Op__F_forward(Op_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Op__F_forward(Op_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py\", line 53, in forward\n", "forward() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cpp_keyword.py:53
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Op[] = {
    (HerculesBackendPackedCFunc)Op__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Op__F___init____c_api,
    (HerculesBackendPackedCFunc)Op__F_forward__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Op = {
    "3\000Op__F___init___wrapper\000Op__F___init__\000Op__F_forward\000",    __hercules_func_array__Op,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Op__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Op__F_forward__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000Op__F___init___wrapper\000Op__F_forward\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000Op__F___init___wrapper\000Op__F___init__\000";

} // extern C
