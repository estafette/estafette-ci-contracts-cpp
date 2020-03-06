// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_cron_trigger.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteCronTrigger;
class EstafetteCronTriggerDefaultTypeInternal;
extern EstafetteCronTriggerDefaultTypeInternal _EstafetteCronTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> ::estafette::ci::manifest::v1::EstafetteCronTrigger* Arena::CreateMaybeMessage<::estafette::ci::manifest::v1::EstafetteCronTrigger>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

class EstafetteCronTrigger :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:estafette.ci.manifest.v1.EstafetteCronTrigger) */ {
 public:
  EstafetteCronTrigger();
  virtual ~EstafetteCronTrigger();

  EstafetteCronTrigger(const EstafetteCronTrigger& from);
  EstafetteCronTrigger(EstafetteCronTrigger&& from) noexcept
    : EstafetteCronTrigger() {
    *this = ::std::move(from);
  }

  inline EstafetteCronTrigger& operator=(const EstafetteCronTrigger& from) {
    CopyFrom(from);
    return *this;
  }
  inline EstafetteCronTrigger& operator=(EstafetteCronTrigger&& from) noexcept {
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
  static const EstafetteCronTrigger& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EstafetteCronTrigger* internal_default_instance() {
    return reinterpret_cast<const EstafetteCronTrigger*>(
               &_EstafetteCronTrigger_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EstafetteCronTrigger* other);
  friend void swap(EstafetteCronTrigger& a, EstafetteCronTrigger& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EstafetteCronTrigger* New() const final {
    return CreateMaybeMessage<EstafetteCronTrigger>(nullptr);
  }

  EstafetteCronTrigger* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EstafetteCronTrigger>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EstafetteCronTrigger& from);
  void MergeFrom(const EstafetteCronTrigger& from);
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
  void InternalSwap(EstafetteCronTrigger* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "estafette.ci.manifest.v1.EstafetteCronTrigger";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto);
    return ::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string schedule = 1;
  void clear_schedule();
  static const int kScheduleFieldNumber = 1;
  const std::string& schedule() const;
  void set_schedule(const std::string& value);
  void set_schedule(std::string&& value);
  void set_schedule(const char* value);
  void set_schedule(const char* value, size_t size);
  std::string* mutable_schedule();
  std::string* release_schedule();
  void set_allocated_schedule(std::string* schedule);

  // @@protoc_insertion_point(class_scope:estafette.ci.manifest.v1.EstafetteCronTrigger)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr schedule_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EstafetteCronTrigger

// string schedule = 1;
inline void EstafetteCronTrigger::clear_schedule() {
  schedule_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& EstafetteCronTrigger::schedule() const {
  // @@protoc_insertion_point(field_get:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
  return schedule_.GetNoArena();
}
inline void EstafetteCronTrigger::set_schedule(const std::string& value) {
  
  schedule_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
}
inline void EstafetteCronTrigger::set_schedule(std::string&& value) {
  
  schedule_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
}
inline void EstafetteCronTrigger::set_schedule(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  schedule_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
}
inline void EstafetteCronTrigger::set_schedule(const char* value, size_t size) {
  
  schedule_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
}
inline std::string* EstafetteCronTrigger::mutable_schedule() {
  
  // @@protoc_insertion_point(field_mutable:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
  return schedule_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* EstafetteCronTrigger::release_schedule() {
  // @@protoc_insertion_point(field_release:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
  
  return schedule_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void EstafetteCronTrigger::set_allocated_schedule(std::string* schedule) {
  if (schedule != nullptr) {
    
  } else {
    
  }
  schedule_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), schedule);
  // @@protoc_insertion_point(field_set_allocated:estafette.ci.manifest.v1.EstafetteCronTrigger.schedule)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto
