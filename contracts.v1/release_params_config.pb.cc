// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/release_params_config.proto

#include "contracts.v1/release_params_config.pb.h"

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

namespace contracts {
namespace v1 {
class ReleaseParamsConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReleaseParamsConfig>
      _instance;
} _ReleaseParamsConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto {
static void InitDefaultsReleaseParamsConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_ReleaseParamsConfig_default_instance_;
    new (ptr) ::contracts::v1::ReleaseParamsConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::ReleaseParamsConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ReleaseParamsConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsReleaseParamsConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ReleaseParamsConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseParamsConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseParamsConfig, release_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseParamsConfig, release_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseParamsConfig, release_action_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ReleaseParamsConfig, triggered_by_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::ReleaseParamsConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_ReleaseParamsConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/release_params_config.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(contracts.v1/release_params_config.pro"
      "to\022\014contracts.v1\"m\n\023ReleaseParamsConfig\022"
      "\024\n\014release_name\030\001 \001(\t\022\022\n\nrelease_id\030\002 \001("
      "\003\022\026\n\016release_action\030\003 \001(\t\022\024\n\014triggered_b"
      "y\030\004 \001(\tBAZ\?github.com/estafette/estafett"
      "e-ci-contracts-golang/contracts_v1b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/release_params_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void ReleaseParamsConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReleaseParamsConfig::kReleaseNameFieldNumber;
const int ReleaseParamsConfig::kReleaseIdFieldNumber;
const int ReleaseParamsConfig::kReleaseActionFieldNumber;
const int ReleaseParamsConfig::kTriggeredByFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReleaseParamsConfig::ReleaseParamsConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::scc_info_ReleaseParamsConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.ReleaseParamsConfig)
}
ReleaseParamsConfig::ReleaseParamsConfig(const ReleaseParamsConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  release_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.release_name().size() > 0) {
    release_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.release_name_);
  }
  release_action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.release_action().size() > 0) {
    release_action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.release_action_);
  }
  triggered_by_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.triggered_by().size() > 0) {
    triggered_by_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.triggered_by_);
  }
  release_id_ = from.release_id_;
  // @@protoc_insertion_point(copy_constructor:contracts.v1.ReleaseParamsConfig)
}

void ReleaseParamsConfig::SharedCtor() {
  release_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  release_action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  triggered_by_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  release_id_ = GOOGLE_LONGLONG(0);
}

ReleaseParamsConfig::~ReleaseParamsConfig() {
  // @@protoc_insertion_point(destructor:contracts.v1.ReleaseParamsConfig)
  SharedDtor();
}

void ReleaseParamsConfig::SharedDtor() {
  release_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  release_action_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  triggered_by_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReleaseParamsConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ReleaseParamsConfig::descriptor() {
  ::protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReleaseParamsConfig& ReleaseParamsConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::scc_info_ReleaseParamsConfig.base);
  return *internal_default_instance();
}


void ReleaseParamsConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.ReleaseParamsConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  release_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  release_action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  triggered_by_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  release_id_ = GOOGLE_LONGLONG(0);
  _internal_metadata_.Clear();
}

bool ReleaseParamsConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.ReleaseParamsConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string release_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_release_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->release_name().data(), static_cast<int>(this->release_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.ReleaseParamsConfig.release_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 release_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &release_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string release_action = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_release_action()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->release_action().data(), static_cast<int>(this->release_action().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.ReleaseParamsConfig.release_action"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string triggered_by = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_triggered_by()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->triggered_by().data(), static_cast<int>(this->triggered_by().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.ReleaseParamsConfig.triggered_by"));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.ReleaseParamsConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.ReleaseParamsConfig)
  return false;
#undef DO_
}

void ReleaseParamsConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.ReleaseParamsConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string release_name = 1;
  if (this->release_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->release_name().data(), static_cast<int>(this->release_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.release_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->release_name(), output);
  }

  // int64 release_id = 2;
  if (this->release_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->release_id(), output);
  }

  // string release_action = 3;
  if (this->release_action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->release_action().data(), static_cast<int>(this->release_action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.release_action");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->release_action(), output);
  }

  // string triggered_by = 4;
  if (this->triggered_by().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->triggered_by().data(), static_cast<int>(this->triggered_by().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.triggered_by");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->triggered_by(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.ReleaseParamsConfig)
}

::google::protobuf::uint8* ReleaseParamsConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.ReleaseParamsConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string release_name = 1;
  if (this->release_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->release_name().data(), static_cast<int>(this->release_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.release_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->release_name(), target);
  }

  // int64 release_id = 2;
  if (this->release_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->release_id(), target);
  }

  // string release_action = 3;
  if (this->release_action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->release_action().data(), static_cast<int>(this->release_action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.release_action");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->release_action(), target);
  }

  // string triggered_by = 4;
  if (this->triggered_by().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->triggered_by().data(), static_cast<int>(this->triggered_by().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.ReleaseParamsConfig.triggered_by");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->triggered_by(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.ReleaseParamsConfig)
  return target;
}

size_t ReleaseParamsConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.ReleaseParamsConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string release_name = 1;
  if (this->release_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->release_name());
  }

  // string release_action = 3;
  if (this->release_action().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->release_action());
  }

  // string triggered_by = 4;
  if (this->triggered_by().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->triggered_by());
  }

  // int64 release_id = 2;
  if (this->release_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->release_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReleaseParamsConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.ReleaseParamsConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const ReleaseParamsConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReleaseParamsConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.ReleaseParamsConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.ReleaseParamsConfig)
    MergeFrom(*source);
  }
}

void ReleaseParamsConfig::MergeFrom(const ReleaseParamsConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.ReleaseParamsConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.release_name().size() > 0) {

    release_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.release_name_);
  }
  if (from.release_action().size() > 0) {

    release_action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.release_action_);
  }
  if (from.triggered_by().size() > 0) {

    triggered_by_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.triggered_by_);
  }
  if (from.release_id() != 0) {
    set_release_id(from.release_id());
  }
}

void ReleaseParamsConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.ReleaseParamsConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReleaseParamsConfig::CopyFrom(const ReleaseParamsConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.ReleaseParamsConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReleaseParamsConfig::IsInitialized() const {
  return true;
}

void ReleaseParamsConfig::Swap(ReleaseParamsConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReleaseParamsConfig::InternalSwap(ReleaseParamsConfig* other) {
  using std::swap;
  release_name_.Swap(&other->release_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  release_action_.Swap(&other->release_action_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  triggered_by_.Swap(&other->triggered_by_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(release_id_, other->release_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ReleaseParamsConfig::GetMetadata() const {
  protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2frelease_5fparams_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::ReleaseParamsConfig* Arena::CreateMaybeMessage< ::contracts::v1::ReleaseParamsConfig >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::ReleaseParamsConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
