// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/contracts/v1/trusted_image_config.proto

#include "estafette/ci/contracts/v1/trusted_image_config.pb.h"

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
class TrustedImageConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TrustedImageConfig> _instance;
} _TrustedImageConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::contracts::v1::_TrustedImageConfig_default_instance_;
    new (ptr) ::estafette::ci::contracts::v1::TrustedImageConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::contracts::v1::TrustedImageConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, image_path_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, run_privileged_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, run_docker_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, allow_commands_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::contracts::v1::TrustedImageConfig, injected_credential_types_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::contracts::v1::TrustedImageConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::contracts::v1::_TrustedImageConfig_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto[] =
  "\n4estafette/ci/contracts/v1/trusted_imag"
  "e_config.proto\022\031estafette.ci.contracts.v"
  "1\"\217\001\n\022TrustedImageConfig\022\022\n\nimage_path\030\001"
  " \001(\t\022\026\n\016run_privileged\030\002 \001(\010\022\022\n\nrun_dock"
  "er\030\003 \001(\010\022\026\n\016allow_commands\030\004 \001(\010\022!\n\031inje"
  "cted_credential_types\030\005 \003(\tB{\n\035com.estaf"
  "ette.ci.contracts.v1P\001Z<github.com/estaf"
  "ette/estafette-ci-protos-golang/contract"
  "s/v1\252\002\031Estafette.Ci.Contracts.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_sccs[1] = {
  &scc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_once;
static bool descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto = {
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto, "estafette/ci/contracts/v1/trusted_image_config.proto", 360,
  &descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_once, descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_sccs, descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto, file_level_service_descriptors_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto), true);
namespace estafette {
namespace ci {
namespace contracts {
namespace v1 {

// ===================================================================

void TrustedImageConfig::InitAsDefaultInstance() {
}
class TrustedImageConfig::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrustedImageConfig::kImagePathFieldNumber;
const int TrustedImageConfig::kRunPrivilegedFieldNumber;
const int TrustedImageConfig::kRunDockerFieldNumber;
const int TrustedImageConfig::kAllowCommandsFieldNumber;
const int TrustedImageConfig::kInjectedCredentialTypesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrustedImageConfig::TrustedImageConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.contracts.v1.TrustedImageConfig)
}
TrustedImageConfig::TrustedImageConfig(const TrustedImageConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      injected_credential_types_(from.injected_credential_types_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  image_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.image_path().size() > 0) {
    image_path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.image_path_);
  }
  ::memcpy(&run_privileged_, &from.run_privileged_,
    static_cast<size_t>(reinterpret_cast<char*>(&allow_commands_) -
    reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
  // @@protoc_insertion_point(copy_constructor:estafette.ci.contracts.v1.TrustedImageConfig)
}

void TrustedImageConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto.base);
  image_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&run_privileged_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&allow_commands_) -
      reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
}

TrustedImageConfig::~TrustedImageConfig() {
  // @@protoc_insertion_point(destructor:estafette.ci.contracts.v1.TrustedImageConfig)
  SharedDtor();
}

