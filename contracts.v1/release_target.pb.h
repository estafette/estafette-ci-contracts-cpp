// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/release_target.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2frelease_5ftarget_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2frelease_5ftarget_2eproto

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
#include "manifest.v1/estafette_release_action.pb.h"
#include "contracts.v1/release.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2frelease_5ftarget_2eproto 

namespace protobuf_contracts_2ev1_2frelease_5ftarget_2eproto {
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
}  // namespace protobuf_contracts_2ev1_2frelease_5ftarget_2eproto
namespace contracts {
namespace v1 {
class ReleaseTarget;
class ReleaseTargetDefaultTypeInternal;
extern ReleaseTargetDefaultTypeInternal _ReleaseTarget_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::ReleaseTarget* Arena::CreateMaybeMessage<::contracts::v1::ReleaseTarget>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class ReleaseTarget : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.ReleaseTarget) */ {
 public:
  ReleaseTarget();
  virtual ~ReleaseTarget();

  ReleaseTarget(const ReleaseTarget& from);

  inline ReleaseTarget& operator=(const ReleaseTarget& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReleaseTarget(ReleaseTarget&& from) noexcept
    : ReleaseTarget() {
    *this = ::std::move(from);
  }

  inline ReleaseTarget& operator=(ReleaseTarget&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ReleaseTarget& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReleaseTarget* internal_default_instance() {
    return reinterpret_cast<const ReleaseTarget*>(
               &_ReleaseTarget_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ReleaseTarget* other);
  friend void swap(ReleaseTarget& a, ReleaseTarget& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReleaseTarget* New() const final {
    return CreateMaybeMessage<ReleaseTarget>(NULL);
  }

  ReleaseTarget* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ReleaseTarget>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ReleaseTarget& from);
  void MergeFrom(const ReleaseTarget& from);
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
  void InternalSwap(ReleaseTarget* other);
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

  // repeated .manifest.v1.EstafetteReleaseAction actions = 2;
  int actions_size() const;
  void clear_actions();
  static const int kActionsFieldNumber = 2;
  ::manifest::v1::EstafetteReleaseAction* mutable_actions(int index);
  ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteReleaseAction >*
      mutable_actions();
  const ::manifest::v1::EstafetteReleaseAction& actions(int index) const;
  ::manifest::v1::EstafetteReleaseAction* add_actions();
  const ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteReleaseAction >&
      actions() const;

  // repeated .contracts.v1.Release active_releases = 3;
  int active_releases_size() const;
  void clear_active_releases();
  static const int kActiveReleasesFieldNumber = 3;
  ::contracts::v1::Release* mutable_active_releases(int index);
  ::google::protobuf::RepeatedPtrField< ::contracts::v1::Release >*
      mutable_active_releases();
  const ::contracts::v1::Release& active_releases(int index) const;
  ::contracts::v1::Release* add_active_releases();
  const ::google::protobuf::RepeatedPtrField< ::contracts::v1::Release >&
      active_releases() const;

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

  // @@protoc_insertion_point(class_scope:contracts.v1.ReleaseTarget)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteReleaseAction > actions_;
  ::google::protobuf::RepeatedPtrField< ::contracts::v1::Release > active_releases_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2frelease_5ftarget_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReleaseTarget

// string name = 1;
inline void ReleaseTarget::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReleaseTarget::name() const {
  // @@protoc_insertion_point(field_get:contracts.v1.ReleaseTarget.name)
  return name_.GetNoArena();
}
inline void ReleaseTarget::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.ReleaseTarget.name)
}
#if LANG_CXX11
inline void ReleaseTarget::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.ReleaseTarget.name)
}
#endif
inline void ReleaseTarget::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.ReleaseTarget.name)
}
inline void ReleaseTarget::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.ReleaseTarget.name)
}
inline ::std::string* ReleaseTarget::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.ReleaseTarget.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReleaseTarget::release_name() {
  // @@protoc_insertion_point(field_release:contracts.v1.ReleaseTarget.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReleaseTarget::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.ReleaseTarget.name)
}

// repeated .manifest.v1.EstafetteReleaseAction actions = 2;
inline int ReleaseTarget::actions_size() const {
  return actions_.size();
}
inline ::manifest::v1::EstafetteReleaseAction* ReleaseTarget::mutable_actions(int index) {
  // @@protoc_insertion_point(field_mutable:contracts.v1.ReleaseTarget.actions)
  return actions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteReleaseAction >*
ReleaseTarget::mutable_actions() {
  // @@protoc_insertion_point(field_mutable_list:contracts.v1.ReleaseTarget.actions)
  return &actions_;
}
inline const ::manifest::v1::EstafetteReleaseAction& ReleaseTarget::actions(int index) const {
  // @@protoc_insertion_point(field_get:contracts.v1.ReleaseTarget.actions)
  return actions_.Get(index);
}
inline ::manifest::v1::EstafetteReleaseAction* ReleaseTarget::add_actions() {
  // @@protoc_insertion_point(field_add:contracts.v1.ReleaseTarget.actions)
  return actions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::manifest::v1::EstafetteReleaseAction >&
ReleaseTarget::actions() const {
  // @@protoc_insertion_point(field_list:contracts.v1.ReleaseTarget.actions)
  return actions_;
}

// repeated .contracts.v1.Release active_releases = 3;
inline int ReleaseTarget::active_releases_size() const {
  return active_releases_.size();
}
inline ::contracts::v1::Release* ReleaseTarget::mutable_active_releases(int index) {
  // @@protoc_insertion_point(field_mutable:contracts.v1.ReleaseTarget.active_releases)
  return active_releases_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::contracts::v1::Release >*
ReleaseTarget::mutable_active_releases() {
  // @@protoc_insertion_point(field_mutable_list:contracts.v1.ReleaseTarget.active_releases)
  return &active_releases_;
}
inline const ::contracts::v1::Release& ReleaseTarget::active_releases(int index) const {
  // @@protoc_insertion_point(field_get:contracts.v1.ReleaseTarget.active_releases)
  return active_releases_.Get(index);
}
inline ::contracts::v1::Release* ReleaseTarget::add_active_releases() {
  // @@protoc_insertion_point(field_add:contracts.v1.ReleaseTarget.active_releases)
  return active_releases_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::contracts::v1::Release >&
ReleaseTarget::active_releases() const {
  // @@protoc_insertion_point(field_list:contracts.v1.ReleaseTarget.active_releases)
  return active_releases_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2frelease_5ftarget_2eproto
