// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_stage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteStage;
class EstafetteStageDefaultTypeInternal;
extern EstafetteStageDefaultTypeInternal _EstafetteStage_default_instance_;
class EstafetteStage_CustomPropertiesEntry_DoNotUse;
class EstafetteStage_CustomPropertiesEntry_DoNotUseDefaultTypeInternal;
extern EstafetteStage_CustomPropertiesEntry_DoNotUseDefaultTypeInternal _EstafetteStage_CustomPropertiesEntry_DoNotUse_default_instance_;
class EstafetteStage_EnvVarsEntry_DoNotUse;
class EstafetteStage_EnvVarsEntry_DoNotUseDefaultTypeInternal;
extern EstafetteStage_EnvVarsEntry_DoNotUseDefaultTypeInternal _EstafetteStage_EnvVarsEntry_DoNotUse_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::manifest::v1::EstafetteStage* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteStage>(Arena*);
template<> ::estafette::ci::manifest::v1::EstafetteStage_CustomPropertiesEntry_DoNotUse* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteStage_CustomPropertiesEntry_DoNotUse>(Arena*);
template<> ::estafette::ci::manifest::v1::EstafetteStage_EnvVarsEntry_DoNotUse* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteStage_EnvVarsEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteStage_EnvVarsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<EstafetteStage_EnvVarsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<EstafetteStage_EnvVarsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  EstafetteStage_EnvVarsEntry_DoNotUse();
  EstafetteStage_EnvVarsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const EstafetteStage_EnvVarsEntry_DoNotUse& other);
  static const EstafetteStage_EnvVarsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const EstafetteStage_EnvVarsEntry_DoNotUse*>(&_EstafetteStage_EnvVarsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "estafette.ci.manifest.v1.EstafetteStage.EnvVarsEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "estafette.ci.manifest.v1.EstafetteStage.EnvVarsEntry.value");
 }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class EstafetteStage_CustomPropertiesEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<EstafetteStage_CustomPropertiesEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Any,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<EstafetteStage_CustomPropertiesEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Any,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  EstafetteStage_CustomPropertiesEntry_DoNotUse();
  EstafetteStage_CustomPropertiesEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const EstafetteStage_CustomPropertiesEntry_DoNotUse& other);
  static const EstafetteStage_CustomPropertiesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const EstafetteStage_CustomPropertiesEntry_DoNotUse*>(&_EstafetteStage_CustomPropertiesEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "estafette.ci.manifest.v1.EstafetteStage.CustomPropertiesEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto.file_level_metadata[1];
  }

  public:
};

// -------------------------------------------------------------------

class EstafetteStage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.manifest.v1.EstafetteStage) */ {
 public:
  EstafetteStage();
  virtual ~EstafetteStage();

  EstafetteStage(const EstafetteStage& from);
  EstafetteStage(EstafetteStage&& from) noexcept
    : EstafetteStage() {
    *this = ::std::move(from);
  }

