// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_cron_trigger.proto

#include "estafette/ci/manifest/v1/estafette_cron_trigger.pb.h"

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
namespace manifest {
namespace v1 {
class EstafetteCronTriggerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EstafetteCronTrigger> _instance;
} _EstafetteCronTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::manifest::v1::_EstafetteCronTrigger_default_instance_;
    new (ptr) ::estafette::ci::manifest::v1::EstafetteCronTrigger();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::manifest::v1::EstafetteCronTrigger::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteCronTrigger, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafetteCronTrigger, schedule_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::manifest::v1::EstafetteCronTrigger)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::manifest::v1::_EstafetteCronTrigger_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto[] =
  "\n5estafette/ci/manifest/v1/estafette_cro"
  "n_trigger.proto\022\030estafette.ci.manifest.v"
  "1\"(\n\024EstafetteCronTrigger\022\020\n\010schedule\030\001 "
  "\001(\tBx\n\034com.estafette.ci.manifest.v1P\001Z;g"
  "ithub.com/estafette/estafette-ci-protos-"
  "golang/manifest_v1\252\002\030Estafette.Ci.Manife"
  "st.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_sccs[1] = {
  &scc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_once;
static bool descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto = {
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto, "estafette/ci/manifest/v1/estafette_cron_trigger.proto", 253,
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_once, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_sccs, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto, file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto), true);
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteCronTrigger::InitAsDefaultInstance() {
}
class EstafetteCronTrigger::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteCronTrigger::kScheduleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteCronTrigger::EstafetteCronTrigger()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.manifest.v1.EstafetteCronTrigger)
}
EstafetteCronTrigger::EstafetteCronTrigger(const EstafetteCronTrigger& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  schedule_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.schedule().size() > 0) {
    schedule_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.schedule_);
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.manifest.v1.EstafetteCronTrigger)
}

void EstafetteCronTrigger::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto.base);
  schedule_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EstafetteCronTrigger::~EstafetteCronTrigger() {
  // @@protoc_insertion_point(destructor:estafette.ci.manifest.v1.EstafetteCronTrigger)
  SharedDtor();
}

void EstafetteCronTrigger::SharedDtor() {
  schedule_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EstafetteCronTrigger::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EstafetteCronTrigger& EstafetteCronTrigger::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EstafetteCronTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fcron_5ftrigger_2eproto.base);
  return *internal_default_instance();
}


void EstafetteCronTrigger::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  schedule_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EstafetteCronTrigger::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string schedule = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_schedule(), ptr, ctx, "estafette.ci.manifest.v1.EstafetteCronTrigger.schedule");
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
bool EstafetteCronTrigger::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string schedule = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_schedule()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->schedule().data(), static_cast<int>(this->schedule().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafetteCronTrigger.schedule"));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.manifest.v1.EstafetteCronTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.manifest.v1.EstafetteCronTrigger)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EstafetteCronTrigger::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string schedule = 1;
  if (this->schedule().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->schedule().data(), static_cast<int>(this->schedule().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafetteCronTrigger.schedule");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->schedule(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.manifest.v1.EstafetteCronTrigger)
}

::PROTOBUF_NAMESPACE_ID::uint8* EstafetteCronTrigger::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string schedule = 1;
  if (this->schedule().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->schedule().data(), static_cast<int>(this->schedule().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafetteCronTrigger.schedule");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->schedule(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.manifest.v1.EstafetteCronTrigger)
  return target;
}

size_t EstafetteCronTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string schedule = 1;
  if (this->schedule().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->schedule());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteCronTrigger::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteCronTrigger* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EstafetteCronTrigger>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.manifest.v1.EstafetteCronTrigger)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.manifest.v1.EstafetteCronTrigger)
    MergeFrom(*source);
  }
}

void EstafetteCronTrigger::MergeFrom(const EstafetteCronTrigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.schedule().size() > 0) {

    schedule_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.schedule_);
  }
}

void EstafetteCronTrigger::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteCronTrigger::CopyFrom(const EstafetteCronTrigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.manifest.v1.EstafetteCronTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteCronTrigger::IsInitialized() const {
  return true;
}

void EstafetteCronTrigger::Swap(EstafetteCronTrigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteCronTrigger::InternalSwap(EstafetteCronTrigger* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  schedule_.Swap(&other->schedule_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EstafetteCronTrigger::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::manifest::v1::EstafetteCronTrigger* Arena::CreateMaybeMessage< ::estafette::ci::manifest::v1::EstafetteCronTrigger >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::manifest::v1::EstafetteCronTrigger >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
