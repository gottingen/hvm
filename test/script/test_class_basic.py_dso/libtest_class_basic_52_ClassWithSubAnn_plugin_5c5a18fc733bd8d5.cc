#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithSubAnn;
namespace {
// User class forward declarations
struct ClassWithSubAnn;
struct ClassWithSubAnn_SharedView;

ClassWithSubAnn_SharedView ClassWithSubAnn__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithSubAnn__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ClassWithSubAnn__F___init__(const ClassWithSubAnn_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithSubAnn__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t ClassWithSubAnn__F__ClassWithSubAnn__call_(const ClassWithSubAnn_SharedView& self);
int ClassWithSubAnn__F__ClassWithSubAnn__call___c_api(HerculesAny*, int, HerculesAny*, void*);
struct ClassWithSubAnn : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ClassWithSubAnn"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ClassWithSubAnn::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"y", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"y", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  List y{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return y; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->y = HERCULES_TYPE_AS(val, List); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t _ClassWithSubAnn__call_();
};

// flags for convert check
uint32_t ClassWithSubAnn::tag_s_2_71828182846_ = -7398188917429072321;
uint32_t ClassWithSubAnn::var_num_s_2_71828182846_ = 1;
string_view ClassWithSubAnn::class_name_s_2_71828182846_ = "ClassWithSubAnn";
IUserDataRoot::__FunctionTable__ ClassWithSubAnn::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ClassWithSubAnn, "ClassWithSubAnn");

struct ClassWithSubAnn_SharedView: public IUserDataSharedViewRoot {
  // member var
  ClassWithSubAnn *ptr;
  // constructor
  ClassWithSubAnn_SharedView(ClassWithSubAnn *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ClassWithSubAnn_SharedView(ClassWithSubAnn *ptr) : ptr(ptr) {}
  ClassWithSubAnn_SharedView() : ptr(nullptr) {}
  ClassWithSubAnn_SharedView(const hercules::runtime::Any& ref) : ClassWithSubAnn_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ClassWithSubAnn")) {}
  // UserDataRef
  ClassWithSubAnn_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ClassWithSubAnn"));
    if(!base_ud_ptr->isinstance_2_71828182846(ClassWithSubAnn::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ClassWithSubAnn' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ClassWithSubAnn*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ClassWithSubAnn* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ClassWithSubAnn_F__deleter__(ILightUserData* ptr) { delete static_cast<ClassWithSubAnn*>(ptr); }
void* ClassWithSubAnn_F__placement_new__(void* buf) { return new (buf) ClassWithSubAnn; }
void ClassWithSubAnn_F__placement_del__(ILightUserData* ptr) { static_cast<ClassWithSubAnn*>(ptr)->ClassWithSubAnn::~ClassWithSubAnn(); }
ClassWithSubAnn_SharedView ClassWithSubAnn__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ClassWithSubAnn)) {
    auto self = new ClassWithSubAnn;
    self->function_table_2_71828182846_ = &ClassWithSubAnn::function_table_s_2_71828182846_;
    ClassWithSubAnn__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ClassWithSubAnn::tag_s_2_71828182846_, ClassWithSubAnn::var_num_s_2_71828182846_, self, ClassWithSubAnn_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ClassWithSubAnn::tag_s_2_71828182846_, ClassWithSubAnn::var_num_s_2_71828182846_, sizeof(ClassWithSubAnn), ClassWithSubAnn_F__placement_new__, ClassWithSubAnn_F__placement_del__, __hercules_module_ctx);
    ClassWithSubAnn_SharedView self_view((ClassWithSubAnn*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ClassWithSubAnn::function_table_s_2_71828182846_;
    ClassWithSubAnn__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ClassWithSubAnn::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
  this->y = Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)});  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:54
  (void)(this->y).set_item(((int64_t)0), (RTValue((int64_t)10)));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:55
  int64_t a = (internal::TypeAsHelper<int64_t>::run(((this->y).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 56, in __init__\n", "expect '(this->y).get_item(((int64_t)0))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:56
  return (None);
}

HERCULES_DLL RTValue ClassWithSubAnn__F___init__(const ClassWithSubAnn_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
}

int ClassWithSubAnn__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
    auto ret = ClassWithSubAnn__F___init__(ClassWithSubAnn_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithSubAnn__F___init__(ClassWithSubAnn_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 53, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
    }
  }

  return 0;
}

int ClassWithSubAnn__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ClassWithSubAnn__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 53, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:53
  }
  return 0;
}

int64_t ClassWithSubAnn::_ClassWithSubAnn__call_() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
  return (internal::TypeAsHelper<int64_t>::run(((this->y).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 59, in _ClassWithSubAnn__call_\n", "expect '(this->y).get_item(((int64_t)0))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:59
}

HERCULES_DLL int64_t ClassWithSubAnn__F__ClassWithSubAnn__call_(const ClassWithSubAnn_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
  return (self->_ClassWithSubAnn__call_());  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
}

int ClassWithSubAnn__F__ClassWithSubAnn__call___c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("_ClassWithSubAnn__call_", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
    auto ret = ClassWithSubAnn__F__ClassWithSubAnn__call_(ClassWithSubAnn_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithSubAnn__F__ClassWithSubAnn__call_(ClassWithSubAnn_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 58, in _ClassWithSubAnn__call_\n", "_ClassWithSubAnn__call_() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:58
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ClassWithSubAnn[] = {
    (HerculesBackendPackedCFunc)ClassWithSubAnn__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ClassWithSubAnn__F___init____c_api,
    (HerculesBackendPackedCFunc)ClassWithSubAnn__F__ClassWithSubAnn__call___c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithSubAnn = {
    "3\000ClassWithSubAnn__F___init___wrapper\000ClassWithSubAnn__F___init__\000ClassWithSubAnn__F__ClassWithSubAnn__call_\000",    __hercules_func_array__ClassWithSubAnn,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ClassWithSubAnn__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ClassWithSubAnn__F__ClassWithSubAnn__call___c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000ClassWithSubAnn__F___init___wrapper\000ClassWithSubAnn__F__ClassWithSubAnn__call_\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000ClassWithSubAnn__F___init___wrapper\000ClassWithSubAnn__F___init__\000";

} // extern C

