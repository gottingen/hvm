#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyGenerator;
namespace {
// User class forward declarations
struct MyGenerator;
struct MyGenerator_SharedView;

MyGenerator_SharedView MyGenerator__F___init___wrapper(const RTView& tf_op, NDArray state, void* handle_2_71828182846=((void*)(int64_t)0));
int MyGenerator__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyGenerator__F___init__(const MyGenerator_SharedView& self, const RTView& tf_op, NDArray state, void* handle_2_71828182846=((void*)(int64_t)0));
int MyGenerator__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MyGenerator__F___call__(const MyGenerator_SharedView& self, NDArray x);
int MyGenerator__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyGenerator : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyGenerator"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyGenerator::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"tf_op", "state", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"tf_op", 0}, 
      {"state", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  RTValue tf_op;
  NDArray state;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return tf_op; } break;
    case 1: { return state; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->tf_op = HERCULES_TYPE_AS(val, RTValue); } break;
    case 1: { this->state = HERCULES_TYPE_AS(val, NDArray); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const RTView& tf_op, NDArray state, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List __call__(NDArray x);
};

// flags for convert check
uint32_t MyGenerator::tag_s_2_71828182846_ = -9053196782335734639;
uint32_t MyGenerator::var_num_s_2_71828182846_ = 2;
string_view MyGenerator::class_name_s_2_71828182846_ = "MyGenerator";
IUserDataRoot::__FunctionTable__ MyGenerator::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyGenerator, "MyGenerator");

struct MyGenerator_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyGenerator *ptr;
  // constructor
  MyGenerator_SharedView(MyGenerator *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyGenerator_SharedView(MyGenerator *ptr) : ptr(ptr) {}
  MyGenerator_SharedView() : ptr(nullptr) {}
  MyGenerator_SharedView(const hercules::runtime::Any& ref) : MyGenerator_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyGenerator")) {}
  // UserDataRef
  MyGenerator_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyGenerator"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyGenerator::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyGenerator' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyGenerator*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyGenerator* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyGenerator_F__deleter__(ILightUserData* ptr) { delete static_cast<MyGenerator*>(ptr); }
void* MyGenerator_F__placement_new__(void* buf) { return new (buf) MyGenerator; }
void MyGenerator_F__placement_del__(ILightUserData* ptr) { static_cast<MyGenerator*>(ptr)->MyGenerator::~MyGenerator(); }
MyGenerator_SharedView MyGenerator__F___init___wrapper(const RTView& tf_op, NDArray state, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyGenerator)) {
    auto self = new MyGenerator;
    self->function_table_2_71828182846_ = &MyGenerator::function_table_s_2_71828182846_;
    MyGenerator__F___init__(self,  tf_op,  state,  handle_2_71828182846);
    UserDataRef self_ref(MyGenerator::tag_s_2_71828182846_, MyGenerator::var_num_s_2_71828182846_, self, MyGenerator_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyGenerator::tag_s_2_71828182846_, MyGenerator::var_num_s_2_71828182846_, sizeof(MyGenerator), MyGenerator_F__placement_new__, MyGenerator_F__placement_del__, __hercules_module_ctx);
    MyGenerator_SharedView self_view((MyGenerator*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyGenerator::function_table_s_2_71828182846_;
    MyGenerator__F___init__(self_view,  tf_op,  state,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyGenerator::__init__(const RTView& tf_op, NDArray state, void* handle_2_71828182846) {  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
  this->tf_op = std::move(tf_op);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:47
  this->state = std::move(state);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:48
  return (None);
}

HERCULES_DLL RTValue MyGenerator__F___init__(const MyGenerator_SharedView& self, const RTView& tf_op, NDArray state, void* handle_2_71828182846) {  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
  return (self->__init__(tf_op, state, handle_2_71828182846));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
}

int MyGenerator__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "tf_op", "state"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    auto ret = MyGenerator__F___init__(MyGenerator_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), internal::TypeAsHelper<NDArray>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "expect 'pos_args[2]' is 'NDArray' type"), resource_handle);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyGenerator__F___init__(MyGenerator_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), internal::TypeAsHelper<NDArray>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "expect 'args_t[2]' is 'NDArray' type"), resource_handle);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    }
  }

  return 0;
}

int MyGenerator__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"tf_op", "state"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    auto ret = MyGenerator__F___init___wrapper((pos_args[0]), internal::TypeAsHelper<NDArray>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "expect 'pos_args[1]' is 'NDArray' type"), resource_handle);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyGenerator__F___init___wrapper((args_t[0]), internal::TypeAsHelper<NDArray>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "expect 'args_t[1]' is 'NDArray' type"), resource_handle);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 46, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:46
    }
  }

  return 0;
}

List MyGenerator::__call__(NDArray x) {  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
  List results = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:51
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)10; i_iter_ += (int64_t)1) {  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:52
    int64_t i = i_iter_;  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:52
    (void)(results).append((kernel_object___fused_getitem__(kernel_object_call(this->tf_op, {(Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0073\u0074\u0061\u0074\u0065", 5), this->state}, {unicode_view(U"\u0078", 1), x}}))}), {(RTView(unicode_view(U"\u0072\u0065\u0073\u0075\u006C\u0074", 6)))})));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:53
  }
  return (results);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:54
}

HERCULES_DLL List MyGenerator__F___call__(const MyGenerator_SharedView& self, NDArray x) {  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
  return (self->__call__(x));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
}

int MyGenerator__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "x"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
    auto ret = MyGenerator__F___call__(MyGenerator_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<NDArray>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 50, in __call__\n", "expect 'pos_args[1]' is 'NDArray' type"));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyGenerator__F___call__(MyGenerator_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<NDArray>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 50, in __call__\n", "expect 'args_t[1]' is 'NDArray' type"));  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py\", line 50, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/ubuntu/github/gottingen/hvm/test/tensorflow2/test_tensorflow_module_2_xx.py:50
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyGenerator[] = {
    (HerculesBackendPackedCFunc)MyGenerator__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyGenerator__F___init____c_api,
    (HerculesBackendPackedCFunc)MyGenerator__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyGenerator = {
    "3\000MyGenerator__F___init___wrapper\000MyGenerator__F___init__\000MyGenerator__F___call__\000",    __hercules_func_array__MyGenerator,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyGenerator__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyGenerator__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyGenerator__F___init___wrapper\000MyGenerator__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyGenerator__F___init___wrapper\000MyGenerator__F___init__\000";

} // extern C

