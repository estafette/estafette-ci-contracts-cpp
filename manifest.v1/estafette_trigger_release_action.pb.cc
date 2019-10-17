// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_trigger_release_action.proto

#include "manifest.v1/estafette_trigger_release_action.pb.h"

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
class EstafetteTriggerReleaseActionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteTriggerReleaseAction>
      _instance;
} _EstafetteTriggerReleaseAction_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto {
static void InitDefaultsEstafetteTriggerReleaseAction() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteTriggerReleaseAction_default_instance_;
    new (ptr) ::manifest::v1::EstafetteTriggerReleaseAction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteTriggerReleaseAction::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteTriggerReleaseAction =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafetteTriggerReleaseAction}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteTriggerReleaseAction.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTriggerReleaseAction, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTriggerReleaseAction, target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTriggerReleaseAction, action_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTriggerReleaseAction, version_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteTriggerReleaseAction)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteTriggerReleaseAction_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_trigger_release_action.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n2manifest.v1/estafette_trigger_release_"
      "action.proto\022\013manifest.v1\"P\n\035EstafetteTr"
      "iggerReleaseAction\022\016\n\006target\030\001 \001(\t\022\016\n\006ac"
      "tion\030\002 \001(\t\022\017\n\007version\030\003 \001(\tB[Z>github.co"
      "m/estafette/estafette-ci-contracts-golan"
      "g/manifest_v1\252\002\030Estafette.CI.Manifest.V1"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_trigger_release_action.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteTriggerReleaseAction::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteTriggerReleaseAction::kTargetFieldNumber;
const int EstafetteTriggerReleaseAction::kActionFieldNumber;
const int EstafetteTriggerReleaseAction::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteTriggerReleaseAction::EstafetteTriggerReleaseAction()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::scc_info_EstafetteTriggerReleaseAction.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteTriggerReleaseAction)
}
EstafetteTriggerReleaseAction::EstafetteTriggerReleaseAction(const EstafetteTriggerReleaseAction& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.action().size() > 0) {
    action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.action_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteTriggerReleaseAction)
}

void EstafetteTriggerReleaseAction::SharedCtor() {
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafetteTriggerReleaseAction::~EstafetteTriggerReleaseAction() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteTriggerReleaseAction)
  SharedDtor();
}

void EstafetteTriggerReleaseAction::SharedDtor() {
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  action_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafetteTriggerReleaseAction::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteTriggerReleaseAction::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteTriggerReleaseAction& EstafetteTriggerReleaseAction::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::scc_info_EstafetteTriggerReleaseAction.base);
  return *internal_default_instance();
}


void EstafetteTriggerReleaseAction::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteTriggerReleaseAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafetteTriggerReleaseAction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteTriggerReleaseAction)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string target = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteTriggerReleaseAction.target"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string action = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_action()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->action().data(), static_cast<int>(this->action().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteTriggerReleaseAction.action"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteTriggerReleaseAction.version"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteTriggerReleaseAction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteTriggerReleaseAction)
  return false;
#undef DO_
}

void EstafetteTriggerReleaseAction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteTriggerReleaseAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string target = 1;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->target(), output);
  }

  // string action = 2;
  if (this->action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->action().data(), static_cast<int>(this->action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.action");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->action(), output);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->version(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteTriggerReleaseAction)
}

::google::protobuf::uint8* EstafetteTriggerReleaseAction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteTriggerReleaseAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string target = 1;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->target(), target);
  }

  // string action = 2;
  if (this->action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->action().data(), static_cast<int>(this->action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.action");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->action(), target);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteTriggerReleaseAction.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->version(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteTriggerReleaseAction)
  return target;
}

size_t EstafetteTriggerReleaseAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteTriggerReleaseAction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string target = 1;
  if (this->target().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // string action = 2;
  if (this->action().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->action());
  }

  // string version = 3;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteTriggerReleaseAction::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteTriggerReleaseAction)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteTriggerReleaseAction* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteTriggerReleaseAction>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteTriggerReleaseAction)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteTriggerReleaseAction)
    MergeFrom(*source);
  }
}

void EstafetteTriggerReleaseAction::MergeFrom(const EstafetteTriggerReleaseAction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteTriggerReleaseAction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.action().size() > 0) {

    action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.action_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
}

void EstafetteTriggerReleaseAction::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteTriggerReleaseAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteTriggerReleaseAction::CopyFrom(const EstafetteTriggerReleaseAction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteTriggerReleaseAction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteTriggerReleaseAction::IsInitialized() const {
  return true;
}

void EstafetteTriggerReleaseAction::Swap(EstafetteTriggerReleaseAction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteTriggerReleaseAction::InternalSwap(EstafetteTriggerReleaseAction* other) {
  using std::swap;
  target_.Swap(&other->target_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  action_.Swap(&other->action_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteTriggerReleaseAction::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteTriggerReleaseAction* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteTriggerReleaseAction >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteTriggerReleaseAction >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
