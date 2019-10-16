// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/credential_config.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2fcredential_5fconfig_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2fcredential_5fconfig_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto 

namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto
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
namespace google {
namespace protobuf {
template<> ::contracts::v1::CredentialConfig* Arena::CreateMaybeMessage<::contracts::v1::CredentialConfig>(Arena*);
template<> ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse* Arena::CreateMaybeMessage<::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class CredentialConfig_AdditionalPropertiesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<CredentialConfig_AdditionalPropertiesEntry_DoNotUse, 
    ::std::string, ::google::protobuf::Any,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<CredentialConfig_AdditionalPropertiesEntry_DoNotUse, 
    ::std::string, ::google::protobuf::Any,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  CredentialConfig_AdditionalPropertiesEntry_DoNotUse();
  CredentialConfig_AdditionalPropertiesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const CredentialConfig_AdditionalPropertiesEntry_DoNotUse& other);
  static const CredentialConfig_AdditionalPropertiesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const CredentialConfig_AdditionalPropertiesEntry_DoNotUse*>(&_CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class CredentialConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.CredentialConfig) */ {
 public:
  CredentialConfig();
  virtual ~CredentialConfig();

  CredentialConfig(const CredentialConfig& from);

  inline CredentialConfig& operator=(const CredentialConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CredentialConfig(CredentialConfig&& from) noexcept
    : CredentialConfig() {
    *this = ::std::move(from);
  }

  inline CredentialConfig& operator=(CredentialConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
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
    return CreateMaybeMessage<CredentialConfig>(NULL);
  }

  CredentialConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CredentialConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CredentialConfig& from);
  void MergeFrom(const CredentialConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CredentialConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .google.protobuf.Any> additional_properties = 3;
  int additional_properties_size() const;
  void clear_additional_properties();
  static const int kAdditionalPropertiesFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >&
      additional_properties() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >*
      mutable_additional_properties();

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // @@protoc_insertion_point(class_scope:contracts.v1.CredentialConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      CredentialConfig_AdditionalPropertiesEntry_DoNotUse,
      ::std::string, ::google::protobuf::Any,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > additional_properties_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::TableStruct;
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
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CredentialConfig::name() const {
  // @@protoc_insertion_point(field_get:contracts.v1.CredentialConfig.name)
  return name_.GetNoArena();
}
inline void CredentialConfig::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.CredentialConfig.name)
}
#if LANG_CXX11
inline void CredentialConfig::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.CredentialConfig.name)
}
#endif
inline void CredentialConfig::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.CredentialConfig.name)
}
inline void CredentialConfig::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.CredentialConfig.name)
}
inline ::std::string* CredentialConfig::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.CredentialConfig.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CredentialConfig::release_name() {
  // @@protoc_insertion_point(field_release:contracts.v1.CredentialConfig.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CredentialConfig::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.CredentialConfig.name)
}

// string type = 2;
inline void CredentialConfig::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CredentialConfig::type() const {
  // @@protoc_insertion_point(field_get:contracts.v1.CredentialConfig.type)
  return type_.GetNoArena();
}
inline void CredentialConfig::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.CredentialConfig.type)
}
#if LANG_CXX11
inline void CredentialConfig::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.CredentialConfig.type)
}
#endif
inline void CredentialConfig::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.CredentialConfig.type)
}
inline void CredentialConfig::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.CredentialConfig.type)
}
inline ::std::string* CredentialConfig::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.CredentialConfig.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CredentialConfig::release_type() {
  // @@protoc_insertion_point(field_release:contracts.v1.CredentialConfig.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CredentialConfig::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.CredentialConfig.type)
}

// map<string, .google.protobuf.Any> additional_properties = 3;
inline int CredentialConfig::additional_properties_size() const {
  return additional_properties_.size();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >&
CredentialConfig::additional_properties() const {
  // @@protoc_insertion_point(field_map:contracts.v1.CredentialConfig.additional_properties)
  return additional_properties_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >*
CredentialConfig::mutable_additional_properties() {
  // @@protoc_insertion_point(field_mutable_map:contracts.v1.CredentialConfig.additional_properties)
  return additional_properties_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2fcredential_5fconfig_2eproto
