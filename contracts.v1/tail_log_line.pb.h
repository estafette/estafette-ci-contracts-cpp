// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/tail_log_line.proto

#ifndef PROTOBUF_INCLUDED_contracts_2ev1_2ftail_5flog_5fline_2eproto
#define PROTOBUF_INCLUDED_contracts_2ev1_2ftail_5flog_5fline_2eproto

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
#include <google/protobuf/duration.pb.h>
#include "contracts.v1/build_log_line.pb.h"
#include "contracts.v1/build_log_step_docker_image.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2ftail_5flog_5fline_2eproto 

namespace protobuf_contracts_2ev1_2ftail_5flog_5fline_2eproto {
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
}  // namespace protobuf_contracts_2ev1_2ftail_5flog_5fline_2eproto
namespace contracts {
namespace v1 {
class TailLogLine;
class TailLogLineDefaultTypeInternal;
extern TailLogLineDefaultTypeInternal _TailLogLine_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> ::contracts::v1::TailLogLine* Arena::CreateMaybeMessage<::contracts::v1::TailLogLine>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace contracts {
namespace v1 {

// ===================================================================

class TailLogLine : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contracts.v1.TailLogLine) */ {
 public:
  TailLogLine();
  virtual ~TailLogLine();

  TailLogLine(const TailLogLine& from);

  inline TailLogLine& operator=(const TailLogLine& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TailLogLine(TailLogLine&& from) noexcept
    : TailLogLine() {
    *this = ::std::move(from);
  }

  inline TailLogLine& operator=(TailLogLine&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TailLogLine& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TailLogLine* internal_default_instance() {
    return reinterpret_cast<const TailLogLine*>(
               &_TailLogLine_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TailLogLine* other);
  friend void swap(TailLogLine& a, TailLogLine& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TailLogLine* New() const final {
    return CreateMaybeMessage<TailLogLine>(NULL);
  }

  TailLogLine* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TailLogLine>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TailLogLine& from);
  void MergeFrom(const TailLogLine& from);
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
  void InternalSwap(TailLogLine* other);
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

  // string step = 1;
  void clear_step();
  static const int kStepFieldNumber = 1;
  const ::std::string& step() const;
  void set_step(const ::std::string& value);
  #if LANG_CXX11
  void set_step(::std::string&& value);
  #endif
  void set_step(const char* value);
  void set_step(const char* value, size_t size);
  ::std::string* mutable_step();
  ::std::string* release_step();
  void set_allocated_step(::std::string* step);

  // string status = 6;
  void clear_status();
  static const int kStatusFieldNumber = 6;
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

  // .contracts.v1.BuildLogLine log_line = 2;
  bool has_log_line() const;
  void clear_log_line();
  static const int kLogLineFieldNumber = 2;
  private:
  const ::contracts::v1::BuildLogLine& _internal_log_line() const;
  public:
  const ::contracts::v1::BuildLogLine& log_line() const;
  ::contracts::v1::BuildLogLine* release_log_line();
  ::contracts::v1::BuildLogLine* mutable_log_line();
  void set_allocated_log_line(::contracts::v1::BuildLogLine* log_line);

  // .contracts.v1.BuildLogStepDockerImage image = 3;
  bool has_image() const;
  void clear_image();
  static const int kImageFieldNumber = 3;
  private:
  const ::contracts::v1::BuildLogStepDockerImage& _internal_image() const;
  public:
  const ::contracts::v1::BuildLogStepDockerImage& image() const;
  ::contracts::v1::BuildLogStepDockerImage* release_image();
  ::contracts::v1::BuildLogStepDockerImage* mutable_image();
  void set_allocated_image(::contracts::v1::BuildLogStepDockerImage* image);

  // .google.protobuf.Duration duration = 4;
  bool has_duration() const;
  void clear_duration();
  static const int kDurationFieldNumber = 4;
  private:
  const ::google::protobuf::Duration& _internal_duration() const;
  public:
  const ::google::protobuf::Duration& duration() const;
  ::google::protobuf::Duration* release_duration();
  ::google::protobuf::Duration* mutable_duration();
  void set_allocated_duration(::google::protobuf::Duration* duration);

  // int64 exit_code = 5;
  void clear_exit_code();
  static const int kExitCodeFieldNumber = 5;
  ::google::protobuf::int64 exit_code() const;
  void set_exit_code(::google::protobuf::int64 value);

  // bool auto_injected = 7;
  void clear_auto_injected();
  static const int kAutoInjectedFieldNumber = 7;
  bool auto_injected() const;
  void set_auto_injected(bool value);

  // @@protoc_insertion_point(class_scope:contracts.v1.TailLogLine)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr step_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  ::contracts::v1::BuildLogLine* log_line_;
  ::contracts::v1::BuildLogStepDockerImage* image_;
  ::google::protobuf::Duration* duration_;
  ::google::protobuf::int64 exit_code_;
  bool auto_injected_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_contracts_2ev1_2ftail_5flog_5fline_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TailLogLine

// string step = 1;
inline void TailLogLine::clear_step() {
  step_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TailLogLine::step() const {
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.step)
  return step_.GetNoArena();
}
inline void TailLogLine::set_step(const ::std::string& value) {
  
  step_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.TailLogLine.step)
}
#if LANG_CXX11
inline void TailLogLine::set_step(::std::string&& value) {
  
  step_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.TailLogLine.step)
}
#endif
inline void TailLogLine::set_step(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  step_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.TailLogLine.step)
}
inline void TailLogLine::set_step(const char* value, size_t size) {
  
  step_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.TailLogLine.step)
}
inline ::std::string* TailLogLine::mutable_step() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.TailLogLine.step)
  return step_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TailLogLine::release_step() {
  // @@protoc_insertion_point(field_release:contracts.v1.TailLogLine.step)
  
  return step_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TailLogLine::set_allocated_step(::std::string* step) {
  if (step != NULL) {
    
  } else {
    
  }
  step_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), step);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.TailLogLine.step)
}

