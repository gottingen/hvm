#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyDoc;
namespace {
// User class forward declarations
struct MyDoc;
struct MyDoc_SharedView;

MyDoc_SharedView MyDoc__F___init___wrapper(const unicode_view& query, void* handle_2_71828182846=((void*)(int64_t)0));
int MyDoc__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple test_list_pop(void* handle_2_71828182846=((void*)(int64_t)0));
int test_list_pop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyDoc__F___init__(const MyDoc_SharedView& self, const unicode_view& query, void* handle_2_71828182846=((void*)(int64_t)0));
int MyDoc__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyDoc : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyDoc"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyDoc::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"query", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"query", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode query;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return query; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->query = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const unicode_view& query, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t MyDoc::tag_s_2_71828182846_ = -7009102608127991775;
uint32_t MyDoc::var_num_s_2_71828182846_ = 1;
string_view MyDoc::class_name_s_2_71828182846_ = "MyDoc";
IUserDataRoot::__FunctionTable__ MyDoc::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyDoc, "MyDoc");

struct MyDoc_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyDoc *ptr;
  // constructor
  MyDoc_SharedView(MyDoc *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyDoc_SharedView(MyDoc *ptr) : ptr(ptr) {}
  MyDoc_SharedView() : ptr(nullptr) {}
  MyDoc_SharedView(const hercules::runtime::Any& ref) : MyDoc_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyDoc")) {}
  // UserDataRef
  MyDoc_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyDoc"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyDoc::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyDoc' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyDoc*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyDoc* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyDoc_F__deleter__(ILightUserData* ptr) { delete static_cast<MyDoc*>(ptr); }
void* MyDoc_F__placement_new__(void* buf) { return new (buf) MyDoc; }
void MyDoc_F__placement_del__(ILightUserData* ptr) { static_cast<MyDoc*>(ptr)->MyDoc::~MyDoc(); }
MyDoc_SharedView MyDoc__F___init___wrapper(const unicode_view& query, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyDoc)) {
    auto self = new MyDoc;
    self->function_table_2_71828182846_ = &MyDoc::function_table_s_2_71828182846_;
    MyDoc__F___init__(self,  query,  handle_2_71828182846);
    UserDataRef self_ref(MyDoc::tag_s_2_71828182846_, MyDoc::var_num_s_2_71828182846_, self, MyDoc_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyDoc::tag_s_2_71828182846_, MyDoc::var_num_s_2_71828182846_, sizeof(MyDoc), MyDoc_F__placement_new__, MyDoc_F__placement_del__, __hercules_module_ctx);
    MyDoc_SharedView self_view((MyDoc*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyDoc::function_table_s_2_71828182846_;
    MyDoc__F___init__(self_view,  query,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Tuple test_list_pop(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:63
  List l = (Kernel_List::make(std::initializer_list<List::value_type>{(MyDoc__F___init___wrapper(unicode_view(U"\u0068\u0061\u0068\u0061\u0030", 5), handle_2_71828182846)), (MyDoc__F___init___wrapper(unicode_view(U"\u0068\u0061\u0068\u0061\u0031", 5), handle_2_71828182846))}));  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:64
  Tuple ret = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(MyDoc_SharedView(static_cast<const Any&>((l).pop(((int64_t)0))))->query), (MyDoc_SharedView(static_cast<const Any&>((l).pop()))->query)}));  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:65
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:66
}

int test_list_pop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_list_pop(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:63
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 63, in test_list_pop\n", "test_list_pop() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:63
  }
  return 0;
}

RTValue MyDoc::__init__(const unicode_view& query, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
  this->query = GenericValueConverter<Unicode>{}(query);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:61
  return (None);
}

HERCULES_DLL RTValue MyDoc__F___init__(const MyDoc_SharedView& self, const unicode_view& query, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
  return (self->__init__(query, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
}

int MyDoc__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "query"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    auto ret = MyDoc__F___init__(MyDoc_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyDoc__F___init__(MyDoc_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    }
  }

  return 0;
}

int MyDoc__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"query"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    auto ret = MyDoc__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyDoc__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py\", line 60, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_type_conveter.py:60
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyDoc[] = {
    (HerculesBackendPackedCFunc)MyDoc__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyDoc__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyDoc = {
    "2\000MyDoc__F___init___wrapper\000MyDoc__F___init__\000",    __hercules_func_array__MyDoc,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyDoc__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)test_list_pop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyDoc__F___init___wrapper\000test_list_pop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyDoc__F___init___wrapper\000test_list_pop\000MyDoc__F___init__\000";

} // extern C

