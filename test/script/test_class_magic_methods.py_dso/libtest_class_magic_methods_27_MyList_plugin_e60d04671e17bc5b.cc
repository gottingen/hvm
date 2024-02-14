#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyList;
namespace {
// User class forward declarations
struct MyList;
struct MyList_SharedView;

MyList_SharedView MyList__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyList__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyList__F___init__(const MyList_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyList__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyList__F___getitem__(const MyList_SharedView& self, int64_t idx);
int MyList__F___getitem____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyList__F___call__(const MyList_SharedView& self);
int MyList__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyList : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyList"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyList::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"c", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"c", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  List c{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return c; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->c = HERCULES_TYPE_AS(val, List); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __getitem__(int64_t idx);
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyList::tag_s_2_71828182846_ = -3977723786770864643;
uint32_t MyList::var_num_s_2_71828182846_ = 1;
string_view MyList::class_name_s_2_71828182846_ = "MyList";
IUserDataRoot::__FunctionTable__ MyList::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyList, "MyList");

struct MyList_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyList *ptr;
  // constructor
  MyList_SharedView(MyList *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyList_SharedView(MyList *ptr) : ptr(ptr) {}
  MyList_SharedView() : ptr(nullptr) {}
  MyList_SharedView(const hercules::runtime::Any& ref) : MyList_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyList")) {}
  // UserDataRef
  MyList_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyList"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyList::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyList' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyList*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyList* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyList_F__deleter__(ILightUserData* ptr) { delete static_cast<MyList*>(ptr); }
void* MyList_F__placement_new__(void* buf) { return new (buf) MyList; }
void MyList_F__placement_del__(ILightUserData* ptr) { static_cast<MyList*>(ptr)->MyList::~MyList(); }
MyList_SharedView MyList__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyList)) {
    auto self = new MyList;
    self->function_table_2_71828182846_ = &MyList::function_table_s_2_71828182846_;
    MyList__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyList::tag_s_2_71828182846_, MyList::var_num_s_2_71828182846_, self, MyList_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyList::tag_s_2_71828182846_, MyList::var_num_s_2_71828182846_, sizeof(MyList), MyList_F__placement_new__, MyList_F__placement_del__, __hercules_module_ctx);
    MyList_SharedView self_view((MyList*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyList::function_table_s_2_71828182846_;
    MyList__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyList::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
  this->c = Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)0), ((int64_t)1), ((int64_t)2)});  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:29
  return (None);
}

HERCULES_DLL RTValue MyList__F___init__(const MyList_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
}

int MyList__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
    auto ret = MyList__F___init__(MyList_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyList__F___init__(MyList_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 28, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
    }
  }

  return 0;
}

int MyList__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyList__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 28, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:28
  }
  return 0;
}

int64_t MyList::__getitem__(int64_t idx) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
  return (internal::TypeAsHelper<int64_t>::run(((this->c).get_item((idx))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 32, in __getitem__\n", "expect '(this->c).get_item((idx))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:32
}

HERCULES_DLL int64_t MyList__F___getitem__(const MyList_SharedView& self, int64_t idx) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
  return (self->__getitem__(idx));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
}

int MyList__F___getitem____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "idx"};
    KwargsUnpackHelper helper("__getitem__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
    auto ret = MyList__F___getitem__(MyList_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 31, in __getitem__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyList__F___getitem__(MyList_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 31, in __getitem__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 31, in __getitem__\n", "__getitem__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:31
    }
  }

  return 0;
}

int64_t MyList::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
  return (this->__getitem__((int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:35
}

HERCULES_DLL int64_t MyList__F___call__(const MyList_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
}

int MyList__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
    auto ret = MyList__F___call__(MyList_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyList__F___call__(MyList_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py\", line 34, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_magic_methods.py:34
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyList[] = {
    (HerculesBackendPackedCFunc)MyList__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyList__F___init____c_api,
    (HerculesBackendPackedCFunc)MyList__F___getitem____c_api,
    (HerculesBackendPackedCFunc)MyList__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyList = {
    "4\000MyList__F___init___wrapper\000MyList__F___init__\000MyList__F___getitem__\000MyList__F___call__\000",    __hercules_func_array__MyList,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyList__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyList__F___getitem____c_api,
    (HerculesBackendPackedCFunc)MyList__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyList__F___init___wrapper\000MyList__F___getitem__\000MyList__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyList__F___init___wrapper\000MyList__F___init__\000";

} // extern C

