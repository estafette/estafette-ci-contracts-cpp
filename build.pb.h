// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: build.proto

#ifndef PROTOBUF_INCLUDED_build_2eproto
#define PROTOBUF_INCLUDED_build_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "label.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_build_2eproto 

namespace protobuf_build_2eproto {
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
}  // namespace protobuf_build_2eproto
namespace contracts {
namespace v1 {
class Build;
class BuildDefaultTypeInternal;
extern BuildDefaultTypeInternal _Build_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::Build* Arena::CreateMaybeMessage<::contracts::v1::Build>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

enum Build_Corpus {
  Build_Corpus_UNIVERSAL = 0,
  Build_Corpus_WEB = 1,
  Build_Corpus_IMAGES = 2,
  Build_Corpus_LOCAL = 3,
  Build_Corpus_NEWS = 4,
  Build_Corpus_PRODUCTS = 5,
  Build_Corpus_VIDEO = 6,
  Build_Corpus_Build_Corpus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Build_Corpus_Build_Corpus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Build_Corpus_IsValid(int value);
const Build_Corpus Build_Corpus_Corpus_MIN = Build_Corpus_UNIVERSAL;
const Build_Corpus Build_Corpus_Corpus_MAX = Build_Corpus_VIDEO;
const int Build_Corpus_Corpus_ARRAYSIZE = Build_Corpus_Corpus_MAX + 1;

const ::google::protobuf::EnumDescriptor* Build_Corpus_descriptor();
inline const ::std::string& Build_Corpus_Name(Build_Corpus value) {
  return ::google::protobuf::internal::NameOfEnum(
    Build_Corpus_descriptor(), value);
}
inline bool Build_Corpus_Parse(
    const ::std::string& name, Build_Corpus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Build_Corpus>(
    Build_Corpus_descriptor(), name, value);
}
// ===================================================================

class Build : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.Build) */ {
 public:
  Build();
  virtual ~Build();

  Build(const Build& from);

  inline Build& operator=(const Build& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Build(Build&& from) noexcept
    : Build() {
    *this = ::std::move(from);
  }

  inline Build& operator=(Build&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Build& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Build* internal_default_instance() {
    return reinterpret_cast<const Build*>(
               &_Build_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Build* other);
  friend void swap(Build& a, Build& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Build* New() const final {
    return CreateMaybeMessage<Build>(NULL);
  }

  Build* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Build>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Build& from);
  void MergeFrom(const Build& from);
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
  void InternalSwap(Build* other);
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

  typedef Build_Corpus Corpus;
  static const Corpus UNIVERSAL =
    Build_Corpus_UNIVERSAL;
  static const Corpus WEB =
    Build_Corpus_WEB;
  static const Corpus IMAGES =
    Build_Corpus_IMAGES;
  static const Corpus LOCAL =
    Build_Corpus_LOCAL;
  static const Corpus NEWS =
    Build_Corpus_NEWS;
  static const Corpus PRODUCTS =
    Build_Corpus_PRODUCTS;
  static const Corpus VIDEO =
    Build_Corpus_VIDEO;
  static inline bool Corpus_IsValid(int value) {
    return Build_Corpus_IsValid(value);
  }
  static const Corpus Corpus_MIN =
    Build_Corpus_Corpus_MIN;
  static const Corpus Corpus_MAX =
    Build_Corpus_Corpus_MAX;
  static const int Corpus_ARRAYSIZE =
    Build_Corpus_Corpus_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Corpus_descriptor() {
    return Build_Corpus_descriptor();
  }
  static inline const ::std::string& Corpus_Name(Corpus value) {
    return Build_Corpus_Name(value);
  }
  static inline bool Corpus_Parse(const ::std::string& name,
      Corpus* value) {
    return Build_Corpus_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .contracts.v1.Label labels = 9;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 9;
  ::contracts::v1::Label* mutable_labels(int index);
  ::google::protobuf::RepeatedPtrField< ::contracts::v1::Label >*
      mutable_labels();
  const ::contracts::v1::Label& labels(int index) const;
  ::contracts::v1::Label* add_labels();
  const ::google::protobuf::RepeatedPtrField< ::contracts::v1::Label >&
      labels() const;

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
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

  // string repo_source = 2;
  void clear_repo_source();
  static const int kRepoSourceFieldNumber = 2;
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

  // string repo_owner = 3;
  void clear_repo_owner();
  static const int kRepoOwnerFieldNumber = 3;
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

  // string repo_name = 4;
  void clear_repo_name();
  static const int kRepoNameFieldNumber = 4;
  const ::std::string& repo_name() const;
  void set_repo_name(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_name(::std::string&& value);
  #endif
  void set_repo_name(const char* value);
  void set_repo_name(const char* value, size_t size);
  ::std::string* mutable_repo_name();
  ::std::string* release_repo_name();
  void set_allocated_repo_name(::std::string* repo_name);

  // string repo_branch = 5;
  void clear_repo_branch();
  static const int kRepoBranchFieldNumber = 5;
  const ::std::string& repo_branch() const;
  void set_repo_branch(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_branch(::std::string&& value);
  #endif
  void set_repo_branch(const char* value);
  void set_repo_branch(const char* value, size_t size);
  ::std::string* mutable_repo_branch();
  ::std::string* release_repo_branch();
  void set_allocated_repo_branch(::std::string* repo_branch);

  // string repo_revision = 6;
  void clear_repo_revision();
  static const int kRepoRevisionFieldNumber = 6;
  const ::std::string& repo_revision() const;
  void set_repo_revision(const ::std::string& value);
  #if LANG_CXX11
  void set_repo_revision(::std::string&& value);
  #endif
  void set_repo_revision(const char* value);
  void set_repo_revision(const char* value, size_t size);
  ::std::string* mutable_repo_revision();
  ::std::string* release_repo_revision();
  void set_allocated_repo_revision(::std::string* repo_revision);

  // string build_version = 7;
  void clear_build_version();
  static const int kBuildVersionFieldNumber = 7;
  const ::std::string& build_version() const;
  void set_build_version(const ::std::string& value);
  #if LANG_CXX11
  void set_build_version(::std::string&& value);
  #endif
  void set_build_version(const char* value);
  void set_build_version(const char* value, size_t size);
  ::std::string* mutable_build_version();
  ::std::string* release_build_version();
  void set_allocated_build_version(::std::string* build_version);

  // string build_status = 8;
  void clear_build_status();
  static const int kBuildStatusFieldNumber = 8;
  const ::std::string& build_status() const;
  void set_build_status(const ::std::string& value);
  #if LANG_CXX11
  void set_build_status(::std::string&& value);
  #endif
  void set_build_status(const char* value);
  void set_build_status(const char* value, size_t size);
  ::std::string* mutable_build_status();
  ::std::string* release_build_status();
  void set_allocated_build_status(::std::string* build_status);

  // @@protoc_insertion_point(class_scope:contracts.v1.Build)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::contracts::v1::Label > labels_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr repo_source_;
  ::google::protobuf::internal::ArenaStringPtr repo_owner_;
  ::google::protobuf::internal::ArenaStringPtr repo_name_;
  ::google::protobuf::internal::ArenaStringPtr repo_branch_;
  ::google::protobuf::internal::ArenaStringPtr repo_revision_;
  ::google::protobuf::internal::ArenaStringPtr build_version_;
  ::google::protobuf::internal::ArenaStringPtr build_status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_build_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Build

// string id = 1;
inline void Build::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::id() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.id)
  return id_.GetNoArena();
}
inline void Build::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.id)
}
#if LANG_CXX11
inline void Build::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.id)
}
#endif
inline void Build::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.id)
}
inline void Build::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.id)
}
inline ::std::string* Build::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_id() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.id)
}

