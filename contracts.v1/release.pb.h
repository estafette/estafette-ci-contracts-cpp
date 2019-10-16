// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/release.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2frelease_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2frelease_2eproto

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
#include "manifest.v1/estafette_event.pb.h"
#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2frelease_2eproto 

namespace protobuf_contracts_2ev1_2frelease_2eproto {
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
}  // namespace protobuf_contracts_2ev1_2frelease_2eproto
namespace contracts {
namespace v1 {
class Release;
class ReleaseDefaultTypeInternal;
extern ReleaseDefaultTypeInternal _Release_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::Release* Arena::CreateMaybeMessage<::contracts::v1::Release>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class Release : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.Release) */ {
 public:
  Release();
  virtual ~Release();

  Release(const Release& from);

  inline Release& operator=(const Release& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Release(Release&& from) noexcept
    : Release() {
    *this = ::std::move(from);
  }

  inline Release& operator=(Release&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Release& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Release* internal_default_instance() {
    return reinterpret_cast<const Release*>(
               &_Release_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Release* other);
  friend void swap(Release& a, Release& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Release* New() const final {
    return CreateMaybeMessage<Release>(NULL);
  }

  Release* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Release>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Release& from);
  void MergeFrom(const Release& from);
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
  void InternalSwap(Release* other);
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

  // repeated .manifest.v1.EstafetteEvent events = 8;
  int events_size() const;
  void clear_events();
  static const int kEventsFieldNumber = 8;
  ::manifest::v1::EstafetteEvent* mutable_events(int index);
  ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteEvent >*
      mutable_events();
  const ::manifest::v1::EstafetteEvent& events(int index) const;
  ::manifest::v1::EstafetteEvent* add_events();
  const ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteEvent >&
      events() const;

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

  // string action = 2;
  void clear_action();
  static const int kActionFieldNumber = 2;
  const ::std::string& action() const;
  void set_action(const ::std::string& value);
  #if LANG_CXX11
  void set_action(::std::string&& value);
  #endif
  void set_action(const char* value);
  void set_action(const char* value, size_t size);
  ::std::string* mutable_action();
  ::std::string* release_action();
  void set_allocated_action(::std::string* action);

  // string id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string repo_source = 4;
  void clear_repo_source();
  static const int kRepoSourceFieldNumber = 4;
  const ::std::string& repo_source() const;
  void set_repo_source(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_source(::std::string&& value);
  #endif
  void set_repo_source(const char* value);
  void set_repo_source(const char* value, size_t size);
  ::std::string* mutable_repo_source();
  ::std::string* release_repo_source();
  void set_allocated_repo_source(::std::string* repo_source);

  // string repo_owner = 5;
  void clear_repo_owner();
  static const int kRepoOwnerFieldNumber = 5;
  const ::std::string& repo_owner() const;
  void set_repo_owner(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_owner(::std::string&& value);
  #endif
  void set_repo_owner(const char* value);
  void set_repo_owner(const char* value, size_t size);
  ::std::string* mutable_repo_owner();
  ::std::string* release_repo_owner();
  void set_allocated_repo_owner(::std::string* repo_owner);

  // string release_version = 6;
  void clear_release_version();
  static const int kReleaseVersionFieldNumber = 6;
  const ::std::string& release_version() const;
  void set_release_version(const ::std::string& value);
  #if LANG_CXX11
  void set_release_version(::std::string&& value);
  #endif
  void set_release_version(const char* value);
  void set_release_version(const char* value, size_t size);
  ::std::string* mutable_release_version();
  ::std::string* release_release_version();
  void set_allocated_release_version(::std::string* release_version);

  // string release_status = 7;
  void clear_release_status();
  static const int kReleaseStatusFieldNumber = 7;
  const ::std::string& release_status() const;
  void set_release_status(const ::std::string& value);
  #if LANG_CXX11
  void set_release_status(::std::string&& value);
  #endif
  void set_release_status(const char* value);
  void set_release_status(const char* value, size_t size);
  ::std::string* mutable_release_status();
  ::std::string* release_release_status();
  void set_allocated_release_status(::std::string* release_status);

  // .google.protobuf.Timestamp inserted_at = 9;
  bool has_inserted_at() const;
  void clear_inserted_at();
  static const int kInsertedAtFieldNumber = 9;
  private:
  const ::google::protobuf::Timestamp& _internal_inserted_at() const;
  public:
  const ::google::protobuf::Timestamp& inserted_at() const;
  ::google::protobuf::Timestamp* release_inserted_at();
  ::google::protobuf::Timestamp* mutable_inserted_at();
  void set_allocated_inserted_at(::google::protobuf::Timestamp* inserted_at);

  // .google.protobuf.Timestamp updated_at = 10;
  bool has_updated_at() const;
  void clear_updated_at();
  static const int kUpdatedAtFieldNumber = 10;
  private:
  const ::google::protobuf::Timestamp& _internal_updated_at() const;
  public:
  const ::google::protobuf::Timestamp& updated_at() const;
  ::google::protobuf::Timestamp* release_updated_at();
  ::google::protobuf::Timestamp* mutable_updated_at();
  void set_allocated_updated_at(::google::protobuf::Timestamp* updated_at);

  // .google.protobuf.Duration duration = 11;
  bool has_duration() const;
  void clear_duration();
  static const int kDurationFieldNumber = 11;
  private:
  const ::google::protobuf::Duration& _internal_duration() const;
  public:
  const ::google::protobuf::Duration& duration() const;
  ::google::protobuf::Duration* release_duration();
  ::google::protobuf::Duration* mutable_duration();
  void set_allocated_duration(::google::protobuf::Duration* duration);

  // @@protoc_insertion_point(class_scope:contracts.v1.Release)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteEvent > events_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr action_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr repo_source_;
  ::google::protobuf::internal::ArenaStringPtr repo_owner_;
  ::google::protobuf::internal::ArenaStringPtr release_version_;
  ::google::protobuf::internal::ArenaStringPtr release_status_;
  ::google::protobuf::Timestamp* inserted_at_;
  ::google::protobuf::Timestamp* updated_at_;
  ::google::protobuf::Duration* duration_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2frelease_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Release

// string name = 1;
inline void Release::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::name() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.name)
  return name_.GetNoArena();
}
inline void Release::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.name)
}
#if LANG_CXX11
inline void Release::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.name)
}
#endif
inline void Release::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.name)
}
inline void Release::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.name)
}
inline ::std::string* Release::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_name() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.name)
}

