#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyNDArrayGenerator;
namespace {
// User class forward declarations
struct MyNDArrayGenerator;
struct MyNDArrayGenerator_SharedView;

MyNDArrayGenerator_SharedView MyNDArrayGenerator__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyNDArrayGenerator__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_ndarray_sum(void* handle_2_71828182846=((void*)(int64_t)0));
int test_ndarray_sum__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyNDArrayGenerator__F___init__(const MyNDArrayGenerator_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyNDArrayGenerator__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray MyNDArrayGenerator__F_make_ndarray(const MyNDArrayGenerator_SharedView& self);
int MyNDArrayGenerator__F_make_ndarray__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyNDArrayGenerator : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyNDArrayGenerator"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyNDArrayGenerator::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"val", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"val", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t val;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return val; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->val = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual NDArray make_ndarray();
};

// flags for convert check
uint32_t MyNDArrayGenerator::tag_s_2_71828182846_ = -283155358544514745;
uint32_t MyNDArrayGenerator::var_num_s_2_71828182846_ = 1;
string_view MyNDArrayGenerator::class_name_s_2_71828182846_ = "MyNDArrayGenerator";
IUserDataRoot::__FunctionTable__ MyNDArrayGenerator::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyNDArrayGenerator, "MyNDArrayGenerator");

struct MyNDArrayGenerator_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyNDArrayGenerator *ptr;
  // constructor
  MyNDArrayGenerator_SharedView(MyNDArrayGenerator *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyNDArrayGenerator_SharedView(MyNDArrayGenerator *ptr) : ptr(ptr) {}
  MyNDArrayGenerator_SharedView() : ptr(nullptr) {}
  MyNDArrayGenerator_SharedView(const hercules::runtime::Any& ref) : MyNDArrayGenerator_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyNDArrayGenerator")) {}
  // UserDataRef
  MyNDArrayGenerator_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyNDArrayGenerator"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyNDArrayGenerator::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyNDArrayGenerator' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyNDArrayGenerator*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyNDArrayGenerator* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyNDArrayGenerator_F__deleter__(ILightUserData* ptr) { delete static_cast<MyNDArrayGenerator*>(ptr); }
void* MyNDArrayGenerator_F__placement_new__(void* buf) { return new (buf) MyNDArrayGenerator; }
void MyNDArrayGenerator_F__placement_del__(ILightUserData* ptr) { static_cast<MyNDArrayGenerator*>(ptr)->MyNDArrayGenerator::~MyNDArrayGenerator(); }
MyNDArrayGenerator_SharedView MyNDArrayGenerator__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyNDArrayGenerator)) {
    auto self = new MyNDArrayGenerator;
    self->function_table_2_71828182846_ = &MyNDArrayGenerator::function_table_s_2_71828182846_;
    MyNDArrayGenerator__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyNDArrayGenerator::tag_s_2_71828182846_, MyNDArrayGenerator::var_num_s_2_71828182846_, self, MyNDArrayGenerator_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyNDArrayGenerator::tag_s_2_71828182846_, MyNDArrayGenerator::var_num_s_2_71828182846_, sizeof(MyNDArrayGenerator), MyNDArrayGenerator_F__placement_new__, MyNDArrayGenerator_F__placement_del__, __hercules_module_ctx);
    MyNDArrayGenerator_SharedView self_view((MyNDArrayGenerator*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyNDArrayGenerator::function_table_s_2_71828182846_;
    MyNDArrayGenerator__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue test_ndarray_sum(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:963
  MyNDArrayGenerator_SharedView g = (MyNDArrayGenerator__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:964
  int64_t total = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:965
  NDArray __reserved_tmp_iter_expr_74024035 = (g->make_ndarray());  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:966
  for (int64_t __reserved_any_pos_8126920711206779044_49819269_iter_ = (int64_t)0; __reserved_any_pos_8126920711206779044_49819269_iter_ < (__reserved_tmp_iter_expr_74024035).size(); __reserved_any_pos_8126920711206779044_49819269_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:966
    int64_t __reserved_any_pos_8126920711206779044_49819269 = __reserved_any_pos_8126920711206779044_49819269_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:966
    RTValue s = ((__reserved_tmp_iter_expr_74024035).get_item((__reserved_any_pos_8126920711206779044_49819269)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:966
    total = internal::TypeAsHelper<int64_t>::run((ArithOps::add(total, s)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 967, in test_ndarray_sum\n", "expect 'ArithOps::add(total, s)' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:967
  }
  return (RTValue(total));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:968
}

int test_ndarray_sum__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_ndarray_sum(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:963
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 963, in test_ndarray_sum\n", "test_ndarray_sum() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:963
  }
  return 0;
}

RTValue MyNDArrayGenerator::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
  this->val = (int64_t)1;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:956
  return (None);
}

HERCULES_DLL RTValue MyNDArrayGenerator__F___init__(const MyNDArrayGenerator_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
}

int MyNDArrayGenerator__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
    auto ret = MyNDArrayGenerator__F___init__(MyNDArrayGenerator_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyNDArrayGenerator__F___init__(MyNDArrayGenerator_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 955, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
    }
  }

  return 0;
}

int MyNDArrayGenerator__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyNDArrayGenerator__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 955, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:955
  }
  return 0;
}

NDArray MyNDArrayGenerator::make_ndarray() {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
  NDArray result = (Kernel_NDArray::make((this->val), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4)})), (unicode_view(U"\u0069\u006E\u0074\u0033\u0032", 5)), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:959
  this->val = (this->val + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:960
  return (result);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:961
}

HERCULES_DLL NDArray MyNDArrayGenerator__F_make_ndarray(const MyNDArrayGenerator_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
  return (self->make_ndarray());  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
}

int MyNDArrayGenerator__F_make_ndarray__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("make_ndarray", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
    auto ret = MyNDArrayGenerator__F_make_ndarray(MyNDArrayGenerator_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyNDArrayGenerator__F_make_ndarray(MyNDArrayGenerator_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 958, in make_ndarray\n", "make_ndarray() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:958
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyNDArrayGenerator[] = {
    (HerculesBackendPackedCFunc)MyNDArrayGenerator__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyNDArrayGenerator__F___init____c_api,
    (HerculesBackendPackedCFunc)MyNDArrayGenerator__F_make_ndarray__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyNDArrayGenerator = {
    "3\000MyNDArrayGenerator__F___init___wrapper\000MyNDArrayGenerator__F___init__\000MyNDArrayGenerator__F_make_ndarray\000",    __hercules_func_array__MyNDArrayGenerator,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyNDArrayGenerator__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)test_ndarray_sum__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyNDArrayGenerator__F___init___wrapper\000test_ndarray_sum\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyNDArrayGenerator__F___init___wrapper\000test_ndarray_sum\000MyNDArrayGenerator__F___init__\000";

} // extern C

