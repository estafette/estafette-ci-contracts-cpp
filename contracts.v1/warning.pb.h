// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/warning.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2fwarning_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2fwarning_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2fwarning_2eproto 

namespace protobuf_contracts_2ev1_2fwarning_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_contracts_2ev1_2fwarning_2eproto
namespace contracts {
namespace v1 {
class Warning;
class WarningDefaultTypeInternal;
extern WarningDefaultTypeInternal _Warning_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::Warning* Arena::CreateMaybeMessage<::contracts::v1::Warning>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class Warning : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.Warning) */ {
 public:
  Warning();
  virtual ~Warning();

  Warning(const Warning& from);

  inline Warning& operator=(const Warning& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Warning(Warning&& from) noexcept
    : Warning() {
    *this = ::std::move(from);
  }

  inline Warning& operator=(Warning&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Warning& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Warning* internal_default_instance() {
    return reinterpret_cast<const Warning*>(
               &_Warning_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Warning* other);
  friend void swap(Warning& a, Warning& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Warning* New() const final {
    return CreateMaybeMessage<Warning>(NULL);
  }

  Warning* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Warning>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Warning& from);
  void MergeFrom(const Warning& from);
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
  void InternalSwap(Warning* other);
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

  // string status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  const ::std::string& status() const;
  void set_status(const ::std::string& value);
  #if LANG_CXX11
  void set_status(::std::string&& value);
  #endif
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  ::std::string* mutable_status();
  ::std::string* release_status();
  void set_allocated_status(::std::string* status);

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:contracts.v1.Warning)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2fwarning_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Warning

// string status = 1;
inline void Warning::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Warning::status() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Warning.status)
  return status_.GetNoArena();
}
inline void Warning::set_status(const ::std::string& value) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Warning.status)
}
#if LANG_CXX11
inline void Warning::set_status(::std::string&& value) {
  
  status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Warning.status)
}
#endif
inline void Warning::set_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Warning.status)
}
inline void Warning::set_status(const char* value, size_t size) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Warning.status)
}
inline ::std::string* Warning::mutable_status() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Warning.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Warning::release_status() {
  // @@protoc_insertion_point(field_release:contracts.v1.Warning.status)
  
  return status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Warning::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    
  } else {
    
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Warning.status)
}

// string message = 2;
inline void Warning::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Warning::message() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Warning.message)
  return message_.GetNoArena();
}
inline void Warning::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Warning.message)
}
#if LANG_CXX11
inline void Warning::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Warning.message)
}
#endif
inline void Warning::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Warning.message)
}
inline void Warning::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Warning.message)
}
inline ::std::string* Warning::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Warning.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Warning::release_message() {
  // @@protoc_insertion_point(field_release:contracts.v1.Warning.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Warning::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Warning.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2fwarning_2eproto
