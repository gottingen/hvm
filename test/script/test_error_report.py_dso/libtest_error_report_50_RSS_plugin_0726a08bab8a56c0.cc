#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__RSS;
namespace {
// User class forward declarations
struct RSS;
struct RSS_SharedView;

RSS_SharedView RSS__F___init___wrapper(int64_t param, void* handle_2_71828182846=((void*)(int64_t)0));
int RSS__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue RSS__F___init__(const RSS_SharedView& self, int64_t param, void* handle_2_71828182846=((void*)(int64_t)0));
int RSS__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
struct RSS : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "RSS"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {RSS::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"param", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"param", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t param;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return param; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->param = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t param, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t RSS::tag_s_2_71828182846_ = -3781528371592456895;
uint32_t RSS::var_num_s_2_71828182846_ = 1;
string_view RSS::class_name_s_2_71828182846_ = "RSS";
IUserDataRoot::__FunctionTable__ RSS::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__RSS, "RSS");

struct RSS_SharedView: public IUserDataSharedViewRoot {
  // member var
  RSS *ptr;
  // constructor
  RSS_SharedView(RSS *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  RSS_SharedView(RSS *ptr) : ptr(ptr) {}
  RSS_SharedView() : ptr(nullptr) {}
  RSS_SharedView(const hercules::runtime::Any& ref) : RSS_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "RSS")) {}
  // UserDataRef
  RSS_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("RSS"));
    if(!base_ud_ptr->isinstance_2_71828182846(RSS::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'RSS' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<RSS*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  RSS* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void RSS_F__deleter__(ILightUserData* ptr) { delete static_cast<RSS*>(ptr); }
void* RSS_F__placement_new__(void* buf) { return new (buf) RSS; }
void RSS_F__placement_del__(ILightUserData* ptr) { static_cast<RSS*>(ptr)->RSS::~RSS(); }
RSS_SharedView RSS__F___init___wrapper(int64_t param, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(RSS)) {
    auto self = new RSS;
    self->function_table_2_71828182846_ = &RSS::function_table_s_2_71828182846_;
    RSS__F___init__(self,  param,  handle_2_71828182846);
    UserDataRef self_ref(RSS::tag_s_2_71828182846_, RSS::var_num_s_2_71828182846_, self, RSS_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(RSS::tag_s_2_71828182846_, RSS::var_num_s_2_71828182846_, sizeof(RSS), RSS_F__placement_new__, RSS_F__placement_del__, __hercules_module_ctx);
    RSS_SharedView self_view((RSS*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &RSS::function_table_s_2_71828182846_;
    RSS__F___init__(self_view,  param,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue RSS::__init__(int64_t param, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
  this->param = param;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:54
  return (None);
}

HERCULES_DLL RTValue RSS__F___init__(const RSS_SharedView& self, int64_t param, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
  return (self->__init__(param, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
}

int RSS__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "param"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    auto ret = RSS__F___init__(RSS_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = RSS__F___init__(RSS_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    }
  }

  return 0;
}

int RSS__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"param"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    auto ret = RSS__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = RSS__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_error_report.py\", line 53, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_error_report.py:53
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__RSS[] = {
    (HerculesBackendPackedCFunc)RSS__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)RSS__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__RSS = {
    "2\000RSS__F___init___wrapper\000RSS__F___init__\000",    __hercules_func_array__RSS,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)RSS__F___init___wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000RSS__F___init___wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000RSS__F___init___wrapper\000RSS__F___init__\000";

} // extern C

