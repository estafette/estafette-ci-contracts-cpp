// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/credential_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto;
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class CredentialConfig;
class CredentialConfigDefaultTypeInternal;
extern CredentialConfigDefaultTypeInternal _CredentialConfig_default_instance_;
class CredentialConfig_AdditionalPropertiesEntry_DoNotUse;
class CredentialConfig_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal;
extern CredentialConfig_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal _CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::contracts::v1::CredentialConfig* Arena::CreateMaybeMessage<::estafette::ci::contracts::v1::CredentialConfig>(Arena*);
template<> ::estafette::ci::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse* Arena::CreateMaybeMessage<::estafette::ci::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

class CredentialConfig_AdditionalPropertiesEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<CredentialConfig_AdditionalPropertiesEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Any,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<CredentialConfig_AdditionalPropertiesEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Any,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  CredentialConfig_AdditionalPropertiesEntry_DoNotUse();
  CredentialConfig_AdditionalPropertiesEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const CredentialConfig_AdditionalPropertiesEntry_DoNotUse& other);
  static const CredentialConfig_AdditionalPropertiesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const CredentialConfig_AdditionalPropertiesEntry_DoNotUse*>(&_CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "estafette.ci.contracts.v1.CredentialConfig.AdditionalPropertiesEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto);
    return ::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class CredentialConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.contracts.v1.CredentialConfig) */ {
 public:
  CredentialConfig();
  virtual ~CredentialConfig();

  CredentialConfig(const CredentialConfig& from);
  CredentialConfig(CredentialConfig&& from) noexcept
    : CredentialConfig() {
    *this = ::std::move(from);
  }

  inline CredentialConfig& operator=(const CredentialConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline CredentialConfig& operator=(CredentialConfig&& from) noexcept {
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
  static const CredentialConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CredentialConfig* internal_default_instance() {
    return reinterpret_cast<const CredentialConfig*>(
               &_CredentialConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CredentialConfig* other);
  friend void swap(CredentialConfig& a, CredentialConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CredentialConfig* New() const final {
    return CreateMaybeMessage<CredentialConfig>(nullptr);
  }

  CredentialConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CredentialConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CredentialConfig& from);
  void MergeFrom(const CredentialConfig& from);
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
  void InternalSwap(CredentialConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.contracts.v1.CredentialConfig";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto);
    return ::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .google.protobuf.Any> additional_properties = 3;
  int additional_properties_size() const;
  void clear_additional_properties();
  static const int kAdditionalPropertiesFieldNumber = 3;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >&
      additional_properties() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >*
      mutable_additional_properties();

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

  // string type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);

  // @@protoc_insertion_point(class_scope:estafette.ci.contracts.v1.CredentialConfig)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      CredentialConfig_AdditionalPropertiesEntry_DoNotUse,
      std::string, PROTOBUF_NAMESPACE_ID::Any,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > additional_properties_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CredentialConfig

// string name = 1;
inline void CredentialConfig::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CredentialConfig::name() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.CredentialConfig.name)
  return name_.GetNoArena();
}
inline void CredentialConfig::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.CredentialConfig.name)
}
inline void CredentialConfig::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.CredentialConfig.name)
}
inline void CredentialConfig::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.CredentialConfig.name)
}
inline void CredentialConfig::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.CredentialConfig.name)
}
inline std::string* CredentialConfig::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.CredentialConfig.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CredentialConfig::release_name() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.CredentialConfig.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CredentialConfig::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.CredentialConfig.name)
}

// string type = 2;
inline void CredentialConfig::clear_type() {
  type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CredentialConfig::type() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.CredentialConfig.type)
  return type_.GetNoArena();
}
inline void CredentialConfig::set_type(const std::string& value) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.CredentialConfig.type)
}
inline void CredentialConfig::set_type(std::string&& value) {
  
  type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.CredentialConfig.type)
}
inline void CredentialConfig::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.CredentialConfig.type)
}
inline void CredentialConfig::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.CredentialConfig.type)
}
inline std::string* CredentialConfig::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.CredentialConfig.type)
  return type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CredentialConfig::release_type() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.CredentialConfig.type)
  
  return type_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CredentialConfig::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.CredentialConfig.type)
}

// map<string, .google.protobuf.Any> additional_properties = 3;
inline int CredentialConfig::additional_properties_size() const {
  return additional_properties_.size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >&
CredentialConfig::additional_properties() const {
  // @@protoc_insertion_point(field_map:estafette.ci.contracts.v1.CredentialConfig.additional_properties)
  return additional_properties_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Any >*
CredentialConfig::mutable_additional_properties() {
  // @@protoc_insertion_point(field_mutable_map:estafette.ci.contracts.v1.CredentialConfig.additional_properties)
  return additional_properties_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fcredential_5fconfig_2eproto