void TrustedImageConfig::SharedDtor() {
  image_path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TrustedImageConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TrustedImageConfig& TrustedImageConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TrustedImageConfig_estafette_2fci_2fcontracts_2fv1_2ftrusted_5fimage_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void TrustedImageConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.contracts.v1.TrustedImageConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  injected_credential_types_.Clear();
  image_path_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&run_privileged_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&allow_commands_) -
      reinterpret_cast<char*>(&run_privileged_)) + sizeof(allow_commands_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TrustedImageConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string image_path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_image_path(), ptr, ctx, "estafette.ci.contracts.v1.TrustedImageConfig.image_path");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool run_privileged = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          run_privileged_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool run_docker = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          run_docker_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool allow_commands = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          allow_commands_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string injected_credential_types = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(add_injected_credential_types(), ptr, ctx, "estafette.ci.contracts.v1.TrustedImageConfig.injected_credential_types");
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 42);
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
bool TrustedImageConfig::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.contracts.v1.TrustedImageConfig)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string image_path = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_image_path()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->image_path().data(), static_cast<int>(this->image_path().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.TrustedImageConfig.image_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool run_privileged = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &run_privileged_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool run_docker = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &run_docker_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool allow_commands = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_commands_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string injected_credential_types = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->add_injected_credential_types()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->injected_credential_types(this->injected_credential_types_size() - 1).data(),
            static_cast<int>(this->injected_credential_types(this->injected_credential_types_size() - 1).length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.contracts.v1.TrustedImageConfig.injected_credential_types"));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.contracts.v1.TrustedImageConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.contracts.v1.TrustedImageConfig)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TrustedImageConfig::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.contracts.v1.TrustedImageConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->image_path().data(), static_cast<int>(this->image_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.TrustedImageConfig.image_path");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->image_path(), output);
  }

  // bool run_privileged = 2;
  if (this->run_privileged() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(2, this->run_privileged(), output);
  }

  // bool run_docker = 3;
  if (this->run_docker() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(3, this->run_docker(), output);
  }

  // bool allow_commands = 4;
  if (this->allow_commands() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->allow_commands(), output);
  }

  // repeated string injected_credential_types = 5;
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->injected_credential_types(i).data(), static_cast<int>(this->injected_credential_types(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.TrustedImageConfig.injected_credential_types");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteString(
      5, this->injected_credential_types(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.contracts.v1.TrustedImageConfig)
}

::PROTOBUF_NAMESPACE_ID::uint8* TrustedImageConfig::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.contracts.v1.TrustedImageConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->image_path().data(), static_cast<int>(this->image_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.TrustedImageConfig.image_path");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->image_path(), target);
  }

  // bool run_privileged = 2;
  if (this->run_privileged() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->run_privileged(), target);
  }

  // bool run_docker = 3;
  if (this->run_docker() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->run_docker(), target);
  }

  // bool allow_commands = 4;
  if (this->allow_commands() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->allow_commands(), target);
  }

  // repeated string injected_credential_types = 5;
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->injected_credential_types(i).data(), static_cast<int>(this->injected_credential_types(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.contracts.v1.TrustedImageConfig.injected_credential_types");
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteStringToArray(5, this->injected_credential_types(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.contracts.v1.TrustedImageConfig)
  return target;
}

size_t TrustedImageConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.contracts.v1.TrustedImageConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string injected_credential_types = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->injected_credential_types_size());
  for (int i = 0, n = this->injected_credential_types_size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      this->injected_credential_types(i));
  }

  // string image_path = 1;
  if (this->image_path().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
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

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrustedImageConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.contracts.v1.TrustedImageConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const TrustedImageConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TrustedImageConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.contracts.v1.TrustedImageConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.contracts.v1.TrustedImageConfig)
    MergeFrom(*source);
  }
}

void TrustedImageConfig::MergeFrom(const TrustedImageConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.contracts.v1.TrustedImageConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  injected_credential_types_.MergeFrom(from.injected_credential_types_);
  if (from.image_path().size() > 0) {

    image_path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.image_path_);
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

void TrustedImageConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.contracts.v1.TrustedImageConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrustedImageConfig::CopyFrom(const TrustedImageConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.contracts.v1.TrustedImageConfig)
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
  _internal_metadata_.Swap(&other->_internal_metadata_);
  injected_credential_types_.InternalSwap(CastToBase(&other->injected_credential_types_));
  image_path_.Swap(&other->image_path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(run_privileged_, other->run_privileged_);
  swap(run_docker_, other->run_docker_);
  swap(allow_commands_, other->allow_commands_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TrustedImageConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::contracts::v1::TrustedImageConfig* Arena::CreateMaybeMessage< ::estafette::ci::contracts::v1::TrustedImageConfig >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::contracts::v1::TrustedImageConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