// string action = 2;
inline void Release::clear_action() {
  action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::action() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.action)
  return action_.GetNoArena();
}
inline void Release::set_action(const ::std::string& value) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.action)
}
#if LANG_CXX11
inline void Release::set_action(::std::string&& value) {
  
  action_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.action)
}
#endif
inline void Release::set_action(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.action)
}
inline void Release::set_action(const char* value, size_t size) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.action)
}
inline ::std::string* Release::mutable_action() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.action)
  return action_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_action() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.action)
  
  return action_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_action(::std::string* action) {
  if (action != NULL) {
    
  } else {
    
  }
  action_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), action);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.action)
}

// string id = 3;
inline void Release::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::id() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.id)
  return id_.GetNoArena();
}
inline void Release::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.id)
}
#if LANG_CXX11
inline void Release::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.id)
}
#endif
inline void Release::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.id)
}
inline void Release::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.id)
}
inline ::std::string* Release::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_id() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.id)
}

// string repo_source = 4;
inline void Release::clear_repo_source() {
  repo_source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::repo_source() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.repo_source)
  return repo_source_.GetNoArena();
}
inline void Release::set_repo_source(const ::std::string& value) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.repo_source)
}
#if LANG_CXX11
inline void Release::set_repo_source(::std::string&& value) {
  
  repo_source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.repo_source)
}
#endif
inline void Release::set_repo_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.repo_source)
}
inline void Release::set_repo_source(const char* value, size_t size) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.repo_source)
}
inline ::std::string* Release::mutable_repo_source() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.repo_source)
  return repo_source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_repo_source() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.repo_source)
  
  return repo_source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_repo_source(::std::string* repo_source) {
  if (repo_source != NULL) {
    
  } else {
    
  }
  repo_source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_source);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.repo_source)
}

// string repo_owner = 5;
inline void Release::clear_repo_owner() {
  repo_owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::repo_owner() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.repo_owner)
  return repo_owner_.GetNoArena();
}
inline void Release::set_repo_owner(const ::std::string& value) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.repo_owner)
}
#if LANG_CXX11
inline void Release::set_repo_owner(::std::string&& value) {
  
  repo_owner_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.repo_owner)
}
#endif
inline void Release::set_repo_owner(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.repo_owner)
}
inline void Release::set_repo_owner(const char* value, size_t size) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.repo_owner)
}
inline ::std::string* Release::mutable_repo_owner() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.repo_owner)
  return repo_owner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_repo_owner() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.repo_owner)
  
  return repo_owner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_repo_owner(::std::string* repo_owner) {
  if (repo_owner != NULL) {
    
  } else {
    
  }
  repo_owner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_owner);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.repo_owner)
}

// string release_version = 6;
inline void Release::clear_release_version() {
  release_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::release_version() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.release_version)
  return release_version_.GetNoArena();
}
inline void Release::set_release_version(const ::std::string& value) {
  
  release_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.release_version)
}
#if LANG_CXX11
inline void Release::set_release_version(::std::string&& value) {
  
  release_version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.release_version)
}
#endif
inline void Release::set_release_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  release_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.release_version)
}
inline void Release::set_release_version(const char* value, size_t size) {
  
  release_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.release_version)
}
inline ::std::string* Release::mutable_release_version() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.release_version)
  return release_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_release_version() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.release_version)
  
  return release_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_release_version(::std::string* release_version) {
  if (release_version != NULL) {
    
  } else {
    
  }
  release_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), release_version);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.release_version)
}

