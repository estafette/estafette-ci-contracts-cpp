// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_version.proto

#include "estafette/ci/manifest/v1/estafette_version.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fcustom_5fversion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EstafetteCustomVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fcustom_5fversion_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_estafette_2fci_2fmanifest_2fv1_2festafette_5fsemver_5fversion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_EstafetteSemverVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fsemver_5fversion_2eproto;
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {
class EstafetteVersionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EstafetteVersion> _instance;
} _EstafetteVersion_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::manifest::v1::_EstafetteVersion_default_instance_;
    new (ptr) ::estafette::ci::manifest::v1::EstafetteVersion();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::manifest::v1::EstafetteVersion::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto}, {
      &scc_info_EstafetteSemverVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fsemver_5fversion_2eproto.base,
      &scc_info_EstafetteCustomVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fcustom_5fversion_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteVersion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteVersion, semver_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteVersion, custom_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::manifest::v1::EstafetteVersion)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::manifest::v1::_EstafetteVersion_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto[] =
  "\n0estafette/ci/manifest/v1/estafette_ver"
  "sion.proto\022\030estafette.ci.manifest.v1\0327es"
  "tafette/ci/manifest/v1/estafette_custom_"
  "version.proto\0327estafette/ci/manifest/v1/"
  "estafette_semver_version.proto\"\226\001\n\020Estaf"
  "etteVersion\022@\n\006semver\030\001 \001(\01320.estafette."
  "ci.manifest.v1.EstafetteSemverVersion\022@\n"
  "\006custom\030\002 \001(\01320.estafette.ci.manifest.v1"
  ".EstafetteCustomVersionBx\n\034com.estafette"
  ".ci.manifest.v1P\001Z;github.com/estafette/"
  "estafette-ci-protos-golang/manifest_v1\252\002"
  "\030Estafette.Ci.Manifest.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_deps[2] = {
  &::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcustom_5fversion_2eproto,
  &::descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fsemver_5fversion_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_sccs[1] = {
  &scc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_once;
static bool descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto = {
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto, "estafette/ci/manifest/v1/estafette_version.proto", 473,
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_once, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_sccs, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto, file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto), true);
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteVersion::InitAsDefaultInstance() {
  ::estafette::ci::manifest::v1::_EstafetteVersion_default_instance_._instance.get_mutable()->semver_ = const_cast< ::estafette::ci::manifest::v1::EstafetteSemverVersion*>(
      ::estafette::ci::manifest::v1::EstafetteSemverVersion::internal_default_instance());
  ::estafette::ci::manifest::v1::_EstafetteVersion_default_instance_._instance.get_mutable()->custom_ = const_cast< ::estafette::ci::manifest::v1::EstafetteCustomVersion*>(
      ::estafette::ci::manifest::v1::EstafetteCustomVersion::internal_default_instance());
}
class EstafetteVersion::HasBitSetters {
 public:
  static const ::estafette::ci::manifest::v1::EstafetteSemverVersion& semver(const EstafetteVersion* msg);
  static const ::estafette::ci::manifest::v1::EstafetteCustomVersion& custom(const EstafetteVersion* msg);
};

const ::estafette::ci::manifest::v1::EstafetteSemverVersion&
EstafetteVersion::HasBitSetters::semver(const EstafetteVersion* msg) {
  return *msg->semver_;
}
const ::estafette::ci::manifest::v1::EstafetteCustomVersion&
EstafetteVersion::HasBitSetters::custom(const EstafetteVersion* msg) {
  return *msg->custom_;
}
void EstafetteVersion::clear_semver() {
  if (GetArenaNoVirtual() == nullptr && semver_ != nullptr) {
    delete semver_;
  }
  semver_ = nullptr;
}
void EstafetteVersion::clear_custom() {
  if (GetArenaNoVirtual() == nullptr && custom_ != nullptr) {
    delete custom_;
  }
  custom_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteVersion::kSemverFieldNumber;
const int EstafetteVersion::kCustomFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteVersion::EstafetteVersion()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.manifest.v1.EstafetteVersion)
}
EstafetteVersion::EstafetteVersion(const EstafetteVersion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_semver()) {
    semver_ = new ::estafette::ci::manifest::v1::EstafetteSemverVersion(*from.semver_);
  } else {
    semver_ = nullptr;
  }
  if (from.has_custom()) {
    custom_ = new ::estafette::ci::manifest::v1::EstafetteCustomVersion(*from.custom_);
  } else {
    custom_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.manifest.v1.EstafetteVersion)
}

