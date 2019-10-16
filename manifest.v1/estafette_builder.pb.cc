// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_builder.proto

#include "manifest.v1/estafette_builder.pb.h"

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
class EstafetteBuilderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteBuilder>
      _instance;
} _EstafetteBuilder_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto {
static void InitDefaultsEstafetteBuilder() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteBuilder_default_instance_;
    new (ptr) ::manifest::v1::EstafetteBuilder();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteBuilder::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteBuilder =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEstafetteBuilder}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteBuilder.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteBuilder, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteBuilder, track_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteBuilder, operating_system_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteBuilder)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteBuilder_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_builder.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n#manifest.v1/estafette_builder.proto\022\013m"
      "anifest.v1\";\n\020EstafetteBuilder\022\r\n\005track\030"
      "\001 \001(\t\022\030\n\020operating_system\030\002 \001(\tB@Z>githu"
      "b.com/estafette/estafette-ci-contracts-g"
      "olang/manifest_v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 185);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_builder.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteBuilder::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteBuilder::kTrackFieldNumber;
const int EstafetteBuilder::kOperatingSystemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteBuilder::EstafetteBuilder()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::scc_info_EstafetteBuilder.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteBuilder)
}
EstafetteBuilder::EstafetteBuilder(const EstafetteBuilder& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  track_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.track().size() > 0) {
    track_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.track_);
  }
  operating_system_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.operating_system().size() > 0) {
    operating_system_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operating_system_);
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteBuilder)
}

void EstafetteBuilder::SharedCtor() {
  track_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  operating_system_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

EstafetteBuilder::~EstafetteBuilder() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteBuilder)
  SharedDtor();
}

void EstafetteBuilder::SharedDtor() {
  track_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  operating_system_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EstafetteBuilder::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteBuilder::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteBuilder& EstafetteBuilder::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::scc_info_EstafetteBuilder.base);
  return *internal_default_instance();
}


void EstafetteBuilder::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteBuilder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  track_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  operating_system_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EstafetteBuilder::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteBuilder)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string track = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_track()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->track().data(), static_cast<int>(this->track().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteBuilder.track"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string operating_system = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_operating_system()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->operating_system().data(), static_cast<int>(this->operating_system().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.EstafetteBuilder.operating_system"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteBuilder)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteBuilder)
  return false;
#undef DO_
}

void EstafetteBuilder::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteBuilder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string track = 1;
  if (this->track().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->track().data(), static_cast<int>(this->track().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteBuilder.track");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->track(), output);
  }

  // string operating_system = 2;
  if (this->operating_system().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operating_system().data(), static_cast<int>(this->operating_system().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteBuilder.operating_system");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->operating_system(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteBuilder)
}

::google::protobuf::uint8* EstafetteBuilder::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteBuilder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string track = 1;
  if (this->track().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->track().data(), static_cast<int>(this->track().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteBuilder.track");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->track(), target);
  }

  // string operating_system = 2;
  if (this->operating_system().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->operating_system().data(), static_cast<int>(this->operating_system().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.EstafetteBuilder.operating_system");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->operating_system(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteBuilder)
  return target;
}

size_t EstafetteBuilder::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteBuilder)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string track = 1;
  if (this->track().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->track());
  }

  // string operating_system = 2;
  if (this->operating_system().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->operating_system());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteBuilder::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteBuilder)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteBuilder* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteBuilder>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteBuilder)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteBuilder)
    MergeFrom(*source);
  }
}

void EstafetteBuilder::MergeFrom(const EstafetteBuilder& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteBuilder)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.track().size() > 0) {

    track_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.track_);
  }
  if (from.operating_system().size() > 0) {

    operating_system_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.operating_system_);
  }
}

void EstafetteBuilder::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteBuilder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteBuilder::CopyFrom(const EstafetteBuilder& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteBuilder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteBuilder::IsInitialized() const {
  return true;
}

void EstafetteBuilder::Swap(EstafetteBuilder* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteBuilder::InternalSwap(EstafetteBuilder* other) {
  using std::swap;
  track_.Swap(&other->track_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  operating_system_.Swap(&other->operating_system_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteBuilder::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fbuilder_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteBuilder* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteBuilder >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteBuilder >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)