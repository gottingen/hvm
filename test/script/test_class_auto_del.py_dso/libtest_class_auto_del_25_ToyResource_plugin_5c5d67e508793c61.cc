#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ToyResource;
namespace {
// User class forward declarations
struct ToyResource;
struct ToyResource_SharedView;

ToyResource_SharedView ToyResource__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ToyResource__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ToyResource__F___init__(const ToyResource_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ToyResource__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t ToyResource__F_look(const ToyResource_SharedView& self, int64_t a);
int ToyResource__F_look__c_api(HerculesAny*, int, HerculesAny*, void*);
struct ToyResource : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ToyResource"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ToyResource::tag_s_2_71828182846_};
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
  virtual int64_t look(int64_t a);
};

// flags for convert check
uint32_t ToyResource::tag_s_2_71828182846_ = -614111900125851507;
uint32_t ToyResource::var_num_s_2_71828182846_ = 0;
string_view ToyResource::class_name_s_2_71828182846_ = "ToyResource";
IUserDataRoot::__FunctionTable__ ToyResource::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ToyResource, "ToyResource");

struct ToyResource_SharedView: public IUserDataSharedViewRoot {
  // member var
  ToyResource *ptr;
  // constructor
  ToyResource_SharedView(ToyResource *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ToyResource_SharedView(ToyResource *ptr) : ptr(ptr) {}
  ToyResource_SharedView() : ptr(nullptr) {}
  ToyResource_SharedView(const hercules::runtime::Any& ref) : ToyResource_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ToyResource")) {}
  // UserDataRef
  ToyResource_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ToyResource"));
    if(!base_ud_ptr->isinstance_2_71828182846(ToyResource::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ToyResource' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ToyResource*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ToyResource* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ToyResource_F__deleter__(ILightUserData* ptr) { delete static_cast<ToyResource*>(ptr); }
void* ToyResource_F__placement_new__(void* buf) { return new (buf) ToyResource; }
void ToyResource_F__placement_del__(ILightUserData* ptr) { static_cast<ToyResource*>(ptr)->ToyResource::~ToyResource(); }
ToyResource_SharedView ToyResource__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ToyResource)) {
    auto self = new ToyResource;
    self->function_table_2_71828182846_ = &ToyResource::function_table_s_2_71828182846_;
    ToyResource__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ToyResource::tag_s_2_71828182846_, ToyResource::var_num_s_2_71828182846_, self, ToyResource_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ToyResource::tag_s_2_71828182846_, ToyResource::var_num_s_2_71828182846_, sizeof(ToyResource), ToyResource_F__placement_new__, ToyResource_F__placement_del__, __hercules_module_ctx);
    ToyResource_SharedView self_view((ToyResource*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ToyResource::function_table_s_2_71828182846_;
    ToyResource__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ToyResource::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
  return (None);
}

HERCULES_DLL RTValue ToyResource__F___init__(const ToyResource_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
}

int ToyResource__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
    auto ret = ToyResource__F___init__(ToyResource_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ToyResource__F___init__(ToyResource_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py\", line 26, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
    }
  }

  return 0;
}

int ToyResource__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ToyResource__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py\", line 26, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:26
  }
  return 0;
}

int64_t ToyResource::look(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:30
}

HERCULES_DLL int64_t ToyResource__F_look(const ToyResource_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
  return (self->look(a));  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
}

int ToyResource__F_look__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("look", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
    auto ret = ToyResource__F_look(ToyResource_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py\", line 29, in look\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ToyResource__F_look(ToyResource_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py\", line 29, in look\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py\", line 29, in look\n", "look() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_auto_del.py:29
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ToyResource[] = {
    (HerculesBackendPackedCFunc)ToyResource__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ToyResource__F___init____c_api,
    (HerculesBackendPackedCFunc)ToyResource__F_look__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ToyResource = {
    "3\000ToyResource__F___init___wrapper\000ToyResource__F___init__\000ToyResource__F_look\000",    __hercules_func_array__ToyResource,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ToyResource__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ToyResource__F_look__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000ToyResource__F___init___wrapper\000ToyResource__F_look\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000ToyResource__F___init___wrapper\000ToyResource__F___init__\000";

} // extern C

