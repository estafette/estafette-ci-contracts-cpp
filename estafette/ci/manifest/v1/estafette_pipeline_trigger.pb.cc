// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: estafette/ci/manifest/v1/estafette_pipeline_trigger.proto

#include "estafette/ci/manifest/v1/estafette_pipeline_trigger.pb.h"

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
class EstafettePipelineTriggerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EstafettePipelineTrigger> _instance;
} _EstafettePipelineTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
static void InitDefaultsscc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::estafette::ci::manifest::v1::_EstafettePipelineTrigger_default_instance_;
    new (ptr) ::estafette::ci::manifest::v1::EstafettePipelineTrigger();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::estafette::ci::manifest::v1::EstafettePipelineTrigger::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafettePipelineTrigger, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafettePipelineTrigger, event_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafettePipelineTrigger, status_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafettePipelineTrigger, name_),
  PROTOBUF_FIELD_OFFSET(::estafette::ci::manifest::v1::EstafettePipelineTrigger, branch_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::estafette::ci::manifest::v1::EstafettePipelineTrigger)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::estafette::ci::manifest::v1::_EstafettePipelineTrigger_default_instance_),
};

const char descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto[] =
  "\n9estafette/ci/manifest/v1/estafette_pip"
  "eline_trigger.proto\022\030estafette.ci.manife"
  "st.v1\"W\n\030EstafettePipelineTrigger\022\r\n\005eve"
  "nt\030\001 \001(\t\022\016\n\006status\030\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\016"
  "\n\006branch\030\004 \001(\tBx\n\034com.estafette.ci.manif"
  "est.v1P\001Z;github.com/estafette/estafette"
  "-ci-protos-golang/manifest_v1\252\002\030Estafett"
  "e.Ci.Manifest.V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_sccs[1] = {
  &scc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_once;
static bool descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto = {
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_initialized, descriptor_table_protodef_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto, "estafette/ci/manifest/v1/estafette_pipeline_trigger.proto", 304,
  &descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_once, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_sccs, descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto::offsets,
  file_level_metadata_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto, 1, file_level_enum_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto, file_level_service_descriptors_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto), true);
namespace estafette {
namespace ci {
namespace manifest {
namespace v1 {

// ===================================================================

void EstafettePipelineTrigger::InitAsDefaultInstance() {
}
class EstafettePipelineTrigger::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafettePipelineTrigger::kEventFieldNumber;
const int EstafettePipelineTrigger::kStatusFieldNumber;
const int EstafettePipelineTrigger::kNameFieldNumber;
const int EstafettePipelineTrigger::kBranchFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafettePipelineTrigger::EstafettePipelineTrigger()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:estafette.ci.manifest.v1.EstafettePipelineTrigger)
}
EstafettePipelineTrigger::EstafettePipelineTrigger(const EstafettePipelineTrigger& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  event_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.event().size() > 0) {
    event_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  status_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.status().size() > 0) {
    status_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  branch_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.branch().size() > 0) {
    branch_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.branch_);
  }
  // @@protoc_insertion_point(copy_constructor:estafette.ci.manifest.v1.EstafettePipelineTrigger)
}

void EstafettePipelineTrigger::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto.base);
  event_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  branch_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EstafettePipelineTrigger::~EstafettePipelineTrigger() {
  // @@protoc_insertion_point(destructor:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  SharedDtor();
}

void EstafettePipelineTrigger::SharedDtor() {
  event_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  branch_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EstafettePipelineTrigger::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EstafettePipelineTrigger& EstafettePipelineTrigger::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EstafettePipelineTrigger_estafette_2fci_2fmanifest_2fv1_2festafette_5fpipeline_5ftrigger_2eproto.base);
  return *internal_default_instance();
}


void EstafettePipelineTrigger::Clear() {
// @@protoc_insertion_point(message_clear_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  event_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  status_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  branch_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EstafettePipelineTrigger::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string event = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_event(), ptr, ctx, "estafette.ci.manifest.v1.EstafettePipelineTrigger.event");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_status(), ptr, ctx, "estafette.ci.manifest.v1.EstafettePipelineTrigger.status");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_name(), ptr, ctx, "estafette.ci.manifest.v1.EstafettePipelineTrigger.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string branch = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_branch(), ptr, ctx, "estafette.ci.manifest.v1.EstafettePipelineTrigger.branch");
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
bool EstafettePipelineTrigger::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string event = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_event()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->event().data(), static_cast<int>(this->event().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafettePipelineTrigger.event"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string status = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->status().data(), static_cast<int>(this->status().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafettePipelineTrigger.status"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafettePipelineTrigger.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string branch = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_branch()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->branch().data(), static_cast<int>(this->branch().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "estafette.ci.manifest.v1.EstafettePipelineTrigger.branch"));
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
  // @@protoc_insertion_point(parse_success:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void EstafettePipelineTrigger::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.event");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->event(), output);
  }

  // string status = 2;
  if (this->status().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.status");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->status(), output);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->branch().data(), static_cast<int>(this->branch().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.branch");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->branch(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:estafette.ci.manifest.v1.EstafettePipelineTrigger)
}

::PROTOBUF_NAMESPACE_ID::uint8* EstafettePipelineTrigger::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->event().data(), static_cast<int>(this->event().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.event");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->event(), target);
  }

  // string status = 2;
  if (this->status().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.status");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->status(), target);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->branch().data(), static_cast<int>(this->branch().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "estafette.ci.manifest.v1.EstafettePipelineTrigger.branch");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->branch(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  return target;
}

size_t EstafettePipelineTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string event = 1;
  if (this->event().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->event());
  }

  // string status = 2;
  if (this->status().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->status());
  }

  // string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string branch = 4;
  if (this->branch().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->branch());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafettePipelineTrigger::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafettePipelineTrigger* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EstafettePipelineTrigger>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:estafette.ci.manifest.v1.EstafettePipelineTrigger)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:estafette.ci.manifest.v1.EstafettePipelineTrigger)
    MergeFrom(*source);
  }
}

void EstafettePipelineTrigger::MergeFrom(const EstafettePipelineTrigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.event().size() > 0) {

    event_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.event_);
  }
  if (from.status().size() > 0) {

    status_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.branch().size() > 0) {

    branch_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.branch_);
  }
}

void EstafettePipelineTrigger::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafettePipelineTrigger::CopyFrom(const EstafettePipelineTrigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:estafette.ci.manifest.v1.EstafettePipelineTrigger)
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
  _internal_metadata_.Swap(&other->_internal_metadata_);
  event_.Swap(&other->event_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  status_.Swap(&other->status_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  branch_.Swap(&other->branch_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EstafettePipelineTrigger::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
}  // namespace ci
}  // namespace estafette
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::estafette::ci::manifest::v1::EstafettePipelineTrigger* Arena::CreateMaybeMessage< ::estafette::ci::manifest::v1::EstafettePipelineTrigger >(Arena* arena) {
  return Arena::CreateInternal< ::estafette::ci::manifest::v1::EstafettePipelineTrigger >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>