void EstafetteVersion::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto.base);
  ::memset(&semver_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&custom_) -
      reinterpret_cast<char*>(&semver_)) + sizeof(custom_));
}

EstafetteVersion::~EstafetteVersion() {
  // @@protoc_insertion_point(destructor:estafette.ci.manifest.v1.EstafetteVersion)
  SharedDtor();
}

void EstafetteVersion::SharedDtor() {
  if (this != internal_default_instance()) delete semver_;
  if (this != internal_default_instance()) delete custom_;
}

void EstafetteVersion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EstafetteVersion& EstafetteVersion::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EstafetteVersion_estafette_2fci_2fmanifest_2fv1_2festafette_5fversion_2eproto.base);
  return *internal_default_instance();
}


void EstafetteVersion::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.manifest.v1.EstafetteVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && semver_ != nullptr) {
    delete semver_;
  }
  semver_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && custom_ != nullptr) {
    delete custom_;
  }
  custom_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EstafetteVersion::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .estafette.ci.manifest.v1.EstafetteSemverVersion semver = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_semver(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .estafette.ci.manifest.v1.EstafetteCustomVersion custom = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_custom(), ptr);
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
bool EstafetteVersion::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.manifest.v1.EstafetteVersion)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .estafette.ci.manifest.v1.EstafetteSemverVersion semver = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_semver()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .estafette.ci.manifest.v1.EstafetteCustomVersion custom = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_custom()));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.manifest.v1.EstafetteVersion)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.manifest.v1.EstafetteVersion)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EstafetteVersion::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.manifest.v1.EstafetteVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .estafette.ci.manifest.v1.EstafetteSemverVersion semver = 1;
  if (this->has_semver()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::semver(this), output);
  }

  // .estafette.ci.manifest.v1.EstafetteCustomVersion custom = 2;
  if (this->has_custom()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::custom(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.manifest.v1.EstafetteVersion)
}

::PROTOBUF_NAMESPACE_ID::uint8* EstafetteVersion::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.manifest.v1.EstafetteVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .estafette.ci.manifest.v1.EstafetteSemverVersion semver = 1;
  if (this->has_semver()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::semver(this), target);
  }

  // .estafette.ci.manifest.v1.EstafetteCustomVersion custom = 2;
  if (this->has_custom()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::custom(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.manifest.v1.EstafetteVersion)
  return target;
}

size_t EstafetteVersion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.manifest.v1.EstafetteVersion)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .estafette.ci.manifest.v1.EstafetteSemverVersion semver = 1;
  if (this->has_semver()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *semver_);
  }

  // .estafette.ci.manifest.v1.EstafetteCustomVersion custom = 2;
  if (this->has_custom()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *custom_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteVersion::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.manifest.v1.EstafetteVersion)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteVersion* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EstafetteVersion>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.manifest.v1.EstafetteVersion)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.manifest.v1.EstafetteVersion)
    MergeFrom(*source);
  }
}

void EstafetteVersion::MergeFrom(const EstafetteVersion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.manifest.v1.EstafetteVersion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_semver()) {
    mutable_semver()->::estafette::ci::manifest::v1::EstafetteSemverVersion::MergeFrom(from.semver());
  }
  if (from.has_custom()) {
    mutable_custom()->::estafette::ci::manifest::v1::EstafetteCustomVersion::MergeFrom(from.custom());
  }
}

void EstafetteVersion::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.manifest.v1.EstafetteVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteVersion::CopyFrom(const EstafetteVersion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.manifest.v1.EstafetteVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteVersion::IsInitialized() const {
  return true;
}

void EstafetteVersion::Swap(EstafetteVersion* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteVersion::InternalSwap(EstafetteVersion* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(semver_, other->semver_);
  swap(custom_, other->custom_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EstafetteVersion::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::manifest::v1::EstafetteVersion* Arena::CreateMaybeMessage< ::estafette::ci::manifest::v1::EstafetteVersion >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::manifest::v1::EstafetteVersion >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
