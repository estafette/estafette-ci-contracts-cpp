// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/trusted_image_config.proto

#include "contracts.v1/trusted_image_config.pb.h"

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
class TrustedImageConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TrustedImageConfig>
      _instance;
} _TrustedImageConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto {
static void InitDefaultsTrustedImageConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_TrustedImageConfig_default_instance_;
    new (ptr) ::contracts::v1::TrustedImageConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::TrustedImageConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TrustedImageConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTrustedImageConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TrustedImageConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, image_path_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, run_privileged_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, run_docker_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, allow_commands_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::TrustedImageConfig, injected_credential_types_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::TrustedImageConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_TrustedImageConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/trusted_image_config.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\'contracts.v1/trusted_image_config.prot"
      "o\022\014contracts.v1\"\217\001\n\022TrustedImageConfig\022\022"
      "\n\nimage_path\030\001 \001(\t\022\026\n\016run_privileged\030\002 \001"
      "(\010\022\022\n\nrun_docker\030\003 \001(\010\022\026\n\016allow_commands"
      "\030\004 \001(\010\022!\n\031injected_credential_types\030\005 \003("
      "\tB{\n\034io.estafette.ci.contracts.v1Z\?githu"
      "b.com/estafette/estafette-ci-contracts-g"
      "olang/contracts_v1\252\002\031Estafette.CI.Contra"
      "cts.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 334);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/trusted_image_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void TrustedImageConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrustedImageConfig::kImagePathFieldNumber;
const int TrustedImageConfig::kRunPrivilegedFieldNumber;
const int TrustedImageConfig::kRunDockerFieldNumber;
const int TrustedImageConfig::kAllowCommandsFieldNumber;
const int TrustedImageConfig::kInjectedCredentialTypesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrustedImageConfig::TrustedImageConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::scc_info_TrustedImageConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.TrustedImageConfig)
}
TrustedImageConfig::TrustedImageConfig(const TrustedImageConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      injected_credential_types_(from.injected_credential_types_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  image_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.image_path().size() > 0) {
    image_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.image_path_);
  }
  ::memcpy(&run_privileged_, &from.run_privileged_,
    static_cast<size_t>(reinterpret_cast<char*>(&allow_commands_) -
    reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
  // @@protoc_insertion_point(copy_constructor:contracts.v1.TrustedImageConfig)
}

void TrustedImageConfig::SharedCtor() {
  image_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&run_privileged_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&allow_commands_) -
      reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
}

TrustedImageConfig::~TrustedImageConfig() {
  // @@protoc_insertion_point(destructor:contracts.v1.TrustedImageConfig)
  SharedDtor();
}

void TrustedImageConfig::SharedDtor() {
  image_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TrustedImageConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TrustedImageConfig::descriptor() {
  ::protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TrustedImageConfig& TrustedImageConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::scc_info_TrustedImageConfig.base);
  return *internal_default_instance();
}


void TrustedImageConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.TrustedImageConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  injected_credential_types_.Clear();
  image_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&run_privileged_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&allow_commands_) -
      reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
  _internal_metadata_.Clear();
}

bool TrustedImageConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.TrustedImageConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string image_path = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_image_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->image_path().data(), static_cast<int>(this->image_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.TrustedImageConfig.image_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool run_privileged = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &run_privileged_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool run_docker = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &run_docker_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool allow_commands = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_commands_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string injected_credential_types = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_injected_credential_types()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->injected_credential_types(this->injected_credential_types_size() - 1).data(),
            static_cast<int>(this->injected_credential_types(this->injected_credential_types_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.TrustedImageConfig.injected_credential_types"));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.TrustedImageConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.TrustedImageConfig)
  return false;
#undef DO_
}

void TrustedImageConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.TrustedImageConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->image_path().data(), static_cast<int>(this->image_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.TrustedImageConfig.image_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->image_path(), output);
  }

  // bool run_privileged = 2;
  if (this->run_privileged() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->run_privileged(), output);
  }

  // bool run_docker = 3;
  if (this->run_docker() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->run_docker(), output);
  }

  // bool allow_commands = 4;
  if (this->allow_commands() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->allow_commands(), output);
  }

  // repeated string injected_credential_types = 5;
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->injected_credential_types(i).data(), static_cast<int>(this->injected_credential_types(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.TrustedImageConfig.injected_credential_types");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->injected_credential_types(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.TrustedImageConfig)
}

::google::protobuf::uint8* TrustedImageConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.TrustedImageConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->image_path().data(), static_cast<int>(this->image_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.TrustedImageConfig.image_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->image_path(), target);
  }

  // bool run_privileged = 2;
  if (this->run_privileged() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->run_privileged(), target);
  }

  // bool run_docker = 3;
  if (this->run_docker() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->run_docker(), target);
  }

  // bool allow_commands = 4;
  if (this->allow_commands() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->allow_commands(), target);
  }

  // repeated string injected_credential_types = 5;
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->injected_credential_types(i).data(), static_cast<int>(this->injected_credential_types(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.TrustedImageConfig.injected_credential_types");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(5, this->injected_credential_types(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.TrustedImageConfig)
  return target;
}

size_t TrustedImageConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.TrustedImageConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string injected_credential_types = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->injected_credential_types_size());
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->injected_credential_types(i));
  }

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->image_path());
  }

  // bool run_privileged = 2;
  if (this->run_privileged() != 0) {
    total_size += 1 + 1;
  }

  // bool run_docker = 3;
  if (this->run_docker() != 0) {
    total_size += 1 + 1;
  }

  // bool allow_commands = 4;
  if (this->allow_commands() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrustedImageConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.TrustedImageConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const TrustedImageConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TrustedImageConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.TrustedImageConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.TrustedImageConfig)
    MergeFrom(*source);
  }
}

void TrustedImageConfig::MergeFrom(const TrustedImageConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.TrustedImageConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  injected_credential_types_.MergeFrom(from.injected_credential_types_);
  if (from.image_path().size() > 0) {

    image_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.image_path_);
  }
  if (from.run_privileged() != 0) {
    set_run_privileged(from.run_privileged());
  }
  if (from.run_docker() != 0) {
    set_run_docker(from.run_docker());
  }
  if (from.allow_commands() != 0) {
    set_allow_commands(from.allow_commands());
  }
}

void TrustedImageConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.TrustedImageConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrustedImageConfig::CopyFrom(const TrustedImageConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.TrustedImageConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrustedImageConfig::IsInitialized() const {
  return true;
}

void TrustedImageConfig::Swap(TrustedImageConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrustedImageConfig::InternalSwap(TrustedImageConfig* other) {
  using std::swap;
  injected_credential_types_.InternalSwap(CastToBase(&other->injected_credential_types_));
  image_path_.Swap(&other->image_path_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(run_privileged_, other->run_privileged_);
  swap(run_docker_, other->run_docker_);
  swap(allow_commands_, other->allow_commands_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TrustedImageConfig::GetMetadata() const {
  protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2ftrusted_5fimage_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::TrustedImageConfig* Arena::CreateMaybeMessage< ::contracts::v1::TrustedImageConfig >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::TrustedImageConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
