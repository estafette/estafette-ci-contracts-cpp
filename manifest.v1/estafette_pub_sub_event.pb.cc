// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_pub_sub_event.proto

#include "manifest.v1/estafette_pub_sub_event.pb.h"

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

namespace manifest {
namespace v1 {
class EstafettePubSubEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafettePubSubEvent>
      _instance;
} _EstafettePubSubEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto {
static void InitDefaultsEstafettePubSubEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafettePubSubEvent_default_instance_;
    new (ptr) ::manifest::v1::EstafettePubSubEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafettePubSubEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePubSubEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafettePubSubEvent}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafettePubSubEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePubSubEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePubSubEvent, project_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePubSubEvent, topic_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafettePubSubEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafettePubSubEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_pub_sub_event.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n)manifest.v1/estafette_pub_sub_event.pr"
      "oto\022\013manifest.v1\"6\n\024EstafettePubSubEvent"
      "\022\017\n\007project\030\001 \001(\t\022\r\n\005topic\030\002 \001(\tBx\n\033io.e"
      "stafette.ci.manifest.v1Z>github.com/esta"
      "fette/estafette-ci-contracts-golang/mani"
      "fest_v1\252\002\030Estafette.CI.Manifest.V1b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_pub_sub_event.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafettePubSubEvent::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafettePubSubEvent::kProjectFieldNumber;
const int EstafettePubSubEvent::kTopicFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafettePubSubEvent::EstafettePubSubEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::scc_info_EstafettePubSubEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafettePubSubEvent)
}
EstafettePubSubEvent::EstafettePubSubEvent(const EstafettePubSubEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  project_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.project().size() > 0) {
    project_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.project_);
  }
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.topic().size() > 0) {
    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafettePubSubEvent)
}

void EstafettePubSubEvent::SharedCtor() {
  project_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafettePubSubEvent::~EstafettePubSubEvent() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafettePubSubEvent)
  SharedDtor();
}

void EstafettePubSubEvent::SharedDtor() {
  project_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafettePubSubEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafettePubSubEvent::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafettePubSubEvent& EstafettePubSubEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::scc_info_EstafettePubSubEvent.base);
  return *internal_default_instance();
}


void EstafettePubSubEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafettePubSubEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  project_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafettePubSubEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafettePubSubEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string project = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_project()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->project().data(), static_cast<int>(this->project().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafettePubSubEvent.project"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string topic = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->topic().data(), static_cast<int>(this->topic().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafettePubSubEvent.topic"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafettePubSubEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafettePubSubEvent)
  return false;
#undef DO_
}

void EstafettePubSubEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafettePubSubEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string project = 1;
  if (this->project().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->project().data(), static_cast<int>(this->project().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePubSubEvent.project");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->project(), output);
  }

  // string topic = 2;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePubSubEvent.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->topic(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafettePubSubEvent)
}

::google::protobuf::uint8* EstafettePubSubEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafettePubSubEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string project = 1;
  if (this->project().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->project().data(), static_cast<int>(this->project().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePubSubEvent.project");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->project(), target);
  }

  // string topic = 2;
  if (this->topic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePubSubEvent.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->topic(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafettePubSubEvent)
  return target;
}

size_t EstafettePubSubEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafettePubSubEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string project = 1;
  if (this->project().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->project());
  }

  // string topic = 2;
  if (this->topic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafettePubSubEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafettePubSubEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafettePubSubEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafettePubSubEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafettePubSubEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafettePubSubEvent)
    MergeFrom(*source);
  }
}

void EstafettePubSubEvent::MergeFrom(const EstafettePubSubEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafettePubSubEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.project().size() > 0) {

    project_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.project_);
  }
  if (from.topic().size() > 0) {

    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
}

void EstafettePubSubEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafettePubSubEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafettePubSubEvent::CopyFrom(const EstafettePubSubEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafettePubSubEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafettePubSubEvent::IsInitialized() const {
  return true;
}

void EstafettePubSubEvent::Swap(EstafettePubSubEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafettePubSubEvent::InternalSwap(EstafettePubSubEvent* other) {
  using std::swap;
  project_.Swap(&other->project_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  topic_.Swap(&other->topic_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafettePubSubEvent::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafettePubSubEvent* Arena::CreateMaybeMessage< ::manifest::v1::EstafettePubSubEvent >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafettePubSubEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