  inline EstafetteStage& operator=(const EstafetteStage& from) {
    CopyFrom(from);
    return *this;
  }
  inline EstafetteStage& operator=(EstafetteStage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const EstafetteStage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteStage* internal_default_instance() {
    return reinterpret_cast<const EstafetteStage*>(
               &_EstafetteStage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(EstafetteStage* other);
  friend void swap(EstafetteStage& a, EstafetteStage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteStage* New() const final {
    return CreateMaybeMessage<EstafetteStage>(nullptr);
  }

  EstafetteStage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteStage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EstafetteStage& from);
  void MergeFrom(const EstafetteStage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EstafetteStage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.manifest.v1.EstafetteStage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // repeated string commands = 5;
  int commands_size() const;
  void clear_commands();
  static const int kCommandsFieldNumber = 5;
  const std::string& commands(int index) const;
  std::string* mutable_commands(int index);
  void set_commands(int index, const std::string& value);
  void set_commands(int index, std::string&& value);
  void set_commands(int index, const char* value);
  void set_commands(int index, const char* value, size_t size);
  std::string* add_commands();
  void add_commands(const std::string& value);
  void add_commands(std::string&& value);
  void add_commands(const char* value);
  void add_commands(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& commands() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_commands();

  // map<string, string> env_vars = 7;
  int env_vars_size() const;
  void clear_env_vars();
  static const int kEnvVarsFieldNumber = 7;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      env_vars() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_env_vars();

  // map<string, .google.protobuf.Any> custom_properties = 10;
  int custom_properties_size() const;
  void clear_custom_properties();
  static const int kCustomPropertiesFieldNumber = 10;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >&
      custom_properties() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >*
      mutable_custom_properties();

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // string container_image = 2;
  void clear_container_image();
  static const int kContainerImageFieldNumber = 2;
  const std::string& container_image() const;
  void set_container_image(const std::string& value);
  void set_container_image(std::string&& value);
  void set_container_image(const char* value);
  void set_container_image(const char* value, size_t size);
  std::string* mutable_container_image();
  std::string* release_container_image();
  void set_allocated_container_image(std::string* container_image);

  // string shell = 3;
  void clear_shell();
  static const int kShellFieldNumber = 3;
  const std::string& shell() const;
  void set_shell(const std::string& value);
  void set_shell(std::string&& value);
  void set_shell(const char* value);
  void set_shell(const char* value, size_t size);
  std::string* mutable_shell();
  std::string* release_shell();
  void set_allocated_shell(std::string* shell);

  // string working_directory = 4;
  void clear_working_directory();
  static const int kWorkingDirectoryFieldNumber = 4;
  const std::string& working_directory() const;
  void set_working_directory(const std::string& value);
  void set_working_directory(std::string&& value);
  void set_working_directory(const char* value);
  void set_working_directory(const char* value, size_t size);
  std::string* mutable_working_directory();
  std::string* release_working_directory();
  void set_allocated_working_directory(std::string* working_directory);

  // string when = 6;
  void clear_when();
  static const int kWhenFieldNumber = 6;
  const std::string& when() const;
  void set_when(const std::string& value);
  void set_when(std::string&& value);
  void set_when(const char* value);
  void set_when(const char* value, size_t size);
  std::string* mutable_when();
  std::string* release_when();
  void set_allocated_when(std::string* when);

  // int64 retries = 9;
  void clear_retries();
  static const int kRetriesFieldNumber = 9;
  ::PROTOBUF_NAMESPACE_ID::int64 retries() const;
  void set_retries(::PROTOBUF_NAMESPACE_ID::int64 value);

  // bool auto_injected = 8;
  void clear_auto_injected();
  static const int kAutoInjectedFieldNumber = 8;
  bool auto_injected() const;
  void set_auto_injected(bool value);

  // @@protoc_insertion_point(class_scope:estafette.ci.manifest.v1.EstafetteStage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> commands_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      EstafetteStage_EnvVarsEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      0 > env_vars_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      EstafetteStage_CustomPropertiesEntry_DoNotUse,
      std::string, PROTOBUF_NAMESPACE_ID::Any,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > custom_properties_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr container_image_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr shell_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr working_directory_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr when_;
  ::PROTOBUF_NAMESPACE_ID::int64 retries_;
  bool auto_injected_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// EstafetteStage

// string name = 1;
inline void EstafetteStage::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteStage::name() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.name)
  return name_.GetNoArena();
}
inline void EstafetteStage::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.name)
}
inline void EstafetteStage::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteStage.name)
}
inline void EstafetteStage::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.name)
}
inline void EstafetteStage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.name)
}
inline std::string* EstafetteStage::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteStage::release_name() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteStage.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteStage::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteStage.name)
}

// string container_image = 2;
inline void EstafetteStage::clear_container_image() {
  container_image_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteStage::container_image() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.container_image)
  return container_image_.GetNoArena();
}
inline void EstafetteStage::set_container_image(const std::string& value) {
  
  container_image_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.container_image)
}
inline void EstafetteStage::set_container_image(std::string&& value) {
  
  container_image_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteStage.container_image)
}
inline void EstafetteStage::set_container_image(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  container_image_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.container_image)
}
inline void EstafetteStage::set_container_image(const char* value, size_t size) {
  
  container_image_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.container_image)
}
inline std::string* EstafetteStage::mutable_container_image() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.container_image)
  return container_image_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteStage::release_container_image() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteStage.container_image)
  
  return container_image_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteStage::set_allocated_container_image(std::string* container_image) {
  if (container_image != nullptr) {
    
  } else {
    
  }
  container_image_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), container_image);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteStage.container_image)
}

// string shell = 3;
inline void EstafetteStage::clear_shell() {
  shell_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteStage::shell() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.shell)
  return shell_.GetNoArena();
}
inline void EstafetteStage::set_shell(const std::string& value) {
  
  shell_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.shell)
}
inline void EstafetteStage::set_shell(std::string&& value) {
  
  shell_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteStage.shell)
}
inline void EstafetteStage::set_shell(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  shell_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.shell)
}
inline void EstafetteStage::set_shell(const char* value, size_t size) {
  
  shell_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.shell)
}
inline std::string* EstafetteStage::mutable_shell() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.shell)
  return shell_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteStage::release_shell() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteStage.shell)
  
  return shell_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteStage::set_allocated_shell(std::string* shell) {
  if (shell != nullptr) {
    
  } else {
    
  }
  shell_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), shell);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteStage.shell)
}

