// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_pub_sub_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafettePubSubEvent;
class EstafettePubSubEventDefaultTypeInternal;
extern EstafettePubSubEventDefaultTypeInternal _EstafettePubSubEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::manifest::v1::EstafettePubSubEvent* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafettePubSubEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

class EstafettePubSubEvent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.manifest.v1.EstafettePubSubEvent) */ {
 public:
  EstafettePubSubEvent();
  virtual ~EstafettePubSubEvent();

  EstafettePubSubEvent(const EstafettePubSubEvent& from);
  EstafettePubSubEvent(EstafettePubSubEvent&& from) noexcept
    : EstafettePubSubEvent() {
    *this = ::std::move(from);
  }

  inline EstafettePubSubEvent& operator=(const EstafettePubSubEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline EstafettePubSubEvent& operator=(EstafettePubSubEvent&& from) noexcept {
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
  static const EstafettePubSubEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafettePubSubEvent* internal_default_instance() {
    return reinterpret_cast<const EstafettePubSubEvent*>(
               &_EstafettePubSubEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafettePubSubEvent* other);
  friend void swap(EstafettePubSubEvent& a, EstafettePubSubEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafettePubSubEvent* New() const final {
    return CreateMaybeMessage<EstafettePubSubEvent>(nullptr);
  }

  EstafettePubSubEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EstafettePubSubEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EstafettePubSubEvent& from);
  void MergeFrom(const EstafettePubSubEvent& from);
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
  void InternalSwap(EstafettePubSubEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.manifest.v1.EstafettePubSubEvent";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string project = 1;
  void clear_project();
  static const int kProjectFieldNumber = 1;
  const std::string& project() const;
  void set_project(const std::string& value);
  void set_project(std::string&& value);
  void set_project(const char* value);
  void set_project(const char* value, size_t size);
  std::string* mutable_project();
  std::string* release_project();
  void set_allocated_project(std::string* project);

  // string topic = 2;
  void clear_topic();
  static const int kTopicFieldNumber = 2;
  const std::string& topic() const;
  void set_topic(const std::string& value);
  void set_topic(std::string&& value);
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  std::string* mutable_topic();
  std::string* release_topic();
  void set_allocated_topic(std::string* topic);

  // @@protoc_insertion_point(class_scope:estafette.ci.manifest.v1.EstafettePubSubEvent)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr project_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr topic_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafettePubSubEvent

// string project = 1;
inline void EstafettePubSubEvent::clear_project() {
  project_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafettePubSubEvent::project() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
  return project_.GetNoArena();
}
inline void EstafettePubSubEvent::set_project(const std::string& value) {
  
  project_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
}
inline void EstafettePubSubEvent::set_project(std::string&& value) {
  
  project_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
}
inline void EstafettePubSubEvent::set_project(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  project_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
}
inline void EstafettePubSubEvent::set_project(const char* value, size_t size) {
  
  project_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
}
inline std::string* EstafettePubSubEvent::mutable_project() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
  return project_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafettePubSubEvent::release_project() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
  
  return project_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafettePubSubEvent::set_allocated_project(std::string* project) {
  if (project != nullptr) {
    
  } else {
    
  }
  project_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), project);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafettePubSubEvent.project)
}

// string topic = 2;
inline void EstafettePubSubEvent::clear_topic() {
  topic_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafettePubSubEvent::topic() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
  return topic_.GetNoArena();
}
inline void EstafettePubSubEvent::set_topic(const std::string& value) {
  
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
}
inline void EstafettePubSubEvent::set_topic(std::string&& value) {
  
  topic_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
}
inline void EstafettePubSubEvent::set_topic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
}
inline void EstafettePubSubEvent::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
}
inline std::string* EstafettePubSubEvent::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
  return topic_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafettePubSubEvent::release_topic() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
  
  return topic_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafettePubSubEvent::set_allocated_topic(std::string* topic) {
  if (topic != nullptr) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafettePubSubEvent.topic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fpub_5fsub_5fevent_2eproto
