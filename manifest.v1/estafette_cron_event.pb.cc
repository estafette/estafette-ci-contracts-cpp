// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_cron_event.proto

#include "manifest.v1/estafette_cron_event.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace manifest {
namespace v1 {
class EstafetteCronEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteCronEvent>
      _instance;
} _EstafetteCronEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto {
static void InitDefaultsEstafetteCronEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteCronEvent_default_instance_;
    new (ptr) ::manifest::v1::EstafetteCronEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteCronEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_EstafetteCronEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsEstafetteCronEvent}, {
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteCronEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteCronEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteCronEvent, time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteCronEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteCronEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_cron_event.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n&manifest.v1/estafette_cron_event.proto"
      "\022\013manifest.v1\032\037google/protobuf/timestamp"
      ".proto\">\n\022EstafetteCronEvent\022(\n\004time\030\001 \001"
      "(\0132\032.google.protobuf.TimestampB@Z>github"
      ".com/estafette/estafette-ci-contracts-go"
      "lang/manifest_v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_cron_event.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteCronEvent::InitAsDefaultInstance() {
  ::manifest::v1::_EstafetteCronEvent_default_instance_._instance.get_mutable()->time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void EstafetteCronEvent::clear_time() {
  if (GetArenaNoVirtual() == NULL && time_ != NULL) {
    delete time_;
  }
  time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteCronEvent::kTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteCronEvent::EstafetteCronEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::scc_info_EstafetteCronEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteCronEvent)
}
EstafetteCronEvent::EstafetteCronEvent(const EstafetteCronEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_time()) {
    time_ = new ::google::protobuf::Timestamp(*from.time_);
  } else {
    time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteCronEvent)
}

void EstafetteCronEvent::SharedCtor() {
  time_ = NULL;
}

EstafetteCronEvent::~EstafetteCronEvent() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteCronEvent)
  SharedDtor();
}

void EstafetteCronEvent::SharedDtor() {
  if (this != internal_default_instance()) delete time_;
}

void EstafetteCronEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteCronEvent::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteCronEvent& EstafetteCronEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::scc_info_EstafetteCronEvent.base);
  return *internal_default_instance();
}


void EstafetteCronEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteCronEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && time_ != NULL) {
    delete time_;
  }
  time_ = NULL;
  _internal_metadata_.Clear();
}

bool EstafetteCronEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteCronEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Timestamp time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteCronEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteCronEvent)
  return false;
#undef DO_
}

void EstafetteCronEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteCronEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp time = 1;
  if (this->has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteCronEvent)
}

::google::protobuf::uint8* EstafetteCronEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteCronEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp time = 1;
  if (this->has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_time(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteCronEvent)
  return target;
}

size_t EstafetteCronEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteCronEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.protobuf.Timestamp time = 1;
  if (this->has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteCronEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteCronEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteCronEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteCronEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteCronEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteCronEvent)
    MergeFrom(*source);
  }
}

void EstafetteCronEvent::MergeFrom(const EstafetteCronEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteCronEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_time()) {
    mutable_time()->::google::protobuf::Timestamp::MergeFrom(from.time());
  }
}

void EstafetteCronEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteCronEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteCronEvent::CopyFrom(const EstafetteCronEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteCronEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteCronEvent::IsInitialized() const {
  return true;
}

void EstafetteCronEvent::Swap(EstafetteCronEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteCronEvent::InternalSwap(EstafetteCronEvent* other) {
  using std::swap;
  swap(time_, other->time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteCronEvent::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteCronEvent* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteCronEvent >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteCronEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
