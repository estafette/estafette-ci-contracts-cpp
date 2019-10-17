// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/build_version_config.proto

#include "contracts.v1/build_version_config.pb.h"

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
class BuildVersionConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BuildVersionConfig>
      _instance;
} _BuildVersionConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto {
static void InitDefaultsBuildVersionConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_BuildVersionConfig_default_instance_;
    new (ptr) ::contracts::v1::BuildVersionConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::BuildVersionConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_BuildVersionConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBuildVersionConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_BuildVersionConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, major_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, minor_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, patch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, label_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::BuildVersionConfig, auto_increment_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::BuildVersionConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_BuildVersionConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/build_version_config.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\'contracts.v1/build_version_config.prot"
      "o\022\014contracts.v1\"y\n\022BuildVersionConfig\022\017\n"
      "\007version\030\001 \001(\t\022\r\n\005major\030\002 \001(\003\022\r\n\005minor\030\003"
      " \001(\003\022\r\n\005patch\030\004 \001(\t\022\r\n\005label\030\005 \001(\t\022\026\n\016au"
      "to_increment\030\006 \001(\003B]Z\?github.com/estafet"
      "te/estafette-ci-contracts-golang/contrac"
      "ts_v1\252\002\031Estafette.CI.Contracts.V1b\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 281);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/build_version_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void BuildVersionConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BuildVersionConfig::kVersionFieldNumber;
const int BuildVersionConfig::kMajorFieldNumber;
const int BuildVersionConfig::kMinorFieldNumber;
const int BuildVersionConfig::kPatchFieldNumber;
const int BuildVersionConfig::kLabelFieldNumber;
const int BuildVersionConfig::kAutoIncrementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BuildVersionConfig::BuildVersionConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::scc_info_BuildVersionConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.BuildVersionConfig)
}
BuildVersionConfig::BuildVersionConfig(const BuildVersionConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  patch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.patch().size() > 0) {
    patch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.patch_);
  }
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.label().size() > 0) {
    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
  ::memcpy(&major_, &from.major_,
    static_cast<size_t>(reinterpret_cast<char*>(&auto_increment_) -
    reinterpret_cast<char*>(&major_)) + sizeof(auto_increment_));
  // @@protoc_insertion_point(copy_constructor:contracts.v1.BuildVersionConfig)
}

void BuildVersionConfig::SharedCtor() {
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  patch_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&major_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&auto_increment_) -
      reinterpret_cast<char*>(&major_)) + sizeof(auto_increment_));
}

BuildVersionConfig::~BuildVersionConfig() {
  // @@protoc_insertion_point(destructor:contracts.v1.BuildVersionConfig)
  SharedDtor();
}

void BuildVersionConfig::SharedDtor() {
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  patch_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BuildVersionConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* BuildVersionConfig::descriptor() {
  ::protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BuildVersionConfig& BuildVersionConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::scc_info_BuildVersionConfig.base);
  return *internal_default_instance();
}


void BuildVersionConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.BuildVersionConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  patch_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&major_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&auto_increment_) -
      reinterpret_cast<char*>(&major_)) + sizeof(auto_increment_));
  _internal_metadata_.Clear();
}

bool BuildVersionConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.BuildVersionConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.BuildVersionConfig.version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 major = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &major_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 minor = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &minor_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string patch = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_patch()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->patch().data(), static_cast<int>(this->patch().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.BuildVersionConfig.patch"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string label = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->label().data(), static_cast<int>(this->label().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.BuildVersionConfig.label"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 auto_increment = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &auto_increment_)));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.BuildVersionConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.BuildVersionConfig)
  return false;
#undef DO_
}

void BuildVersionConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.BuildVersionConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string version = 1;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->version(), output);
  }

  // int64 major = 2;
  if (this->major() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->major(), output);
  }

  // int64 minor = 3;
  if (this->minor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->minor(), output);
  }

  // string patch = 4;
  if (this->patch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->patch().data(), static_cast<int>(this->patch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.patch");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->patch(), output);
  }

  // string label = 5;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), static_cast<int>(this->label().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.label");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->label(), output);
  }

  // int64 auto_increment = 6;
  if (this->auto_increment() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->auto_increment(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.BuildVersionConfig)
}

::google::protobuf::uint8* BuildVersionConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.BuildVersionConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string version = 1;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->version(), target);
  }

  // int64 major = 2;
  if (this->major() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->major(), target);
  }

  // int64 minor = 3;
  if (this->minor() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->minor(), target);
  }

  // string patch = 4;
  if (this->patch().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->patch().data(), static_cast<int>(this->patch().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.patch");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->patch(), target);
  }

  // string label = 5;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), static_cast<int>(this->label().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.BuildVersionConfig.label");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->label(), target);
  }

  // int64 auto_increment = 6;
  if (this->auto_increment() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->auto_increment(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.BuildVersionConfig)
  return target;
}

size_t BuildVersionConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.BuildVersionConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string version = 1;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // string patch = 4;
  if (this->patch().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->patch());
  }

  // string label = 5;
  if (this->label().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->label());
  }

  // int64 major = 2;
  if (this->major() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->major());
  }

  // int64 minor = 3;
  if (this->minor() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->minor());
  }

  // int64 auto_increment = 6;
  if (this->auto_increment() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->auto_increment());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BuildVersionConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.BuildVersionConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const BuildVersionConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BuildVersionConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.BuildVersionConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.BuildVersionConfig)
    MergeFrom(*source);
  }
}

void BuildVersionConfig::MergeFrom(const BuildVersionConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.BuildVersionConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.patch().size() > 0) {

    patch_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.patch_);
  }
  if (from.label().size() > 0) {

    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
  if (from.major() != 0) {
    set_major(from.major());
  }
  if (from.minor() != 0) {
    set_minor(from.minor());
  }
  if (from.auto_increment() != 0) {
    set_auto_increment(from.auto_increment());
  }
}

void BuildVersionConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.BuildVersionConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BuildVersionConfig::CopyFrom(const BuildVersionConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.BuildVersionConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuildVersionConfig::IsInitialized() const {
  return true;
}

void BuildVersionConfig::Swap(BuildVersionConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BuildVersionConfig::InternalSwap(BuildVersionConfig* other) {
  using std::swap;
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  patch_.Swap(&other->patch_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  label_.Swap(&other->label_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(major_, other->major_);
  swap(minor_, other->minor_);
  swap(auto_increment_, other->auto_increment_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata BuildVersionConfig::GetMetadata() const {
  protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fbuild_5fversion_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::BuildVersionConfig* Arena::CreateMaybeMessage< ::contracts::v1::BuildVersionConfig >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::BuildVersionConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