// string repo_source = 2;
inline void Build::clear_repo_source() {
  repo_source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::repo_source() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.repo_source)
  return repo_source_.GetNoArena();
}
inline void Build::set_repo_source(const ::std::string& value) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.repo_source)
}
#if LANG_CXX11
inline void Build::set_repo_source(::std::string&& value) {
  
  repo_source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.repo_source)
}
#endif
inline void Build::set_repo_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.repo_source)
}
inline void Build::set_repo_source(const char* value, size_t size) {
  
  repo_source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.repo_source)
}
inline ::std::string* Build::mutable_repo_source() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.repo_source)
  return repo_source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_repo_source() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.repo_source)
  
  return repo_source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_repo_source(::std::string* repo_source) {
  if (repo_source != NULL) {
    
  } else {
    
  }
  repo_source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_source);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.repo_source)
}

// string repo_owner = 3;
inline void Build::clear_repo_owner() {
  repo_owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::repo_owner() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.repo_owner)
  return repo_owner_.GetNoArena();
}
inline void Build::set_repo_owner(const ::std::string& value) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.repo_owner)
}
#if LANG_CXX11
inline void Build::set_repo_owner(::std::string&& value) {
  
  repo_owner_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.repo_owner)
}
#endif
inline void Build::set_repo_owner(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.repo_owner)
}
inline void Build::set_repo_owner(const char* value, size_t size) {
  
  repo_owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.repo_owner)
}
inline ::std::string* Build::mutable_repo_owner() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.repo_owner)
  return repo_owner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_repo_owner() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.repo_owner)
  
  return repo_owner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_repo_owner(::std::string* repo_owner) {
  if (repo_owner != NULL) {
    
  } else {
    
  }
  repo_owner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_owner);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.repo_owner)
}

// string repo_name = 4;
inline void Build::clear_repo_name() {
  repo_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::repo_name() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.repo_name)
  return repo_name_.GetNoArena();
}
inline void Build::set_repo_name(const ::std::string& value) {
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.repo_name)
}
#if LANG_CXX11
inline void Build::set_repo_name(::std::string&& value) {
  
  repo_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.repo_name)
}
#endif
inline void Build::set_repo_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.repo_name)
}
inline void Build::set_repo_name(const char* value, size_t size) {
  
  repo_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.repo_name)
}
inline ::std::string* Build::mutable_repo_name() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.repo_name)
  return repo_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_repo_name() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.repo_name)
  
  return repo_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_repo_name(::std::string* repo_name) {
  if (repo_name != NULL) {
    
  } else {
    
  }
  repo_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_name);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.repo_name)
}

