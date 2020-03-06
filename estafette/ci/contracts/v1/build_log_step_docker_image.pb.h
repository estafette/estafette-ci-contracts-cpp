// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/build_log_step_docker_image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto;
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class BuildLogStepDockerImage;
class BuildLogStepDockerImageDefaultTypeInternal;
extern BuildLogStepDockerImageDefaultTypeInternal _BuildLogStepDockerImage_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::contracts::v1::BuildLogStepDockerImage* Arena::CreateMaybeMessage<::estafette::ci::contracts::v1::BuildLogStepDockerImage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

class BuildLogStepDockerImage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.contracts.v1.BuildLogStepDockerImage) */ {
 public:
  BuildLogStepDockerImage();
  virtual ~BuildLogStepDockerImage();

  BuildLogStepDockerImage(const BuildLogStepDockerImage& from);
  BuildLogStepDockerImage(BuildLogStepDockerImage&& from) noexcept
    : BuildLogStepDockerImage() {
    *this = ::std::move(from);
  }

  inline BuildLogStepDockerImage& operator=(const BuildLogStepDockerImage& from) {
    CopyFrom(from);
    return *this;
  }
  inline BuildLogStepDockerImage& operator=(BuildLogStepDockerImage&& from) noexcept {
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
  static const BuildLogStepDockerImage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BuildLogStepDockerImage* internal_default_instance() {
    return reinterpret_cast<const BuildLogStepDockerImage*>(
               &_BuildLogStepDockerImage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BuildLogStepDockerImage* other);
  friend void swap(BuildLogStepDockerImage& a, BuildLogStepDockerImage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BuildLogStepDockerImage* New() const final {
    return CreateMaybeMessage<BuildLogStepDockerImage>(nullptr);
  }

  BuildLogStepDockerImage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BuildLogStepDockerImage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BuildLogStepDockerImage& from);
  void MergeFrom(const BuildLogStepDockerImage& from);
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
  void InternalSwap(BuildLogStepDockerImage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.contracts.v1.BuildLogStepDockerImage";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto);
    return ::descriptor_table_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

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

  // string tag = 2;
  void clear_tag();
  static const int kTagFieldNumber = 2;
  const std::string& tag() const;
  void set_tag(const std::string& value);
  void set_tag(std::string&& value);
  void set_tag(const char* value);
  void set_tag(const char* value, size_t size);
  std::string* mutable_tag();
  std::string* release_tag();
  void set_allocated_tag(std::string* tag);

  // string error = 6;
  void clear_error();
  static const int kErrorFieldNumber = 6;
  const std::string& error() const;
  void set_error(const std::string& value);
  void set_error(std::string&& value);
  void set_error(const char* value);
  void set_error(const char* value, size_t size);
  std::string* mutable_error();
  std::string* release_error();
  void set_allocated_error(std::string* error);

  // .google.protobuf.Duration pull_duration = 5;
  bool has_pull_duration() const;
  void clear_pull_duration();
  static const int kPullDurationFieldNumber = 5;
  const PROTOBUF_NAMESPACE_ID::Duration& pull_duration() const;
  PROTOBUF_NAMESPACE_ID::Duration* release_pull_duration();
  PROTOBUF_NAMESPACE_ID::Duration* mutable_pull_duration();
  void set_allocated_pull_duration(PROTOBUF_NAMESPACE_ID::Duration* pull_duration);

  // int64 image_size = 4;
  void clear_image_size();
  static const int kImageSizeFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::int64 image_size() const;
  void set_image_size(::PROTOBUF_NAMESPACE_ID::int64 value);

  // bool is_pulled = 3;
  void clear_is_pulled();
  static const int kIsPulledFieldNumber = 3;
  bool is_pulled() const;
  void set_is_pulled(bool value);

  // bool is_trusted = 7;
  void clear_is_trusted();
  static const int kIsTrustedFieldNumber = 7;
  bool is_trusted() const;
  void set_is_trusted(bool value);

  // @@protoc_insertion_point(class_scope:estafette.ci.contracts.v1.BuildLogStepDockerImage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tag_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_;
  PROTOBUF_NAMESPACE_ID::Duration* pull_duration_;
  ::PROTOBUF_NAMESPACE_ID::int64 image_size_;
  bool is_pulled_;
  bool is_trusted_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BuildLogStepDockerImage

// string name = 1;
inline void BuildLogStepDockerImage::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BuildLogStepDockerImage::name() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
  return name_.GetNoArena();
}
inline void BuildLogStepDockerImage::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
}
inline void BuildLogStepDockerImage::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
}
inline void BuildLogStepDockerImage::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
}
inline void BuildLogStepDockerImage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
}
inline std::string* BuildLogStepDockerImage::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BuildLogStepDockerImage::release_name() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BuildLogStepDockerImage::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.BuildLogStepDockerImage.name)
}