// .contracts.v1.BuildLogLine log_line = 2;
inline bool TailLogLine::has_log_line() const {
  return this != internal_default_instance() && log_line_ != NULL;
}
inline const ::contracts::v1::BuildLogLine& TailLogLine::_internal_log_line() const {
  return *log_line_;
}
inline const ::contracts::v1::BuildLogLine& TailLogLine::log_line() const {
  const ::contracts::v1::BuildLogLine* p = log_line_;
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.log_line)
  return p != NULL ? *p : *reinterpret_cast<const ::contracts::v1::BuildLogLine*>(
      &::contracts::v1::_BuildLogLine_default_instance_);
}
inline ::contracts::v1::BuildLogLine* TailLogLine::release_log_line() {
  // @@protoc_insertion_point(field_release:contracts.v1.TailLogLine.log_line)
  
  ::contracts::v1::BuildLogLine* temp = log_line_;
  log_line_ = NULL;
  return temp;
}
inline ::contracts::v1::BuildLogLine* TailLogLine::mutable_log_line() {
  
  if (log_line_ == NULL) {
    auto* p = CreateMaybeMessage<::contracts::v1::BuildLogLine>(GetArenaNoVirtual());
    log_line_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.TailLogLine.log_line)
  return log_line_;
}
inline void TailLogLine::set_allocated_log_line(::contracts::v1::BuildLogLine* log_line) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(log_line_);
  }
  if (log_line) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      log_line = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, log_line, submessage_arena);
    }
    
  } else {
    
  }
  log_line_ = log_line;
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.TailLogLine.log_line)
}