// string release_status = 7;
inline void Release::clear_release_status() {
  release_status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Release::release_status() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.release_status)
  return release_status_.GetNoArena();
}
inline void Release::set_release_status(const ::std::string& value) {
  
  release_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Release.release_status)
}
#if LANG_CXX11
inline void Release::set_release_status(::std::string&& value) {
  
  release_status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Release.release_status)
}
#endif
inline void Release::set_release_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  release_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Release.release_status)
}
inline void Release::set_release_status(const char* value, size_t size) {
  
  release_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Release.release_status)
}
inline ::std::string* Release::mutable_release_status() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.release_status)
  return release_status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Release::release_release_status() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.release_status)
  
  return release_status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Release::set_allocated_release_status(::std::string* release_status) {
  if (release_status != NULL) {
    
  } else {
    
  }
  release_status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), release_status);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.release_status)
}

// repeated .manifest.v1.EstafetteEvent events = 8;
inline int Release::events_size() const {
  return events_.size();
}
inline ::manifest::v1::EstafetteEvent* Release::mutable_events(int index) {
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.events)
  return events_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteEvent >*
Release::mutable_events() {
  // @@protoc_insertion_point(field_mutable_list:contracts.v1.Release.events)
  return &events_;
}
inline const ::manifest::v1::EstafetteEvent& Release::events(int index) const {
  // @@protoc_insertion_point(field_get:contracts.v1.Release.events)
  return events_.Get(index);
}
inline ::manifest::v1::EstafetteEvent* Release::add_events() {
  // @@protoc_insertion_point(field_add:contracts.v1.Release.events)
  return events_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteEvent >&
Release::events() const {
  // @@protoc_insertion_point(field_list:contracts.v1.Release.events)
  return events_;
}

// .google.protobuf.Timestamp inserted_at = 9;
inline bool Release::has_inserted_at() const {
  return this != internal_default_instance() && inserted_at_ != NULL;
}
inline const ::google::protobuf::Timestamp& Release::_internal_inserted_at() const {
  return *inserted_at_;
}
inline const ::google::protobuf::Timestamp& Release::inserted_at() const {
  const ::google::protobuf::Timestamp* p = inserted_at_;
  // @@protoc_insertion_point(field_get:contracts.v1.Release.inserted_at)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Release::release_inserted_at() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.inserted_at)
  
  ::google::protobuf::Timestamp* temp = inserted_at_;
  inserted_at_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Release::mutable_inserted_at() {
  
  if (inserted_at_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    inserted_at_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.inserted_at)
  return inserted_at_;
}
inline void Release::set_allocated_inserted_at(::google::protobuf::Timestamp* inserted_at) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(inserted_at_);
  }
  if (inserted_at) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(inserted_at)->GetArena();
    if (message_arena != submessage_arena) {
      inserted_at = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, inserted_at, submessage_arena);
    }
    
  } else {
    
  }
  inserted_at_ = inserted_at;
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.inserted_at)
}

// .google.protobuf.Timestamp updated_at = 10;
inline bool Release::has_updated_at() const {
  return this != internal_default_instance() && updated_at_ != NULL;
}
inline const ::google::protobuf::Timestamp& Release::_internal_updated_at() const {
  return *updated_at_;
}
inline const ::google::protobuf::Timestamp& Release::updated_at() const {
  const ::google::protobuf::Timestamp* p = updated_at_;
  // @@protoc_insertion_point(field_get:contracts.v1.Release.updated_at)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Release::release_updated_at() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.updated_at)
  
  ::google::protobuf::Timestamp* temp = updated_at_;
  updated_at_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Release::mutable_updated_at() {
  
  if (updated_at_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    updated_at_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.updated_at)
  return updated_at_;
}
inline void Release::set_allocated_updated_at(::google::protobuf::Timestamp* updated_at) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(updated_at_);
  }
  if (updated_at) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(updated_at)->GetArena();
    if (message_arena != submessage_arena) {
      updated_at = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, updated_at, submessage_arena);
    }
    
  } else {
    
  }
  updated_at_ = updated_at;
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.updated_at)
}

// .google.protobuf.Duration duration = 11;
inline bool Release::has_duration() const {
  return this != internal_default_instance() && duration_ != NULL;
}
inline const ::google::protobuf::Duration& Release::_internal_duration() const {
  return *duration_;
}
inline const ::google::protobuf::Duration& Release::duration() const {
  const ::google::protobuf::Duration* p = duration_;
  // @@protoc_insertion_point(field_get:contracts.v1.Release.duration)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Duration*>(
      &::google::protobuf::_Duration_default_instance_);
}
inline ::google::protobuf::Duration* Release::release_duration() {
  // @@protoc_insertion_point(field_release:contracts.v1.Release.duration)
  
  ::google::protobuf::Duration* temp = duration_;
  duration_ = NULL;
  return temp;
}
inline ::google::protobuf::Duration* Release::mutable_duration() {
  
  if (duration_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Duration>(GetArenaNoVirtual());
    duration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.Release.duration)
  return duration_;
}
inline void Release::set_allocated_duration(::google::protobuf::Duration* duration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(duration_);
  }
  if (duration) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(duration)->GetArena();
    if (message_arena != submessage_arena) {
      duration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, duration, submessage_arena);
    }
    
  } else {
    
  }
  duration_ = duration;
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Release.duration)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2frelease_2eproto
