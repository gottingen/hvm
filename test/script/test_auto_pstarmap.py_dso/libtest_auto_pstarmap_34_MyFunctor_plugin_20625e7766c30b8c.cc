#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFunctor;
namespace {
// User class forward declarations
struct MyFunctor;
struct MyFunctor_SharedView;

MyFunctor_SharedView MyFunctor__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyFunctor__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyFunctor__F___init__(const MyFunctor_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyFunctor__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyFunctor__F_map_func(const MyFunctor_SharedView& self, int64_t v, int64_t y);
int MyFunctor__F_map_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MyFunctor__F___call__(const MyFunctor_SharedView& self, const List& v);
int MyFunctor__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyFunctor : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyFunctor"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyFunctor::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"r", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"r", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t r;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return r; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->r = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t map_func(int64_t v, int64_t y);
  virtual List __call__(const List& v1);
};

// flags for convert check
uint32_t MyFunctor::tag_s_2_71828182846_ = 8700303873520719786;
uint32_t MyFunctor::var_num_s_2_71828182846_ = 1;
string_view MyFunctor::class_name_s_2_71828182846_ = "MyFunctor";
IUserDataRoot::__FunctionTable__ MyFunctor::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyFunctor, "MyFunctor");

struct MyFunctor_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyFunctor *ptr;
  // constructor
  MyFunctor_SharedView(MyFunctor *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyFunctor_SharedView(MyFunctor *ptr) : ptr(ptr) {}
  MyFunctor_SharedView() : ptr(nullptr) {}
  MyFunctor_SharedView(const hercules::runtime::Any& ref) : MyFunctor_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyFunctor")) {}
  // UserDataRef
  MyFunctor_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyFunctor"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyFunctor::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyFunctor' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyFunctor*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyFunctor* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyFunctor_F__deleter__(ILightUserData* ptr) { delete static_cast<MyFunctor*>(ptr); }
void* MyFunctor_F__placement_new__(void* buf) { return new (buf) MyFunctor; }
void MyFunctor_F__placement_del__(ILightUserData* ptr) { static_cast<MyFunctor*>(ptr)->MyFunctor::~MyFunctor(); }
MyFunctor_SharedView MyFunctor__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyFunctor)) {
    auto self = new MyFunctor;
    self->function_table_2_71828182846_ = &MyFunctor::function_table_s_2_71828182846_;
    MyFunctor__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyFunctor::tag_s_2_71828182846_, MyFunctor::var_num_s_2_71828182846_, self, MyFunctor_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyFunctor::tag_s_2_71828182846_, MyFunctor::var_num_s_2_71828182846_, sizeof(MyFunctor), MyFunctor_F__placement_new__, MyFunctor_F__placement_del__, __hercules_module_ctx);
    MyFunctor_SharedView self_view((MyFunctor*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyFunctor::function_table_s_2_71828182846_;
    MyFunctor__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyFunctor::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
  this->r = (int64_t)1;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:37
  return (None);
}

HERCULES_DLL RTValue MyFunctor__F___init__(const MyFunctor_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
}

int MyFunctor__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
    auto ret = MyFunctor__F___init__(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyFunctor__F___init__(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 36, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
    }
  }

  return 0;
}

int MyFunctor__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyFunctor__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 36, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:36
  }
  return 0;
}

int64_t MyFunctor::map_func(int64_t v, int64_t y) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
  return (((this->r * v) + y));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:40
}

HERCULES_DLL int64_t MyFunctor__F_map_func(const MyFunctor_SharedView& self, int64_t v, int64_t y) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
  return (self->map_func(v, y));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
}

int MyFunctor__F_map_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "v", "y"};
    KwargsUnpackHelper helper("map_func", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
    auto ret = MyFunctor__F_map_func(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 39, in map_func\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 39, in map_func\n", "expect 'pos_args[2]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyFunctor__F_map_func(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 39, in map_func\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 39, in map_func\n", "expect 'args_t[2]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 39, in map_func\n", "map_func() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:39
    }
  }

  return 0;
}

List MyFunctor::__call__(const List& v) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
  return (ParallelStarMap(MakeUserFunction({(CAST_TO_USER_DATA_REF(this))}, string_view("MyFunctor.map_func", 18), (HerculesBackendPackedCFunc)MyFunctor__F_map_func__c_api, this->session_handle_2_71828182846_), v, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:43
}

HERCULES_DLL List MyFunctor__F___call__(const MyFunctor_SharedView& self, const List& v) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
  return (self->__call__(v));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
}

int MyFunctor__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "v"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
    auto ret = MyFunctor__F___call__(MyFunctor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 42, in __call__\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyFunctor__F___call__(MyFunctor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 42, in __call__\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py\", line 42, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_pstarmap.py:42
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyFunctor[] = {
    (HerculesBackendPackedCFunc)MyFunctor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___init____c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F_map_func__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyFunctor = {
    "4\000MyFunctor__F___init___wrapper\000MyFunctor__F___init__\000MyFunctor__F_map_func\000MyFunctor__F___call__\000",    __hercules_func_array__MyFunctor,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyFunctor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F_map_func__c_api,
    (HerculesBackendPackedCFunc)MyFunctor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyFunctor__F___init___wrapper\000MyFunctor__F_map_func\000MyFunctor__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyFunctor__F___init___wrapper\000MyFunctor__F___init__\000";

} // extern C