// .contracts.v1.BuildLogStepDockerImage image = 3;
inline bool TailLogLine::has_image() const {
  return this != internal_default_instance() && image_ != NULL;
}
inline const ::contracts::v1::BuildLogStepDockerImage& TailLogLine::_internal_image() const {
  return *image_;
}
inline const ::contracts::v1::BuildLogStepDockerImage& TailLogLine::image() const {
  const ::contracts::v1::BuildLogStepDockerImage* p = image_;
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.image)
  return p != NULL ? *p : *reinterpret_cast<const ::contracts::v1::BuildLogStepDockerImage*>(
      &::contracts::v1::_BuildLogStepDockerImage_default_instance_);
}
inline ::contracts::v1::BuildLogStepDockerImage* TailLogLine::release_image() {
  // @@protoc_insertion_point(field_release:contracts.v1.TailLogLine.image)
  
  ::contracts::v1::BuildLogStepDockerImage* temp = image_;
  image_ = NULL;
  return temp;
}
inline ::contracts::v1::BuildLogStepDockerImage* TailLogLine::mutable_image() {
  
  if (image_ == NULL) {
    auto* p = CreateMaybeMessage<::contracts::v1::BuildLogStepDockerImage>(GetArenaNoVirtual());
    image_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.TailLogLine.image)
  return image_;
}
inline void TailLogLine::set_allocated_image(::contracts::v1::BuildLogStepDockerImage* image) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(image_);
  }
  if (image) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      image = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, image, submessage_arena);
    }
    
  } else {
    
  }
  image_ = image;
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.TailLogLine.image)
}

// .google.protobuf.Duration duration = 4;
inline bool TailLogLine::has_duration() const {
  return this != internal_default_instance() && duration_ != NULL;
}
inline const ::google::protobuf::Duration& TailLogLine::_internal_duration() const {
  return *duration_;
}
inline const ::google::protobuf::Duration& TailLogLine::duration() const {
  const ::google::protobuf::Duration* p = duration_;
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.duration)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Duration*>(
      &::google::protobuf::_Duration_default_instance_);
}
inline ::google::protobuf::Duration* TailLogLine::release_duration() {
  // @@protoc_insertion_point(field_release:contracts.v1.TailLogLine.duration)
  
  ::google::protobuf::Duration* temp = duration_;
  duration_ = NULL;
  return temp;
}
inline ::google::protobuf::Duration* TailLogLine::mutable_duration() {
  
  if (duration_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Duration>(GetArenaNoVirtual());
    duration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:contracts.v1.TailLogLine.duration)
  return duration_;
}
inline void TailLogLine::set_allocated_duration(::google::protobuf::Duration* duration) {
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
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.TailLogLine.duration)
}

// int64 exit_code = 5;
inline void TailLogLine::clear_exit_code() {
  exit_code_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TailLogLine::exit_code() const {
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.exit_code)
  return exit_code_;
}
inline void TailLogLine::set_exit_code(::google::protobuf::int64 value) {
  
  exit_code_ = value;
  // @@protoc_insertion_point(field_set:contracts.v1.TailLogLine.exit_code)
}

// string status = 6;
inline void TailLogLine::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TailLogLine::status() const {
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.status)
  return status_.GetNoArena();
}
inline void TailLogLine::set_status(const ::std::string& value) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contracts.v1.TailLogLine.status)
}
#if LANG_CXX11
inline void TailLogLine::set_status(::std::string&& value) {
  
  status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contracts.v1.TailLogLine.status)
}
#endif
inline void TailLogLine::set_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contracts.v1.TailLogLine.status)
}
inline void TailLogLine::set_status(const char* value, size_t size) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contracts.v1.TailLogLine.status)
}
inline ::std::string* TailLogLine::mutable_status() {
  
  // @@protoc_insertion_point(field_mutable:contracts.v1.TailLogLine.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TailLogLine::release_status() {
  // @@protoc_insertion_point(field_release:contracts.v1.TailLogLine.status)
  
  return status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TailLogLine::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    
  } else {
    
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:contracts.v1.TailLogLine.status)
}

// bool auto_injected = 7;
inline void TailLogLine::clear_auto_injected() {
  auto_injected_ = false;
}
inline bool TailLogLine::auto_injected() const {
  // @@protoc_insertion_point(field_get:contracts.v1.TailLogLine.auto_injected)
  return auto_injected_;
}
inline void TailLogLine::set_auto_injected(bool value) {
  
  auto_injected_ = value;
  // @@protoc_insertion_point(field_set:contracts.v1.TailLogLine.auto_injected)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace contracts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_contracts_2ev1_2ftail_5flog_5fline_2eproto