// string working_directory = 4;
inline void EstafetteStage::clear_working_directory() {
  working_directory_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteStage::working_directory() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.working_directory)
  return working_directory_.GetNoArena();
}
inline void EstafetteStage::set_working_directory(const std::string& value) {
  
  working_directory_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.working_directory)
}
inline void EstafetteStage::set_working_directory(std::string&& value) {
  
  working_directory_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteStage.working_directory)
}
inline void EstafetteStage::set_working_directory(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  working_directory_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.working_directory)
}
inline void EstafetteStage::set_working_directory(const char* value, size_t size) {
  
  working_directory_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.working_directory)
}
inline std::string* EstafetteStage::mutable_working_directory() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.working_directory)
  return working_directory_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteStage::release_working_directory() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteStage.working_directory)
  
  return working_directory_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteStage::set_allocated_working_directory(std::string* working_directory) {
  if (working_directory != nullptr) {
    
  } else {
    
  }
  working_directory_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), working_directory);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteStage.working_directory)
}

// repeated string commands = 5;
inline int EstafetteStage::commands_size() const {
  return commands_.size();
}
inline void EstafetteStage::clear_commands() {
  commands_.Clear();
}
inline const std::string& EstafetteStage::commands(int index) const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.commands)
  return commands_.Get(index);
}
inline std::string* EstafetteStage::mutable_commands(int index) {
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.commands)
  return commands_.Mutable(index);
}
inline void EstafetteStage::set_commands(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.commands)
  commands_.Mutable(index)->assign(value);
}
inline void EstafetteStage::set_commands(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.commands)
  commands_.Mutable(index)->assign(std::move(value));
}
inline void EstafetteStage::set_commands(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  commands_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline void EstafetteStage::set_commands(int index, const char* value, size_t size) {
  commands_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline std::string* EstafetteStage::add_commands() {
  // @@protoc_insertion_point(field_add_mutable:estafette.ci.manifest.v1.EstafetteStage.commands)
  return commands_.Add();
}
inline void EstafetteStage::add_commands(const std::string& value) {
  commands_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline void EstafetteStage::add_commands(std::string&& value) {
  commands_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline void EstafetteStage::add_commands(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  commands_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline void EstafetteStage::add_commands(const char* value, size_t size) {
  commands_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:estafette.ci.manifest.v1.EstafetteStage.commands)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
EstafetteStage::commands() const {
  // @@protoc_insertion_point(field_list:estafette.ci.manifest.v1.EstafetteStage.commands)
  return commands_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
EstafetteStage::mutable_commands() {
  // @@protoc_insertion_point(field_mutable_list:estafette.ci.manifest.v1.EstafetteStage.commands)
  return &commands_;
}

// string when = 6;
inline void EstafetteStage::clear_when() {
  when_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteStage::when() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.when)
  return when_.GetNoArena();
}
inline void EstafetteStage::set_when(const std::string& value) {
  
  when_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.when)
}
inline void EstafetteStage::set_when(std::string&& value) {
  
  when_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteStage.when)
}
inline void EstafetteStage::set_when(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  when_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteStage.when)
}
inline void EstafetteStage::set_when(const char* value, size_t size) {
  
  when_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteStage.when)
}
inline std::string* EstafetteStage::mutable_when() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteStage.when)
  return when_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteStage::release_when() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteStage.when)
  
  return when_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteStage::set_allocated_when(std::string* when) {
  if (when != nullptr) {
    
  } else {
    
  }
  when_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), when);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteStage.when)
}

// map<string, string> env_vars = 7;
inline int EstafetteStage::env_vars_size() const {
  return env_vars_.size();
}
inline void EstafetteStage::clear_env_vars() {
  env_vars_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
EstafetteStage::env_vars() const {
  // @@protoc_insertion_point(field_map:estafette.ci.manifest.v1.EstafetteStage.env_vars)
  return env_vars_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
EstafetteStage::mutable_env_vars() {
  // @@protoc_insertion_point(field_mutable_map:estafette.ci.manifest.v1.EstafetteStage.env_vars)
  return env_vars_.MutableMap();
}

// bool auto_injected = 8;
inline void EstafetteStage::clear_auto_injected() {
  auto_injected_ = false;
}
inline bool EstafetteStage::auto_injected() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.auto_injected)
  return auto_injected_;
}
inline void EstafetteStage::set_auto_injected(bool value) {
  
  auto_injected_ = value;
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.auto_injected)
}

// int64 retries = 9;
inline void EstafetteStage::clear_retries() {
  retries_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 EstafetteStage::retries() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteStage.retries)
  return retries_;
}
inline void EstafetteStage::set_retries(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  retries_ = value;
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteStage.retries)
}

// map<string, .google.protobuf.Any> custom_properties = 10;
inline int EstafetteStage::custom_properties_size() const {
  return custom_properties_.size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >&
EstafetteStage::custom_properties() const {
  // @@protoc_insertion_point(field_map:estafette.ci.manifest.v1.EstafetteStage.custom_properties)
  return custom_properties_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >*
EstafetteStage::mutable_custom_properties() {
  // @@protoc_insertion_point(field_mutable_map:estafette.ci.manifest.v1.EstafetteStage.custom_properties)
  return custom_properties_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fstage_2eproto