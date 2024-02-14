#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ResourceManagerHvm;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Booster;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__FeatureExtractor;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__TextInfo;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__GbdtRanker;
namespace {
// User class forward declarations
struct ResourceManagerHvm;
struct ResourceManagerHvm_SharedView;

// User class forward declarations
struct Booster;
struct Booster_SharedView;

// User class forward declarations
struct FeatureExtractor;
struct FeatureExtractor_SharedView;

// User class forward declarations
struct TextInfo;
struct TextInfo_SharedView;

// User class forward declarations
struct GbdtRanker;
struct GbdtRanker_SharedView;

ResourceManagerHvm_SharedView ResourceManagerHvm__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ResourceManagerHvm__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
Booster_SharedView Booster__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int Booster__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
FeatureExtractor_SharedView FeatureExtractor__F___init___wrapper(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
int FeatureExtractor__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
TextInfo_SharedView TextInfo__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int TextInfo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
GbdtRanker_SharedView GbdtRanker__F___init___wrapper(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
int GbdtRanker__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ResourceManagerHvm__F___init__(const ResourceManagerHvm_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ResourceManagerHvm__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Booster__F___init__(const Booster_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int Booster__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue FeatureExtractor__F___init__(const FeatureExtractor_SharedView& self, const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
int FeatureExtractor__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue TextInfo__F___init__(const TextInfo_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int TextInfo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue GbdtRanker__F___init__(const GbdtRanker_SharedView& self, const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
int GbdtRanker__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue GbdtRanker__F_forward(const GbdtRanker_SharedView& self, const TextInfo_SharedView& text);
int GbdtRanker__F_forward__c_api(HerculesAny*, int, HerculesAny*, void*);
struct ResourceManagerHvm : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ResourceManagerHvm"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ResourceManagerHvm::tag_s_2_71828182846_};
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
};

// flags for convert check
uint32_t ResourceManagerHvm::tag_s_2_71828182846_ = -4496301663725356754;
uint32_t ResourceManagerHvm::var_num_s_2_71828182846_ = 0;
string_view ResourceManagerHvm::class_name_s_2_71828182846_ = "ResourceManagerHvm";
IUserDataRoot::__FunctionTable__ ResourceManagerHvm::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ResourceManagerHvm, "ResourceManagerHvm");

struct ResourceManagerHvm_SharedView: public IUserDataSharedViewRoot {
  // member var
  ResourceManagerHvm *ptr;
  // constructor
  ResourceManagerHvm_SharedView(ResourceManagerHvm *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ResourceManagerHvm_SharedView(ResourceManagerHvm *ptr) : ptr(ptr) {}
  ResourceManagerHvm_SharedView() : ptr(nullptr) {}
  ResourceManagerHvm_SharedView(const hercules::runtime::Any& ref) : ResourceManagerHvm_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ResourceManagerHvm")) {}
  // UserDataRef
  ResourceManagerHvm_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ResourceManagerHvm"));
    if(!base_ud_ptr->isinstance_2_71828182846(ResourceManagerHvm::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ResourceManagerHvm' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ResourceManagerHvm*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ResourceManagerHvm* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct Booster : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Booster"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Booster::tag_s_2_71828182846_};
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
};

// flags for convert check
uint32_t Booster::tag_s_2_71828182846_ = -5680321212569612960;
uint32_t Booster::var_num_s_2_71828182846_ = 0;
string_view Booster::class_name_s_2_71828182846_ = "Booster";
IUserDataRoot::__FunctionTable__ Booster::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Booster, "Booster");

struct Booster_SharedView: public IUserDataSharedViewRoot {
  // member var
  Booster *ptr;
  // constructor
  Booster_SharedView(Booster *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Booster_SharedView(Booster *ptr) : ptr(ptr) {}
  Booster_SharedView() : ptr(nullptr) {}
  Booster_SharedView(const hercules::runtime::Any& ref) : Booster_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Booster")) {}
  // UserDataRef
  Booster_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Booster"));
    if(!base_ud_ptr->isinstance_2_71828182846(Booster::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Booster' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Booster*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Booster* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct FeatureExtractor : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "FeatureExtractor"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {FeatureExtractor::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"resource_mgr", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"resource_mgr", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  ResourceManagerHvm_SharedView resource_mgr;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return resource_mgr.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->resource_mgr = static_cast<ResourceManagerHvm_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "ResourceManagerHvm")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t FeatureExtractor::tag_s_2_71828182846_ = -7383136522228387235;
uint32_t FeatureExtractor::var_num_s_2_71828182846_ = 1;
string_view FeatureExtractor::class_name_s_2_71828182846_ = "FeatureExtractor";
IUserDataRoot::__FunctionTable__ FeatureExtractor::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__FeatureExtractor, "FeatureExtractor");

struct FeatureExtractor_SharedView: public IUserDataSharedViewRoot {
  // member var
  FeatureExtractor *ptr;
  // constructor
  FeatureExtractor_SharedView(FeatureExtractor *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  FeatureExtractor_SharedView(FeatureExtractor *ptr) : ptr(ptr) {}
  FeatureExtractor_SharedView() : ptr(nullptr) {}
  FeatureExtractor_SharedView(const hercules::runtime::Any& ref) : FeatureExtractor_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "FeatureExtractor")) {}
  // UserDataRef
  FeatureExtractor_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("FeatureExtractor"));
    if(!base_ud_ptr->isinstance_2_71828182846(FeatureExtractor::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'FeatureExtractor' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<FeatureExtractor*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  FeatureExtractor* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct TextInfo : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "TextInfo"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {TextInfo::tag_s_2_71828182846_};
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
};

// flags for convert check
uint32_t TextInfo::tag_s_2_71828182846_ = 829943545038921267;
uint32_t TextInfo::var_num_s_2_71828182846_ = 0;
string_view TextInfo::class_name_s_2_71828182846_ = "TextInfo";
IUserDataRoot::__FunctionTable__ TextInfo::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__TextInfo, "TextInfo");

struct TextInfo_SharedView: public IUserDataSharedViewRoot {
  // member var
  TextInfo *ptr;
  // constructor
  TextInfo_SharedView(TextInfo *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  TextInfo_SharedView(TextInfo *ptr) : ptr(ptr) {}
  TextInfo_SharedView() : ptr(nullptr) {}
  TextInfo_SharedView(const hercules::runtime::Any& ref) : TextInfo_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "TextInfo")) {}
  // UserDataRef
  TextInfo_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("TextInfo"));
    if(!base_ud_ptr->isinstance_2_71828182846(TextInfo::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'TextInfo' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<TextInfo*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  TextInfo* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct GbdtRanker : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "GbdtRanker"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {GbdtRanker::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"gbm", "fe", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"gbm", 0}, 
      {"fe", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  RTValue gbm;
  RTValue fe;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return gbm; } break;
    case 1: { return fe; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->gbm = HERCULES_TYPE_AS(val, RTValue); } break;
    case 1: { this->fe = HERCULES_TYPE_AS(val, RTValue); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual RTValue forward(const TextInfo_SharedView& text);
};

// flags for convert check
uint32_t GbdtRanker::tag_s_2_71828182846_ = 8074004142013274764;
uint32_t GbdtRanker::var_num_s_2_71828182846_ = 2;
string_view GbdtRanker::class_name_s_2_71828182846_ = "GbdtRanker";
IUserDataRoot::__FunctionTable__ GbdtRanker::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__GbdtRanker, "GbdtRanker");

struct GbdtRanker_SharedView: public IUserDataSharedViewRoot {
  // member var
  GbdtRanker *ptr;
  // constructor
  GbdtRanker_SharedView(GbdtRanker *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  GbdtRanker_SharedView(GbdtRanker *ptr) : ptr(ptr) {}
  GbdtRanker_SharedView() : ptr(nullptr) {}
  GbdtRanker_SharedView(const hercules::runtime::Any& ref) : GbdtRanker_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "GbdtRanker")) {}
  // UserDataRef
  GbdtRanker_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("GbdtRanker"));
    if(!base_ud_ptr->isinstance_2_71828182846(GbdtRanker::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'GbdtRanker' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<GbdtRanker*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  GbdtRanker* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ResourceManagerHvm_F__deleter__(ILightUserData* ptr) { delete static_cast<ResourceManagerHvm*>(ptr); }
void* ResourceManagerHvm_F__placement_new__(void* buf) { return new (buf) ResourceManagerHvm; }
void ResourceManagerHvm_F__placement_del__(ILightUserData* ptr) { static_cast<ResourceManagerHvm*>(ptr)->ResourceManagerHvm::~ResourceManagerHvm(); }
ResourceManagerHvm_SharedView ResourceManagerHvm__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ResourceManagerHvm)) {
    auto self = new ResourceManagerHvm;
    self->function_table_2_71828182846_ = &ResourceManagerHvm::function_table_s_2_71828182846_;
    ResourceManagerHvm__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ResourceManagerHvm::tag_s_2_71828182846_, ResourceManagerHvm::var_num_s_2_71828182846_, self, ResourceManagerHvm_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ResourceManagerHvm::tag_s_2_71828182846_, ResourceManagerHvm::var_num_s_2_71828182846_, sizeof(ResourceManagerHvm), ResourceManagerHvm_F__placement_new__, ResourceManagerHvm_F__placement_del__, __hercules_module_ctx);
    ResourceManagerHvm_SharedView self_view((ResourceManagerHvm*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ResourceManagerHvm::function_table_s_2_71828182846_;
    ResourceManagerHvm__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void Booster_F__deleter__(ILightUserData* ptr) { delete static_cast<Booster*>(ptr); }
void* Booster_F__placement_new__(void* buf) { return new (buf) Booster; }
void Booster_F__placement_del__(ILightUserData* ptr) { static_cast<Booster*>(ptr)->Booster::~Booster(); }
Booster_SharedView Booster__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Booster)) {
    auto self = new Booster;
    self->function_table_2_71828182846_ = &Booster::function_table_s_2_71828182846_;
    Booster__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(Booster::tag_s_2_71828182846_, Booster::var_num_s_2_71828182846_, self, Booster_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Booster::tag_s_2_71828182846_, Booster::var_num_s_2_71828182846_, sizeof(Booster), Booster_F__placement_new__, Booster_F__placement_del__, __hercules_module_ctx);
    Booster_SharedView self_view((Booster*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Booster::function_table_s_2_71828182846_;
    Booster__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void FeatureExtractor_F__deleter__(ILightUserData* ptr) { delete static_cast<FeatureExtractor*>(ptr); }
void* FeatureExtractor_F__placement_new__(void* buf) { return new (buf) FeatureExtractor; }
void FeatureExtractor_F__placement_del__(ILightUserData* ptr) { static_cast<FeatureExtractor*>(ptr)->FeatureExtractor::~FeatureExtractor(); }
FeatureExtractor_SharedView FeatureExtractor__F___init___wrapper(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(FeatureExtractor)) {
    auto self = new FeatureExtractor;
    self->function_table_2_71828182846_ = &FeatureExtractor::function_table_s_2_71828182846_;
    FeatureExtractor__F___init__(self,  resource_mgr,  handle_2_71828182846);
    UserDataRef self_ref(FeatureExtractor::tag_s_2_71828182846_, FeatureExtractor::var_num_s_2_71828182846_, self, FeatureExtractor_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(FeatureExtractor::tag_s_2_71828182846_, FeatureExtractor::var_num_s_2_71828182846_, sizeof(FeatureExtractor), FeatureExtractor_F__placement_new__, FeatureExtractor_F__placement_del__, __hercules_module_ctx);
    FeatureExtractor_SharedView self_view((FeatureExtractor*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &FeatureExtractor::function_table_s_2_71828182846_;
    FeatureExtractor__F___init__(self_view,  resource_mgr,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void TextInfo_F__deleter__(ILightUserData* ptr) { delete static_cast<TextInfo*>(ptr); }
void* TextInfo_F__placement_new__(void* buf) { return new (buf) TextInfo; }
void TextInfo_F__placement_del__(ILightUserData* ptr) { static_cast<TextInfo*>(ptr)->TextInfo::~TextInfo(); }
TextInfo_SharedView TextInfo__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(TextInfo)) {
    auto self = new TextInfo;
    self->function_table_2_71828182846_ = &TextInfo::function_table_s_2_71828182846_;
    TextInfo__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(TextInfo::tag_s_2_71828182846_, TextInfo::var_num_s_2_71828182846_, self, TextInfo_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(TextInfo::tag_s_2_71828182846_, TextInfo::var_num_s_2_71828182846_, sizeof(TextInfo), TextInfo_F__placement_new__, TextInfo_F__placement_del__, __hercules_module_ctx);
    TextInfo_SharedView self_view((TextInfo*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &TextInfo::function_table_s_2_71828182846_;
    TextInfo__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void GbdtRanker_F__deleter__(ILightUserData* ptr) { delete static_cast<GbdtRanker*>(ptr); }
void* GbdtRanker_F__placement_new__(void* buf) { return new (buf) GbdtRanker; }
void GbdtRanker_F__placement_del__(ILightUserData* ptr) { static_cast<GbdtRanker*>(ptr)->GbdtRanker::~GbdtRanker(); }
GbdtRanker_SharedView GbdtRanker__F___init___wrapper(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(GbdtRanker)) {
    auto self = new GbdtRanker;
    self->function_table_2_71828182846_ = &GbdtRanker::function_table_s_2_71828182846_;
    GbdtRanker__F___init__(self,  resource_mgr,  handle_2_71828182846);
    UserDataRef self_ref(GbdtRanker::tag_s_2_71828182846_, GbdtRanker::var_num_s_2_71828182846_, self, GbdtRanker_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(GbdtRanker::tag_s_2_71828182846_, GbdtRanker::var_num_s_2_71828182846_, sizeof(GbdtRanker), GbdtRanker_F__placement_new__, GbdtRanker_F__placement_del__, __hercules_module_ctx);
    GbdtRanker_SharedView self_view((GbdtRanker*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &GbdtRanker::function_table_s_2_71828182846_;
    GbdtRanker__F___init__(self_view,  resource_mgr,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ResourceManagerHvm::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
  return (None);
}

HERCULES_DLL RTValue ResourceManagerHvm__F___init__(const ResourceManagerHvm_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
}

int ResourceManagerHvm__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
    auto ret = ResourceManagerHvm__F___init__(ResourceManagerHvm_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ResourceManagerHvm__F___init__(ResourceManagerHvm_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 35, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
    }
  }

  return 0;
}

int ResourceManagerHvm__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ResourceManagerHvm__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 35, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:35
  }
  return 0;
}

RTValue Booster::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
  return (None);
}

HERCULES_DLL RTValue Booster__F___init__(const Booster_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
}

int Booster__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
    auto ret = Booster__F___init__(Booster_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Booster__F___init__(Booster_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 40, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
    }
  }

  return 0;
}

int Booster__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = Booster__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 40, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:40
  }
  return 0;
}

RTValue FeatureExtractor::__init__(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
  this->resource_mgr = std::move(resource_mgr);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:53
  return (None);
}

HERCULES_DLL RTValue FeatureExtractor__F___init__(const FeatureExtractor_SharedView& self, const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
  return (self->__init__(resource_mgr, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
}

int FeatureExtractor__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "resource_mgr"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    auto ret = FeatureExtractor__F___init__(FeatureExtractor_SharedView(static_cast<const Any&>(pos_args[0])), ResourceManagerHvm_SharedView(static_cast<const Any&>(pos_args[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = FeatureExtractor__F___init__(FeatureExtractor_SharedView(static_cast<const Any&>(args_t[0])), ResourceManagerHvm_SharedView(static_cast<const Any&>(args_t[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 52, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    }
  }

  return 0;
}

int FeatureExtractor__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"resource_mgr"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    auto ret = FeatureExtractor__F___init___wrapper(ResourceManagerHvm_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = FeatureExtractor__F___init___wrapper(ResourceManagerHvm_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 52, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:52
    }
  }

  return 0;
}

RTValue TextInfo::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
  return (None);
}

HERCULES_DLL RTValue TextInfo__F___init__(const TextInfo_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
}

int TextInfo__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
    auto ret = TextInfo__F___init__(TextInfo_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = TextInfo__F___init__(TextInfo_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 45, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
    }
  }

  return 0;
}

int TextInfo__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = TextInfo__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 45, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:45
  }
  return 0;
}

RTValue GbdtRanker::__init__(const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
  this->gbm = (Booster__F___init___wrapper(this->session_handle_2_71828182846_)).operator RTValue();  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:60
  this->fe = (FeatureExtractor__F___init___wrapper(resource_mgr, this->session_handle_2_71828182846_)).operator RTValue();  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:61
  return (None);
}

HERCULES_DLL RTValue GbdtRanker__F___init__(const GbdtRanker_SharedView& self, const ResourceManagerHvm_SharedView& resource_mgr, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
  return (self->__init__(resource_mgr, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
}

int GbdtRanker__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "resource_mgr"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    auto ret = GbdtRanker__F___init__(GbdtRanker_SharedView(static_cast<const Any&>(pos_args[0])), ResourceManagerHvm_SharedView(static_cast<const Any&>(pos_args[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = GbdtRanker__F___init__(GbdtRanker_SharedView(static_cast<const Any&>(args_t[0])), ResourceManagerHvm_SharedView(static_cast<const Any&>(args_t[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 59, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    }
  }

  return 0;
}

int GbdtRanker__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"resource_mgr"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    auto ret = GbdtRanker__F___init___wrapper(ResourceManagerHvm_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = GbdtRanker__F___init___wrapper(ResourceManagerHvm_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 59, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:59
    }
  }

  return 0;
}

RTValue GbdtRanker::forward(const TextInfo_SharedView& text) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
  return (None);
}

HERCULES_DLL RTValue GbdtRanker__F_forward(const GbdtRanker_SharedView& self, const TextInfo_SharedView& text) {  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
  return (self->forward(text));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
}

int GbdtRanker__F_forward__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "text"};
    KwargsUnpackHelper helper("forward", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
    auto ret = GbdtRanker__F_forward(GbdtRanker_SharedView(static_cast<const Any&>(pos_args[0])), TextInfo_SharedView(static_cast<const Any&>(pos_args[1])));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = GbdtRanker__F_forward(GbdtRanker_SharedView(static_cast<const Any&>(args_t[0])), TextInfo_SharedView(static_cast<const Any&>(args_t[1])));  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_toolchain.py\", line 64, in forward\n", "forward() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_toolchain.py:64
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__GbdtRanker[] = {
    (HerculesBackendPackedCFunc)GbdtRanker__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)GbdtRanker__F___init____c_api,
    (HerculesBackendPackedCFunc)GbdtRanker__F_forward__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__GbdtRanker = {
    "3\000GbdtRanker__F___init___wrapper\000GbdtRanker__F___init__\000GbdtRanker__F_forward\000",    __hercules_func_array__GbdtRanker,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__TextInfo[] = {
    (HerculesBackendPackedCFunc)TextInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)TextInfo__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__TextInfo = {
    "2\000TextInfo__F___init___wrapper\000TextInfo__F___init__\000",    __hercules_func_array__TextInfo,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__FeatureExtractor[] = {
    (HerculesBackendPackedCFunc)FeatureExtractor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)FeatureExtractor__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__FeatureExtractor = {
    "2\000FeatureExtractor__F___init___wrapper\000FeatureExtractor__F___init__\000",    __hercules_func_array__FeatureExtractor,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Booster[] = {
    (HerculesBackendPackedCFunc)Booster__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Booster__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Booster = {
    "2\000Booster__F___init___wrapper\000Booster__F___init__\000",    __hercules_func_array__Booster,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ResourceManagerHvm[] = {
    (HerculesBackendPackedCFunc)ResourceManagerHvm__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ResourceManagerHvm__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ResourceManagerHvm = {
    "2\000ResourceManagerHvm__F___init___wrapper\000ResourceManagerHvm__F___init__\000",    __hercules_func_array__ResourceManagerHvm,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ResourceManagerHvm__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Booster__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)FeatureExtractor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)TextInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)GbdtRanker__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)GbdtRanker__F_forward__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "6\000ResourceManagerHvm__F___init___wrapper\000Booster__F___init___wrapper\000FeatureExtractor__F___init___wrapper\000TextInfo__F___init___wrapper\000GbdtRanker__F___init___wrapper\000GbdtRanker__F_forward\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "10\000ResourceManagerHvm__F___init___wrapper\000Booster__F___init___wrapper\000FeatureExtractor__F___init___wrapper\000TextInfo__F___init___wrapper\000GbdtRanker__F___init___wrapper\000ResourceManagerHvm__F___init__\000Booster__F___init__\000FeatureExtractor__F___init__\000TextInfo__F___init__\000GbdtRanker__F___init__\000";

} // extern C

