// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_manual_event.proto

#include "manifest.v1/estafette_manual_event.pb.h"

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
class EstafetteManualEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteManualEvent>
      _instance;
} _EstafetteManualEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto {
static void InitDefaultsEstafetteManualEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteManualEvent_default_instance_;
    new (ptr) ::manifest::v1::EstafetteManualEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteManualEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteManualEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafetteManualEvent}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteManualEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteManualEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteManualEvent, user_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteManualEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteManualEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_manual_event.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(manifest.v1/estafette_manual_event.pro"
      "to\022\013manifest.v1\"\'\n\024EstafetteManualEvent\022"
      "\017\n\007user_id\030\001 \001(\tB@Z>github.com/estafette"
      "/estafette-ci-contracts-golang/manifest_"
      "v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_manual_event.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteManualEvent::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteManualEvent::kUserIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteManualEvent::EstafetteManualEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::scc_info_EstafetteManualEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteManualEvent)
}
EstafetteManualEvent::EstafetteManualEvent(const EstafetteManualEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user_id().size() > 0) {
    user_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_id_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteManualEvent)
}

void EstafetteManualEvent::SharedCtor() {
  user_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafetteManualEvent::~EstafetteManualEvent() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteManualEvent)
  SharedDtor();
}

void EstafetteManualEvent::SharedDtor() {
  user_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafetteManualEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteManualEvent::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteManualEvent& EstafetteManualEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::scc_info_EstafetteManualEvent.base);
  return *internal_default_instance();
}


void EstafetteManualEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteManualEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafetteManualEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteManualEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string user_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user_id().data(), static_cast<int>(this->user_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteManualEvent.user_id"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteManualEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteManualEvent)
  return false;
#undef DO_
}

void EstafetteManualEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteManualEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string user_id = 1;
  if (this->user_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user_id().data(), static_cast<int>(this->user_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteManualEvent.user_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->user_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteManualEvent)
}

::google::protobuf::uint8* EstafetteManualEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteManualEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string user_id = 1;
  if (this->user_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user_id().data(), static_cast<int>(this->user_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteManualEvent.user_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->user_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteManualEvent)
  return target;
}

size_t EstafetteManualEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteManualEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string user_id = 1;
  if (this->user_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteManualEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteManualEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteManualEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteManualEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteManualEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteManualEvent)
    MergeFrom(*source);
  }
}

void EstafetteManualEvent::MergeFrom(const EstafetteManualEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteManualEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user_id().size() > 0) {

    user_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_id_);
  }
}

void EstafetteManualEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteManualEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteManualEvent::CopyFrom(const EstafetteManualEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteManualEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteManualEvent::IsInitialized() const {
  return true;
}

void EstafetteManualEvent::Swap(EstafetteManualEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteManualEvent::InternalSwap(EstafetteManualEvent* other) {
  using std::swap;
  user_id_.Swap(&other->user_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteManualEvent::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteManualEvent* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteManualEvent >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteManualEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
