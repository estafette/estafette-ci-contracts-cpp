// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/container_repository_credential_config.proto

#include "estafette/ci/contracts/v1/container_repository_credential_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {
class ContainerRepositoryCredentialConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ContainerRepositoryCredentialConfig> _instance;
} _ContainerRepositoryCredentialConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::contracts::v1::_ContainerRepositoryCredentialConfig_default_instance_;
    new (ptr) ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig, repository_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig, username_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig, password_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::contracts::v1::_ContainerRepositoryCredentialConfig_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto[] =
  "\nFestafette/ci/contracts/v1/container_re"
  "pository_credential_config.proto\022\031estafe"
  "tte.ci.contracts.v1\"]\n#ContainerReposito"
  "ryCredentialConfig\022\022\n\nrepository\030\001 \001(\t\022\020"
  "\n\010username\030\002 \001(\t\022\020\n\010password\030\003 \001(\tB{\n\035co"
  "m.estafette.ci.contracts.v1P\001Z<github.co"
  "m/estafette/estafette-ci-protos-golang/c"
  "ontracts/v1\252\002\031Estafette.Ci.Contracts.V1b"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_sccs[1] = {
  &scc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_once;
static bool descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto = {
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto, "estafette/ci/contracts/v1/container_repository_credential_config.proto", 327,
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_once, descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_sccs, descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto, file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto), true);
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

void ContainerRepositoryCredentialConfig::InitAsDefaultInstance() {
}
class ContainerRepositoryCredentialConfig::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ContainerRepositoryCredentialConfig::kRepositoryFieldNumber;
const int ContainerRepositoryCredentialConfig::kUsernameFieldNumber;
const int ContainerRepositoryCredentialConfig::kPasswordFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ContainerRepositoryCredentialConfig::ContainerRepositoryCredentialConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
}
ContainerRepositoryCredentialConfig::ContainerRepositoryCredentialConfig(const ContainerRepositoryCredentialConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  repository_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.repository().size() > 0) {
    repository_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repository_);
  }
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.password().size() > 0) {
    password_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
}

void ContainerRepositoryCredentialConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto.base);
  repository_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ContainerRepositoryCredentialConfig::~ContainerRepositoryCredentialConfig() {
  // @@protoc_insertion_point(destructor:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  SharedDtor();
}

void ContainerRepositoryCredentialConfig::SharedDtor() {
  repository_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ContainerRepositoryCredentialConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ContainerRepositoryCredentialConfig& ContainerRepositoryCredentialConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ContainerRepositoryCredentialConfig_estafette_2fci_2fcontracts_2fv1_2fcontainer_5frepository_5fcredential_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void ContainerRepositoryCredentialConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repository_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ContainerRepositoryCredentialConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string repository = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_repository(), ptr, ctx, "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string username = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_username(), ptr, ctx, "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string password = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_password(), ptr, ctx, "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ContainerRepositoryCredentialConfig::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string repository = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_repository()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->repository().data(), static_cast<int>(this->repository().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string username = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string password = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->password().data(), static_cast<int>(this->password().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password"));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ContainerRepositoryCredentialConfig::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string repository = 1;
  if (this->repository().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repository().data(), static_cast<int>(this->repository().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->repository(), output);
  }

  // string username = 2;
  if (this->username().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->username(), output);
  }

  // string password = 3;
  if (this->password().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->password().data(), static_cast<int>(this->password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->password(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
}

::PROTOBUF_NAMESPACE_ID::uint8* ContainerRepositoryCredentialConfig::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string repository = 1;
  if (this->repository().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->repository().data(), static_cast<int>(this->repository().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.repository");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->repository(), target);
  }

  // string username = 2;
  if (this->username().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.username");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->username(), target);
  }

  // string password = 3;
  if (this->password().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->password().data(), static_cast<int>(this->password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig.password");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->password(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  return target;
}

size_t ContainerRepositoryCredentialConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string repository = 1;
  if (this->repository().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->repository());
  }

  // string username = 2;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->username());
  }

  // string password = 3;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->password());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ContainerRepositoryCredentialConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const ContainerRepositoryCredentialConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ContainerRepositoryCredentialConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
    MergeFrom(*source);
  }
}

void ContainerRepositoryCredentialConfig::MergeFrom(const ContainerRepositoryCredentialConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.repository().size() > 0) {

    repository_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.repository_);
  }
  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.password().size() > 0) {

    password_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
}

void ContainerRepositoryCredentialConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ContainerRepositoryCredentialConfig::CopyFrom(const ContainerRepositoryCredentialConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.contracts.v1.ContainerRepositoryCredentialConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContainerRepositoryCredentialConfig::IsInitialized() const {
  return true;
}

void ContainerRepositoryCredentialConfig::Swap(ContainerRepositoryCredentialConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ContainerRepositoryCredentialConfig::InternalSwap(ContainerRepositoryCredentialConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  repository_.Swap(&other->repository_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  username_.Swap(&other->username_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  password_.Swap(&other->password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ContainerRepositoryCredentialConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig* Arena::CreateMaybeMessage< ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::contracts::v1::ContainerRepositoryCredentialConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>