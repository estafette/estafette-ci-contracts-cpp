// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_docker_event.proto

#include "manifest.v1/estafette_docker_event.pb.h"

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
class EstafetteDockerEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteDockerEvent>
      _instance;
} _EstafetteDockerEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto {
static void InitDefaultsEstafetteDockerEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteDockerEvent_default_instance_;
    new (ptr) ::manifest::v1::EstafetteDockerEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteDockerEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteDockerEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafetteDockerEvent}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteDockerEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteDockerEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteDockerEvent, event_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteDockerEvent, image_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteDockerEvent, tag_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteDockerEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteDockerEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_docker_event.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(manifest.v1/estafette_docker_event.pro"
      "to\022\013manifest.v1\"A\n\024EstafetteDockerEvent\022"
      "\r\n\005event\030\001 \001(\t\022\r\n\005image\030\002 \001(\t\022\013\n\003tag\030\003 \001"
      "(\tBx\n\033io.estafette.ci.manifest.v1Z>githu"
      "b.com/estafette/estafette-ci-contracts-g"
      "olang/manifest_v1\252\002\030Estafette.CI.Manifes"
      "t.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 252);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_docker_event.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteDockerEvent::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteDockerEvent::kEventFieldNumber;
const int EstafetteDockerEvent::kImageFieldNumber;
const int EstafetteDockerEvent::kTagFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteDockerEvent::EstafetteDockerEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::scc_info_EstafetteDockerEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteDockerEvent)
}
EstafetteDockerEvent::EstafetteDockerEvent(const EstafetteDockerEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  event_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.event().size() > 0) {
    event_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  image_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.image().size() > 0) {
    image_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.image_);
  }
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.tag().size() > 0) {
    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteDockerEvent)
}

void EstafetteDockerEvent::SharedCtor() {
  event_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafetteDockerEvent::~EstafetteDockerEvent() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteDockerEvent)
  SharedDtor();
}

void EstafetteDockerEvent::SharedDtor() {
  event_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafetteDockerEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteDockerEvent::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteDockerEvent& EstafetteDockerEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::scc_info_EstafetteDockerEvent.base);
  return *internal_default_instance();
}


void EstafetteDockerEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteDockerEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  event_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafetteDockerEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteDockerEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string event = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_event()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->event().data(), static_cast<int>(this->event().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteDockerEvent.event"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string image = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_image()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->image().data(), static_cast<int>(this->image().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteDockerEvent.image"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string tag = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tag().data(), static_cast<int>(this->tag().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteDockerEvent.tag"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteDockerEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteDockerEvent)
  return false;
#undef DO_
}

void EstafetteDockerEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteDockerEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.event");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->event(), output);
  }

  // string image = 2;
  if (this->image().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->image().data(), static_cast<int>(this->image().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.image");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->image(), output);
  }

  // string tag = 3;
  if (this->tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tag().data(), static_cast<int>(this->tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.tag");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->tag(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteDockerEvent)
}

::google::protobuf::uint8* EstafetteDockerEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteDockerEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.event");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->event(), target);
  }

  // string image = 2;
  if (this->image().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->image().data(), static_cast<int>(this->image().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.image");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->image(), target);
  }

  // string tag = 3;
  if (this->tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tag().data(), static_cast<int>(this->tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteDockerEvent.tag");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->tag(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteDockerEvent)
  return target;
}

size_t EstafetteDockerEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteDockerEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string event = 1;
  if (this->event().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->event());
  }

  // string image = 2;
  if (this->image().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->image());
  }

  // string tag = 3;
  if (this->tag().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteDockerEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteDockerEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteDockerEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteDockerEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteDockerEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteDockerEvent)
    MergeFrom(*source);
  }
}

void EstafetteDockerEvent::MergeFrom(const EstafetteDockerEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteDockerEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.event().size() > 0) {

    event_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  if (from.image().size() > 0) {

    image_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.image_);
  }
  if (from.tag().size() > 0) {

    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
}

void EstafetteDockerEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteDockerEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteDockerEvent::CopyFrom(const EstafetteDockerEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteDockerEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteDockerEvent::IsInitialized() const {
  return true;
}

void EstafetteDockerEvent::Swap(EstafetteDockerEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteDockerEvent::InternalSwap(EstafetteDockerEvent* other) {
  using std::swap;
  event_.Swap(&other->event_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  image_.Swap(&other->image_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  tag_.Swap(&other->tag_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteDockerEvent::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteDockerEvent* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteDockerEvent >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteDockerEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
