// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_git_trigger.proto

#ifndef PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto
#define PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto 

namespace protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto {
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto
namespace manifest {
namespace v1 {
class EstafetteGitTrigger;
class EstafetteGitTriggerDefaultTypeInternal;
extern EstafetteGitTriggerDefaultTypeInternal _EstafetteGitTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> ::manifest::v1::EstafetteGitTrigger* Arena::CreateMaybeMessage<::manifest::v1::EstafetteGitTrigger>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteGitTrigger : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:manifest.v1.EstafetteGitTrigger) */ {
 public:
  EstafetteGitTrigger();
  virtual ~EstafetteGitTrigger();

  EstafetteGitTrigger(const EstafetteGitTrigger& from);

  inline EstafetteGitTrigger& operator=(const EstafetteGitTrigger& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EstafetteGitTrigger(EstafetteGitTrigger&& from) noexcept
    : EstafetteGitTrigger() {
    *this = ::std::move(from);
  }

  inline EstafetteGitTrigger& operator=(EstafetteGitTrigger&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EstafetteGitTrigger& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteGitTrigger* internal_default_instance() {
    return reinterpret_cast<const EstafetteGitTrigger*>(
               &_EstafetteGitTrigger_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafetteGitTrigger* other);
  friend void swap(EstafetteGitTrigger& a, EstafetteGitTrigger& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteGitTrigger* New() const final {
    return CreateMaybeMessage<EstafetteGitTrigger>(NULL);
  }

  EstafetteGitTrigger* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteGitTrigger>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EstafetteGitTrigger& from);
  void MergeFrom(const EstafetteGitTrigger& from);
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
  void InternalSwap(EstafetteGitTrigger* other);
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

  // string event = 1;
  void clear_event();
  static const int kEventFieldNumber = 1;
  const ::std::string& event() const;
  void set_event(const ::std::string& value);
  #if LANG_CXX11
  void set_event(::std::string&& value);
  #endif
  void set_event(const char* value);
  void set_event(const char* value, size_t size);
  ::std::string* mutable_event();
  ::std::string* release_event();
  void set_allocated_event(::std::string* event);

  // string repository = 2;
  void clear_repository();
  static const int kRepositoryFieldNumber = 2;
  const ::std::string& repository() const;
  void set_repository(const ::std::string& value);
  #if LANG_CXX11
  void set_repository(::std::string&& value);
  #endif
  void set_repository(const char* value);
  void set_repository(const char* value, size_t size);
  ::std::string* mutable_repository();
  ::std::string* release_repository();
  void set_allocated_repository(::std::string* repository);

  // string branch = 3;
  void clear_branch();
  static const int kBranchFieldNumber = 3;
  const ::std::string& branch() const;
  void set_branch(const ::std::string& value);
  #if LANG_CXX11
  void set_branch(::std::string&& value);
  #endif
  void set_branch(const char* value);
  void set_branch(const char* value, size_t size);
  ::std::string* mutable_branch();
  ::std::string* release_branch();
  void set_allocated_branch(::std::string* branch);

  // @@protoc_insertion_point(class_scope:manifest.v1.EstafetteGitTrigger)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr event_;
  ::google::protobuf::internal::ArenaStringPtr repository_;
  ::google::protobuf::internal::ArenaStringPtr branch_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafetteGitTrigger

// string event = 1;
inline void EstafetteGitTrigger::clear_event() {
  event_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteGitTrigger::event() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteGitTrigger.event)
  return event_.GetNoArena();
}
inline void EstafetteGitTrigger::set_event(const ::std::string& value) {
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteGitTrigger.event)
}
#if LANG_CXX11
inline void EstafetteGitTrigger::set_event(::std::string&& value) {
  
  event_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteGitTrigger.event)
}
#endif
inline void EstafetteGitTrigger::set_event(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteGitTrigger.event)
}
inline void EstafetteGitTrigger::set_event(const char* value, size_t size) {
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteGitTrigger.event)
}
inline ::std::string* EstafetteGitTrigger::mutable_event() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteGitTrigger.event)
  return event_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteGitTrigger::release_event() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteGitTrigger.event)
  
  return event_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitTrigger::set_allocated_event(::std::string* event) {
  if (event != NULL) {
    
  } else {
    
  }
  event_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), event);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteGitTrigger.event)
}

// string repository = 2;
inline void EstafetteGitTrigger::clear_repository() {
  repository_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteGitTrigger::repository() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteGitTrigger.repository)
  return repository_.GetNoArena();
}
inline void EstafetteGitTrigger::set_repository(const ::std::string& value) {
  
  repository_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteGitTrigger.repository)
}
#if LANG_CXX11
inline void EstafetteGitTrigger::set_repository(::std::string&& value) {
  
  repository_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteGitTrigger.repository)
}
#endif
inline void EstafetteGitTrigger::set_repository(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repository_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteGitTrigger.repository)
}
inline void EstafetteGitTrigger::set_repository(const char* value, size_t size) {
  
  repository_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteGitTrigger.repository)
}
inline ::std::string* EstafetteGitTrigger::mutable_repository() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteGitTrigger.repository)
  return repository_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteGitTrigger::release_repository() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteGitTrigger.repository)
  
  return repository_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitTrigger::set_allocated_repository(::std::string* repository) {
  if (repository != NULL) {
    
  } else {
    
  }
  repository_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repository);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteGitTrigger.repository)
}

// string branch = 3;
inline void EstafetteGitTrigger::clear_branch() {
  branch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteGitTrigger::branch() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteGitTrigger.branch)
  return branch_.GetNoArena();
}
inline void EstafetteGitTrigger::set_branch(const ::std::string& value) {
  
  branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteGitTrigger.branch)
}
#if LANG_CXX11
inline void EstafetteGitTrigger::set_branch(::std::string&& value) {
  
  branch_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteGitTrigger.branch)
}
#endif
inline void EstafetteGitTrigger::set_branch(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteGitTrigger.branch)
}
inline void EstafetteGitTrigger::set_branch(const char* value, size_t size) {
  
  branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteGitTrigger.branch)
}
inline ::std::string* EstafetteGitTrigger::mutable_branch() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteGitTrigger.branch)
  return branch_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteGitTrigger::release_branch() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteGitTrigger.branch)
  
  return branch_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteGitTrigger::set_allocated_branch(::std::string* branch) {
  if (branch != NULL) {
    
  } else {
    
  }
  branch_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), branch);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteGitTrigger.branch)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto
