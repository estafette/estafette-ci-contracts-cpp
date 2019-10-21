// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_pipeline_trigger.proto

#include "manifest.v1/estafette_pipeline_trigger.pb.h"

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
class EstafettePipelineTriggerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafettePipelineTrigger>
      _instance;
} _EstafettePipelineTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto {
static void InitDefaultsEstafettePipelineTrigger() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafettePipelineTrigger_default_instance_;
    new (ptr) ::manifest::v1::EstafettePipelineTrigger();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafettePipelineTrigger::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePipelineTrigger =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafettePipelineTrigger}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafettePipelineTrigger.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePipelineTrigger, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePipelineTrigger, event_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePipelineTrigger, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePipelineTrigger, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafettePipelineTrigger, branch_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafettePipelineTrigger)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafettePipelineTrigger_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_pipeline_trigger.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n,manifest.v1/estafette_pipeline_trigger"
      ".proto\022\013manifest.v1\"W\n\030EstafettePipeline"
      "Trigger\022\r\n\005event\030\001 \001(\t\022\016\n\006status\030\002 \001(\t\022\014"
      "\n\004name\030\003 \001(\t\022\016\n\006branch\030\004 \001(\tBx\n\033io.estaf"
      "ette.ci.manifest.v1Z>github.com/estafett"
      "e/estafette-ci-contracts-golang/manifest"
      "_v1\252\002\030Estafette.CI.Manifest.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_pipeline_trigger.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafettePipelineTrigger::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafettePipelineTrigger::kEventFieldNumber;
const int EstafettePipelineTrigger::kStatusFieldNumber;
const int EstafettePipelineTrigger::kNameFieldNumber;
const int EstafettePipelineTrigger::kBranchFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafettePipelineTrigger::EstafettePipelineTrigger()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::scc_info_EstafettePipelineTrigger.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafettePipelineTrigger)
}
EstafettePipelineTrigger::EstafettePipelineTrigger(const EstafettePipelineTrigger& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  event_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.event().size() > 0) {
    event_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.status().size() > 0) {
    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  branch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.branch().size() > 0) {
    branch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.branch_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafettePipelineTrigger)
}

void EstafettePipelineTrigger::SharedCtor() {
  event_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  branch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafettePipelineTrigger::~EstafettePipelineTrigger() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafettePipelineTrigger)
  SharedDtor();
}

void EstafettePipelineTrigger::SharedDtor() {
  event_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  branch_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafettePipelineTrigger::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafettePipelineTrigger::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafettePipelineTrigger& EstafettePipelineTrigger::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::scc_info_EstafettePipelineTrigger.base);
  return *internal_default_instance();
}


void EstafettePipelineTrigger::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafettePipelineTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  event_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  branch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafettePipelineTrigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafettePipelineTrigger)
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
            "manifest.v1.EstafettePipelineTrigger.event"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string status = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->status().data(), static_cast<int>(this->status().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafettePipelineTrigger.status"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafettePipelineTrigger.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string branch = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_branch()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->branch().data(), static_cast<int>(this->branch().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafettePipelineTrigger.branch"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafettePipelineTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafettePipelineTrigger)
  return false;
#undef DO_
}

void EstafettePipelineTrigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafettePipelineTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.event");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->event(), output);
  }

  // string status = 2;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.status");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->status(), output);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->branch().data(), static_cast<int>(this->branch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.branch");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->branch(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafettePipelineTrigger)
}

::google::protobuf::uint8* EstafettePipelineTrigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafettePipelineTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.event");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->event(), target);
  }

  // string status = 2;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.status");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->status(), target);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->branch().data(), static_cast<int>(this->branch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafettePipelineTrigger.branch");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->branch(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafettePipelineTrigger)
  return target;
}

size_t EstafettePipelineTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafettePipelineTrigger)
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

  // string status = 2;
  if (this->status().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->status());
  }

  // string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->branch());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafettePipelineTrigger::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafettePipelineTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafettePipelineTrigger* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafettePipelineTrigger>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafettePipelineTrigger)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafettePipelineTrigger)
    MergeFrom(*source);
  }
}

void EstafettePipelineTrigger::MergeFrom(const EstafettePipelineTrigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafettePipelineTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.event().size() > 0) {

    event_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  if (from.status().size() > 0) {

    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.branch().size() > 0) {

    branch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.branch_);
  }
}

void EstafettePipelineTrigger::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafettePipelineTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafettePipelineTrigger::CopyFrom(const EstafettePipelineTrigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafettePipelineTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafettePipelineTrigger::IsInitialized() const {
  return true;
}

void EstafettePipelineTrigger::Swap(EstafettePipelineTrigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafettePipelineTrigger::InternalSwap(EstafettePipelineTrigger* other) {
  using std::swap;
  event_.Swap(&other->event_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  status_.Swap(&other->status_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  branch_.Swap(&other->branch_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafettePipelineTrigger::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafettePipelineTrigger* Arena::CreateMaybeMessage< ::manifest::v1::EstafettePipelineTrigger >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafettePipelineTrigger >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