// string tag = 2;
inline void BuildLogStepDockerImage::clear_tag() {
  tag_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BuildLogStepDockerImage::tag() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
  return tag_.GetNoArena();
}
inline void BuildLogStepDockerImage::set_tag(const std::string& value) {
  
  tag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
}
inline void BuildLogStepDockerImage::set_tag(std::string&& value) {
  
  tag_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
}
inline void BuildLogStepDockerImage::set_tag(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  tag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
}
inline void BuildLogStepDockerImage::set_tag(const char* value, size_t size) {
  
  tag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
}
inline std::string* BuildLogStepDockerImage::mutable_tag() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
  return tag_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BuildLogStepDockerImage::release_tag() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
  
  return tag_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BuildLogStepDockerImage::set_allocated_tag(std::string* tag) {
  if (tag != nullptr) {
    
  } else {
    
  }
  tag_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tag);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.BuildLogStepDockerImage.tag)
}

// bool is_pulled = 3;
inline void BuildLogStepDockerImage::clear_is_pulled() {
  is_pulled_ = false;
}
inline bool BuildLogStepDockerImage::is_pulled() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.is_pulled)
  return is_pulled_;
}
inline void BuildLogStepDockerImage::set_is_pulled(bool value) {
  
  is_pulled_ = value;
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.is_pulled)
}

// int64 image_size = 4;
inline void BuildLogStepDockerImage::clear_image_size() {
  image_size_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 BuildLogStepDockerImage::image_size() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.image_size)
  return image_size_;
}
inline void BuildLogStepDockerImage::set_image_size(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  image_size_ = value;
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.image_size)
}

// .google.protobuf.Duration pull_duration = 5;
inline bool BuildLogStepDockerImage::has_pull_duration() const {
  return this != internal_default_instance() && pull_duration_ != nullptr;
}
inline const PROTOBUF_NAMESPACE_ID::Duration& BuildLogStepDockerImage::pull_duration() const {
  const PROTOBUF_NAMESPACE_ID::Duration* p = pull_duration_;
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.pull_duration)
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Duration*>(
      &PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline PROTOBUF_NAMESPACE_ID::Duration* BuildLogStepDockerImage::release_pull_duration() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.BuildLogStepDockerImage.pull_duration)
  
  PROTOBUF_NAMESPACE_ID::Duration* temp = pull_duration_;
  pull_duration_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Duration* BuildLogStepDockerImage::mutable_pull_duration() {
  
  if (pull_duration_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Duration>(GetArenaNoVirtual());
    pull_duration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.BuildLogStepDockerImage.pull_duration)
  return pull_duration_;
}
inline void BuildLogStepDockerImage::set_allocated_pull_duration(PROTOBUF_NAMESPACE_ID::Duration* pull_duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pull_duration_);
  }
  if (pull_duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pull_duration)->GetArena();
    if (message_arena != submessage_arena) {
      pull_duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pull_duration, submessage_arena);
    }
    
  } else {
    
  }
  pull_duration_ = pull_duration;
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.BuildLogStepDockerImage.pull_duration)
}

// string error = 6;
inline void BuildLogStepDockerImage::clear_error() {
  error_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& BuildLogStepDockerImage::error() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
  return error_.GetNoArena();
}
inline void BuildLogStepDockerImage::set_error(const std::string& value) {
  
  error_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
}
inline void BuildLogStepDockerImage::set_error(std::string&& value) {
  
  error_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
}
inline void BuildLogStepDockerImage::set_error(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
}
inline void BuildLogStepDockerImage::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
}
inline std::string* BuildLogStepDockerImage::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
  return error_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* BuildLogStepDockerImage::release_error() {
  // @@protoc_insertion_point(field_release:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
  
  return error_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void BuildLogStepDockerImage::set_allocated_error(std::string* error) {
  if (error != nullptr) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.contracts.v1.BuildLogStepDockerImage.error)
}

// bool is_trusted = 7;
inline void BuildLogStepDockerImage::clear_is_trusted() {
  is_trusted_ = false;
}
inline bool BuildLogStepDockerImage::is_trusted() const {
  // @@protoc_insertion_point(field_get:estafette.ci.contracts.v1.BuildLogStepDockerImage.is_trusted)
  return is_trusted_;
}
inline void BuildLogStepDockerImage::set_is_trusted(bool value) {
  
  is_trusted_ = value;
  // @@protoc_insertion_point(field_set:estafette.ci.contracts.v1.BuildLogStepDockerImage.is_trusted)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fcontracts_2fv1_2fbuild_5flog_5fstep_5fdocker_5fimage_2eproto