// string repo_branch = 5;
inline void Build::clear_repo_branch() {
  repo_branch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::repo_branch() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.repo_branch)
  return repo_branch_.GetNoArena();
}
inline void Build::set_repo_branch(const ::std::string& value) {
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.repo_branch)
}
#if LANG_CXX11
inline void Build::set_repo_branch(::std::string&& value) {
  
  repo_branch_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.repo_branch)
}
#endif
inline void Build::set_repo_branch(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.repo_branch)
}
inline void Build::set_repo_branch(const char* value, size_t size) {
  
  repo_branch_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.repo_branch)
}
inline ::std::string* Build::mutable_repo_branch() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.repo_branch)
  return repo_branch_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_repo_branch() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.repo_branch)
  
  return repo_branch_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_repo_branch(::std::string* repo_branch) {
  if (repo_branch != NULL) {
    
  } else {
    
  }
  repo_branch_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_branch);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.repo_branch)
}

// string repo_revision = 6;
inline void Build::clear_repo_revision() {
  repo_revision_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::repo_revision() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.repo_revision)
  return repo_revision_.GetNoArena();
}
inline void Build::set_repo_revision(const ::std::string& value) {
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.repo_revision)
}
#if LANG_CXX11
inline void Build::set_repo_revision(::std::string&& value) {
  
  repo_revision_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.repo_revision)
}
#endif
inline void Build::set_repo_revision(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.repo_revision)
}
inline void Build::set_repo_revision(const char* value, size_t size) {
  
  repo_revision_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.repo_revision)
}
inline ::std::string* Build::mutable_repo_revision() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.repo_revision)
  return repo_revision_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_repo_revision() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.repo_revision)
  
  return repo_revision_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_repo_revision(::std::string* repo_revision) {
  if (repo_revision != NULL) {
    
  } else {
    
  }
  repo_revision_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), repo_revision);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.repo_revision)
}

// string build_version = 7;
inline void Build::clear_build_version() {
  build_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::build_version() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.build_version)
  return build_version_.GetNoArena();
}
inline void Build::set_build_version(const ::std::string& value) {
  
  build_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.build_version)
}
#if LANG_CXX11
inline void Build::set_build_version(::std::string&& value) {
  
  build_version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.build_version)
}
#endif
inline void Build::set_build_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  build_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.build_version)
}
inline void Build::set_build_version(const char* value, size_t size) {
  
  build_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.build_version)
}
inline ::std::string* Build::mutable_build_version() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.build_version)
  return build_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_build_version() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.build_version)
  
  return build_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_build_version(::std::string* build_version) {
  if (build_version != NULL) {
    
  } else {
    
  }
  build_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), build_version);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.build_version)
}

// string build_status = 8;
inline void Build::clear_build_status() {
  build_status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Build::build_status() const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.build_status)
  return build_status_.GetNoArena();
}
inline void Build::set_build_status(const ::std::string& value) {
  
  build_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.Build.build_status)
}
#if LANG_CXX11
inline void Build::set_build_status(::std::string&& value) {
  
  build_status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.Build.build_status)
}
#endif
inline void Build::set_build_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  build_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.Build.build_status)
}
inline void Build::set_build_status(const char* value, size_t size) {
  
  build_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.Build.build_status)
}
inline ::std::string* Build::mutable_build_status() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.build_status)
  return build_status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Build::release_build_status() {
  // @@protoc_insertion_point(field_release:contracts.v1.Build.build_status)
  
  return build_status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Build::set_allocated_build_status(::std::string* build_status) {
  if (build_status != NULL) {
    
  } else {
    
  }
  build_status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), build_status);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.Build.build_status)
}

// repeated .contracts.v1.Label labels = 9;
inline int Build::labels_size() const {
  return labels_.size();
}
inline ::contracts::v1::Label* Build::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:contracts.v1.Build.labels)
  return labels_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::contracts::v1::Label >*
Build::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:contracts.v1.Build.labels)
  return &labels_;
}
inline const ::contracts::v1::Label& Build::labels(int index) const {
  // @@protoc_insertion_point(field_get:contracts.v1.Build.labels)
  return labels_.Get(index);
}
inline ::contracts::v1::Label* Build::add_labels() {
  // @@protoc_insertion_point(field_add:contracts.v1.Build.labels)
  return labels_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::contracts::v1::Label >&
Build::labels() const {
  // @@protoc_insertion_point(field_list:contracts.v1.Build.labels)
  return labels_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::contracts::v1::Build_Corpus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::contracts::v1::Build_Corpus>() {
  return ::contracts::v1::Build_Corpus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_build_2eproto
