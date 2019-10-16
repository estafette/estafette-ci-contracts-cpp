// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_pub_sub_event.proto

#ifndef PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto
#define PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto 

namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto {
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto
namespace manifest {
namespace v1 {
class EstafettePubSubEvent;
class EstafettePubSubEventDefaultTypeInternal;
extern EstafettePubSubEventDefaultTypeInternal _EstafettePubSubEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> ::manifest::v1::EstafettePubSubEvent* Arena::CreateMaybeMessage<::manifest::v1::EstafettePubSubEvent>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace manifest {
namespace v1 {

// ===================================================================

class EstafettePubSubEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:manifest.v1.EstafettePubSubEvent) */ {
 public:
  EstafettePubSubEvent();
  virtual ~EstafettePubSubEvent();

  EstafettePubSubEvent(const EstafettePubSubEvent& from);

  inline EstafettePubSubEvent& operator=(const EstafettePubSubEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EstafettePubSubEvent(EstafettePubSubEvent&& from) noexcept
    : EstafettePubSubEvent() {
    *this = ::std::move(from);
  }

  inline EstafettePubSubEvent& operator=(EstafettePubSubEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
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
    return CreateMaybeMessage<EstafettePubSubEvent>(NULL);
  }

  EstafettePubSubEvent* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EstafettePubSubEvent>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EstafettePubSubEvent& from);
  void MergeFrom(const EstafettePubSubEvent& from);
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
  void InternalSwap(EstafettePubSubEvent* other);
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

  // string project = 1;
  void clear_project();
  static const int kProjectFieldNumber = 1;
  const ::std::string& project() const;
  void set_project(const ::std::string& value);
  #if LANG_CXX11
  void set_project(::std::string&& value);
  #endif
  void set_project(const char* value);
  void set_project(const char* value, size_t size);
  ::std::string* mutable_project();
  ::std::string* release_project();
  void set_allocated_project(::std::string* project);

  // string topic = 2;
  void clear_topic();
  static const int kTopicFieldNumber = 2;
  const ::std::string& topic() const;
  void set_topic(const ::std::string& value);
  #if LANG_CXX11
  void set_topic(::std::string&& value);
  #endif
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  ::std::string* mutable_topic();
  ::std::string* release_topic();
  void set_allocated_topic(::std::string* topic);

  // @@protoc_insertion_point(class_scope:manifest.v1.EstafettePubSubEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr project_;
  ::google::protobuf::internal::ArenaStringPtr topic_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::TableStruct;
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
  project_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafettePubSubEvent::project() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafettePubSubEvent.project)
  return project_.GetNoArena();
}
inline void EstafettePubSubEvent::set_project(const ::std::string& value) {
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafettePubSubEvent.project)
}
#if LANG_CXX11
inline void EstafettePubSubEvent::set_project(::std::string&& value) {
  
  project_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafettePubSubEvent.project)
}
#endif
inline void EstafettePubSubEvent::set_project(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafettePubSubEvent.project)
}
inline void EstafettePubSubEvent::set_project(const char* value, size_t size) {
  
  project_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafettePubSubEvent.project)
}
inline ::std::string* EstafettePubSubEvent::mutable_project() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafettePubSubEvent.project)
  return project_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafettePubSubEvent::release_project() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafettePubSubEvent.project)
  
  return project_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafettePubSubEvent::set_allocated_project(::std::string* project) {
  if (project != NULL) {
    
  } else {
    
  }
  project_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), project);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafettePubSubEvent.project)
}

// string topic = 2;
inline void EstafettePubSubEvent::clear_topic() {
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EstafettePubSubEvent::topic() const {
  // @@protoc_insertion_point(field_get:manifest.v1.EstafettePubSubEvent.topic)
  return topic_.GetNoArena();
}
inline void EstafettePubSubEvent::set_topic(const ::std::string& value) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:manifest.v1.EstafettePubSubEvent.topic)
}
#if LANG_CXX11
inline void EstafettePubSubEvent::set_topic(::std::string&& value) {
  
  topic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:manifest.v1.EstafettePubSubEvent.topic)
}
#endif
inline void EstafettePubSubEvent::set_topic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:manifest.v1.EstafettePubSubEvent.topic)
}
inline void EstafettePubSubEvent::set_topic(const char* value, size_t size) {
  
  topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:manifest.v1.EstafettePubSubEvent.topic)
}
inline ::std::string* EstafettePubSubEvent::mutable_topic() {
  
  // @@protoc_insertion_point(field_mutable:manifest.v1.EstafettePubSubEvent.topic)
  return topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EstafettePubSubEvent::release_topic() {
  // @@protoc_insertion_point(field_release:manifest.v1.EstafettePubSubEvent.topic)
  
  return topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EstafettePubSubEvent::set_allocated_topic(::std::string* topic) {
  if (topic != NULL) {
    
  } else {
    
  }
  topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:manifest.v1.EstafettePubSubEvent.topic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace manifest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto
