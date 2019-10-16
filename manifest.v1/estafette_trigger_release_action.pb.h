// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_trigger_release_action.proto

#ifndef PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto
#define PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto 

namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto {
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
}  // namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto
namespace manifest {
namespace v1 {
class EstafetteTriggerReleaseAction;
class EstafetteTriggerReleaseActionDefaultTypeInternal;
extern EstafetteTriggerReleaseActionDefaultTypeInternal _EstafetteTriggerReleaseAction_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> ::manifest::v1::EstafetteTriggerReleaseAction* Arena::CreateMaybeMessage<::manifest::v1::EstafetteTriggerReleaseAction>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteTriggerReleaseAction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:manifest.v1.EstafetteTriggerReleaseAction) */ {
 public:
  EstafetteTriggerReleaseAction();
  virtual ~EstafetteTriggerReleaseAction();

  EstafetteTriggerReleaseAction(const EstafetteTriggerReleaseAction& from);

  inline EstafetteTriggerReleaseAction& operator=(const EstafetteTriggerReleaseAction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EstafetteTriggerReleaseAction(EstafetteTriggerReleaseAction&& from) noexcept
    : EstafetteTriggerReleaseAction() {
    *this = ::std::move(from);
  }

  inline EstafetteTriggerReleaseAction& operator=(EstafetteTriggerReleaseAction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EstafetteTriggerReleaseAction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteTriggerReleaseAction* internal_default_instance() {
    return reinterpret_cast<const EstafetteTriggerReleaseAction*>(
               &_EstafetteTriggerReleaseAction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafetteTriggerReleaseAction* other);
  friend void swap(EstafetteTriggerReleaseAction& a, EstafetteTriggerReleaseAction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteTriggerReleaseAction* New() const final {
    return CreateMaybeMessage<EstafetteTriggerReleaseAction>(NULL);
  }

  EstafetteTriggerReleaseAction* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteTriggerReleaseAction>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EstafetteTriggerReleaseAction& from);
  void MergeFrom(const EstafetteTriggerReleaseAction& from);
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
  void InternalSwap(EstafetteTriggerReleaseAction* other);
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

  // string target = 1;
  void clear_target();
  static const int kTargetFieldNumber = 1;
  const ::std::string& target() const;
  void set_target(const ::std::string& value);
  #if LANG_CXX11
  void set_target(::std::string&& value);
  #endif
  void set_target(const char* value);
  void set_target(const char* value, size_t size);
  ::std::string* mutable_target();
  ::std::string* release_target();
  void set_allocated_target(::std::string* target);

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

  // string version = 3;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:manifest.v1.EstafetteTriggerReleaseAction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr target_;
  ::google::protobuf::internal::ArenaStringPtr action_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafetteTriggerReleaseAction

// string target = 1;
inline void EstafetteTriggerReleaseAction::clear_target() {
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteTriggerReleaseAction::target() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteTriggerReleaseAction.target)
  return target_.GetNoArena();
}
inline void EstafetteTriggerReleaseAction::set_target(const ::std::string& value) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteTriggerReleaseAction.target)
}
#if LANG_CXX11
inline void EstafetteTriggerReleaseAction::set_target(::std::string&& value) {
  
  target_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteTriggerReleaseAction.target)
}
#endif
inline void EstafetteTriggerReleaseAction::set_target(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteTriggerReleaseAction.target)
}
inline void EstafetteTriggerReleaseAction::set_target(const char* value, size_t size) {
  
  target_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteTriggerReleaseAction.target)
}
inline ::std::string* EstafetteTriggerReleaseAction::mutable_target() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteTriggerReleaseAction.target)
  return target_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteTriggerReleaseAction::release_target() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteTriggerReleaseAction.target)
  
  return target_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteTriggerReleaseAction::set_allocated_target(::std::string* target) {
  if (target != NULL) {
    
  } else {
    
  }
  target_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), target);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteTriggerReleaseAction.target)
}

// string action = 2;
inline void EstafetteTriggerReleaseAction::clear_action() {
  action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteTriggerReleaseAction::action() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteTriggerReleaseAction.action)
  return action_.GetNoArena();
}
inline void EstafetteTriggerReleaseAction::set_action(const ::std::string& value) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteTriggerReleaseAction.action)
}
#if LANG_CXX11
inline void EstafetteTriggerReleaseAction::set_action(::std::string&& value) {
  
  action_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteTriggerReleaseAction.action)
}
#endif
inline void EstafetteTriggerReleaseAction::set_action(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteTriggerReleaseAction.action)
}
inline void EstafetteTriggerReleaseAction::set_action(const char* value, size_t size) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteTriggerReleaseAction.action)
}
inline ::std::string* EstafetteTriggerReleaseAction::mutable_action() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteTriggerReleaseAction.action)
  return action_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteTriggerReleaseAction::release_action() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteTriggerReleaseAction.action)
  
  return action_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteTriggerReleaseAction::set_allocated_action(::std::string* action) {
  if (action != NULL) {
    
  } else {
    
  }
  action_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), action);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteTriggerReleaseAction.action)
}

// string version = 3;
inline void EstafetteTriggerReleaseAction::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafetteTriggerReleaseAction::version() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafetteTriggerReleaseAction.version)
  return version_.GetNoArena();
}
inline void EstafetteTriggerReleaseAction::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafetteTriggerReleaseAction.version)
}
#if LANG_CXX11
inline void EstafetteTriggerReleaseAction::set_version(::std::string&& value) {
  
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafetteTriggerReleaseAction.version)
}
#endif
inline void EstafetteTriggerReleaseAction::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafetteTriggerReleaseAction.version)
}
inline void EstafetteTriggerReleaseAction::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafetteTriggerReleaseAction.version)
}
inline ::std::string* EstafetteTriggerReleaseAction::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafetteTriggerReleaseAction.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafetteTriggerReleaseAction::release_version() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafetteTriggerReleaseAction.version)
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteTriggerReleaseAction::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafetteTriggerReleaseAction.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto