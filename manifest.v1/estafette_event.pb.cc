// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_event.proto

#include "manifest.v1/estafette_event.pb.h"

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

namespace protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_EstafetteCronEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteDockerEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fgit_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fgit_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteGitEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fgit_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteManualEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fpipeline_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePipelineEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePubSubEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto
namespace protobuf_manifest_2ev1_2festafette_5frelease_5fevent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5frelease_5fevent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteReleaseEvent;
}  // namespace protobuf_manifest_2ev1_2festafette_5frelease_5fevent_2eproto
namespace manifest {
namespace v1 {
class EstafetteEventDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteEvent>
      _instance;
} _EstafetteEvent_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5fevent_2eproto {
static void InitDefaultsEstafetteEvent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteEvent_default_instance_;
    new (ptr) ::manifest::v1::EstafetteEvent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteEvent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<7> scc_info_EstafetteEvent =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 7, InitDefaultsEstafetteEvent}, {
      &protobuf_manifest_2ev1_2festafette_5fpipeline_5fevent_2eproto::scc_info_EstafettePipelineEvent.base,
      &protobuf_manifest_2ev1_2festafette_5frelease_5fevent_2eproto::scc_info_EstafetteReleaseEvent.base,
      &protobuf_manifest_2ev1_2festafette_5fgit_5fevent_2eproto::scc_info_EstafetteGitEvent.base,
      &protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::scc_info_EstafetteDockerEvent.base,
      &protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::scc_info_EstafetteCronEvent.base,
      &protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::scc_info_EstafettePubSubEvent.base,
      &protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::scc_info_EstafetteManualEvent.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteEvent.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, pipeline_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, release_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, git_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, docker_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, cron_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, pub_sub_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteEvent, manual_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteEvent)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteEvent_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_event.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!manifest.v1/estafette_event.proto\022\013man"
      "ifest.v1\032*manifest.v1/estafette_pipeline"
      "_event.proto\032)manifest.v1/estafette_rele"
      "ase_event.proto\032%manifest.v1/estafette_g"
      "it_event.proto\032(manifest.v1/estafette_do"
      "cker_event.proto\032&manifest.v1/estafette_"
      "cron_event.proto\032)manifest.v1/estafette_"
      "pub_sub_event.proto\032(manifest.v1/estafet"
      "te_manual_event.proto\"\362\002\n\016EstafetteEvent"
      "\0225\n\010pipeline\030\001 \001(\0132#.manifest.v1.Estafet"
      "tePipelineEvent\0223\n\007release\030\002 \001(\0132\".manif"
      "est.v1.EstafetteReleaseEvent\022+\n\003git\030\003 \001("
      "\0132\036.manifest.v1.EstafetteGitEvent\0221\n\006doc"
      "ker\030\004 \001(\0132!.manifest.v1.EstafetteDockerE"
      "vent\022-\n\004cron\030\005 \001(\0132\037.manifest.v1.Estafet"
      "teCronEvent\0222\n\007pub_sub\030\006 \001(\0132!.manifest."
      "v1.EstafettePubSubEvent\0221\n\006manual\030\007 \001(\0132"
      "!.manifest.v1.EstafetteManualEventB[Z>gi"
      "thub.com/estafette/estafette-ci-contract"
      "s-golang/manifest_v1\252\002\030Estafette.CI.Mani"
      "fest.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 815);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_event.proto", &protobuf_RegisterTypes);
  ::protobuf_manifest_2ev1_2festafette_5fpipeline_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5frelease_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fgit_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fdocker_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fcron_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5fevent_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fmanual_5fevent_2eproto::AddDescriptors();
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
}  // namespace protobuf_manifest_2ev1_2festafette_5fevent_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteEvent::InitAsDefaultInstance() {
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->pipeline_ = const_cast< ::manifest::v1::EstafettePipelineEvent*>(
      ::manifest::v1::EstafettePipelineEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->release_ = const_cast< ::manifest::v1::EstafetteReleaseEvent*>(
      ::manifest::v1::EstafetteReleaseEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->git_ = const_cast< ::manifest::v1::EstafetteGitEvent*>(
      ::manifest::v1::EstafetteGitEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->docker_ = const_cast< ::manifest::v1::EstafetteDockerEvent*>(
      ::manifest::v1::EstafetteDockerEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->cron_ = const_cast< ::manifest::v1::EstafetteCronEvent*>(
      ::manifest::v1::EstafetteCronEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->pub_sub_ = const_cast< ::manifest::v1::EstafettePubSubEvent*>(
      ::manifest::v1::EstafettePubSubEvent::internal_default_instance());
  ::manifest::v1::_EstafetteEvent_default_instance_._instance.get_mutable()->manual_ = const_cast< ::manifest::v1::EstafetteManualEvent*>(
      ::manifest::v1::EstafetteManualEvent::internal_default_instance());
}
void EstafetteEvent::clear_pipeline() {
  if (GetArenaNoVirtual() == NULL && pipeline_ != NULL) {
    delete pipeline_;
  }
  pipeline_ = NULL;
}
void EstafetteEvent::clear_release() {
  if (GetArenaNoVirtual() == NULL && release_ != NULL) {
    delete release_;
  }
  release_ = NULL;
}
void EstafetteEvent::clear_git() {
  if (GetArenaNoVirtual() == NULL && git_ != NULL) {
    delete git_;
  }
  git_ = NULL;
}
void EstafetteEvent::clear_docker() {
  if (GetArenaNoVirtual() == NULL && docker_ != NULL) {
    delete docker_;
  }
  docker_ = NULL;
}
void EstafetteEvent::clear_cron() {
  if (GetArenaNoVirtual() == NULL && cron_ != NULL) {
    delete cron_;
  }
  cron_ = NULL;
}
void EstafetteEvent::clear_pub_sub() {
  if (GetArenaNoVirtual() == NULL && pub_sub_ != NULL) {
    delete pub_sub_;
  }
  pub_sub_ = NULL;
}
void EstafetteEvent::clear_manual() {
  if (GetArenaNoVirtual() == NULL && manual_ != NULL) {
    delete manual_;
  }
  manual_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteEvent::kPipelineFieldNumber;
const int EstafetteEvent::kReleaseFieldNumber;
const int EstafetteEvent::kGitFieldNumber;
const int EstafetteEvent::kDockerFieldNumber;
const int EstafetteEvent::kCronFieldNumber;
const int EstafetteEvent::kPubSubFieldNumber;
const int EstafetteEvent::kManualFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteEvent::EstafetteEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5fevent_2eproto::scc_info_EstafetteEvent.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteEvent)
}
EstafetteEvent::EstafetteEvent(const EstafetteEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pipeline()) {
    pipeline_ = new ::manifest::v1::EstafettePipelineEvent(*from.pipeline_);
  } else {
    pipeline_ = NULL;
  }
  if (from.has_release()) {
    release_ = new ::manifest::v1::EstafetteReleaseEvent(*from.release_);
  } else {
    release_ = NULL;
  }
  if (from.has_git()) {
    git_ = new ::manifest::v1::EstafetteGitEvent(*from.git_);
  } else {
    git_ = NULL;
  }
  if (from.has_docker()) {
    docker_ = new ::manifest::v1::EstafetteDockerEvent(*from.docker_);
  } else {
    docker_ = NULL;
  }
  if (from.has_cron()) {
    cron_ = new ::manifest::v1::EstafetteCronEvent(*from.cron_);
  } else {
    cron_ = NULL;
  }
  if (from.has_pub_sub()) {
    pub_sub_ = new ::manifest::v1::EstafettePubSubEvent(*from.pub_sub_);
  } else {
    pub_sub_ = NULL;
  }
  if (from.has_manual()) {
    manual_ = new ::manifest::v1::EstafetteManualEvent(*from.manual_);
  } else {
    manual_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteEvent)
}

void EstafetteEvent::SharedCtor() {
  ::memset(&pipeline_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&manual_) -
      reinterpret_cast<char*>(&pipeline_)) + sizeof(manual_));
}

EstafetteEvent::~EstafetteEvent() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteEvent)
  SharedDtor();
}

void EstafetteEvent::SharedDtor() {
  if (this != internal_default_instance()) delete pipeline_;
  if (this != internal_default_instance()) delete release_;
  if (this != internal_default_instance()) delete git_;
  if (this != internal_default_instance()) delete docker_;
  if (this != internal_default_instance()) delete cron_;
  if (this != internal_default_instance()) delete pub_sub_;
  if (this != internal_default_instance()) delete manual_;
}

void EstafetteEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteEvent::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fevent_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteEvent& EstafetteEvent::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5fevent_2eproto::scc_info_EstafetteEvent.base);
  return *internal_default_instance();
}


void EstafetteEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && pipeline_ != NULL) {
    delete pipeline_;
  }
  pipeline_ = NULL;
  if (GetArenaNoVirtual() == NULL && release_ != NULL) {
    delete release_;
  }
  release_ = NULL;
  if (GetArenaNoVirtual() == NULL && git_ != NULL) {
    delete git_;
  }
  git_ = NULL;
  if (GetArenaNoVirtual() == NULL && docker_ != NULL) {
    delete docker_;
  }
  docker_ = NULL;
  if (GetArenaNoVirtual() == NULL && cron_ != NULL) {
    delete cron_;
  }
  cron_ = NULL;
  if (GetArenaNoVirtual() == NULL && pub_sub_ != NULL) {
    delete pub_sub_;
  }
  pub_sub_ = NULL;
  if (GetArenaNoVirtual() == NULL && manual_ != NULL) {
    delete manual_;
  }
  manual_ = NULL;
  _internal_metadata_.Clear();
}

bool EstafetteEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteEvent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .manifest.v1.EstafettePipelineEvent pipeline = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pipeline()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteReleaseEvent release = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_release()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteGitEvent git = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_git()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteDockerEvent docker = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_docker()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteCronEvent cron = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_cron()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafettePubSubEvent pub_sub = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pub_sub()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteManualEvent manual = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_manual()));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteEvent)
  return false;
#undef DO_
}

void EstafetteEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .manifest.v1.EstafettePipelineEvent pipeline = 1;
  if (this->has_pipeline()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_pipeline(), output);
  }

  // .manifest.v1.EstafetteReleaseEvent release = 2;
  if (this->has_release()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_release(), output);
  }

  // .manifest.v1.EstafetteGitEvent git = 3;
  if (this->has_git()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_git(), output);
  }

  // .manifest.v1.EstafetteDockerEvent docker = 4;
  if (this->has_docker()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_docker(), output);
  }

  // .manifest.v1.EstafetteCronEvent cron = 5;
  if (this->has_cron()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_cron(), output);
  }

  // .manifest.v1.EstafettePubSubEvent pub_sub = 6;
  if (this->has_pub_sub()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_pub_sub(), output);
  }

  // .manifest.v1.EstafetteManualEvent manual = 7;
  if (this->has_manual()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_manual(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteEvent)
}

::google::protobuf::uint8* EstafetteEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteEvent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .manifest.v1.EstafettePipelineEvent pipeline = 1;
  if (this->has_pipeline()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_pipeline(), deterministic, target);
  }

  // .manifest.v1.EstafetteReleaseEvent release = 2;
  if (this->has_release()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_release(), deterministic, target);
  }

  // .manifest.v1.EstafetteGitEvent git = 3;
  if (this->has_git()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_git(), deterministic, target);
  }

  // .manifest.v1.EstafetteDockerEvent docker = 4;
  if (this->has_docker()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_docker(), deterministic, target);
  }

  // .manifest.v1.EstafetteCronEvent cron = 5;
  if (this->has_cron()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_cron(), deterministic, target);
  }

  // .manifest.v1.EstafettePubSubEvent pub_sub = 6;
  if (this->has_pub_sub()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_pub_sub(), deterministic, target);
  }

  // .manifest.v1.EstafetteManualEvent manual = 7;
  if (this->has_manual()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_manual(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteEvent)
  return target;
}

size_t EstafetteEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteEvent)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .manifest.v1.EstafettePipelineEvent pipeline = 1;
  if (this->has_pipeline()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pipeline_);
  }

  // .manifest.v1.EstafetteReleaseEvent release = 2;
  if (this->has_release()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *release_);
  }

  // .manifest.v1.EstafetteGitEvent git = 3;
  if (this->has_git()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *git_);
  }

  // .manifest.v1.EstafetteDockerEvent docker = 4;
  if (this->has_docker()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *docker_);
  }

  // .manifest.v1.EstafetteCronEvent cron = 5;
  if (this->has_cron()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *cron_);
  }

  // .manifest.v1.EstafettePubSubEvent pub_sub = 6;
  if (this->has_pub_sub()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pub_sub_);
  }

  // .manifest.v1.EstafetteManualEvent manual = 7;
  if (this->has_manual()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *manual_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteEvent)
    MergeFrom(*source);
  }
}

void EstafetteEvent::MergeFrom(const EstafetteEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_pipeline()) {
    mutable_pipeline()->::manifest::v1::EstafettePipelineEvent::MergeFrom(from.pipeline());
  }
  if (from.has_release()) {
    mutable_release()->::manifest::v1::EstafetteReleaseEvent::MergeFrom(from.release());
  }
  if (from.has_git()) {
    mutable_git()->::manifest::v1::EstafetteGitEvent::MergeFrom(from.git());
  }
  if (from.has_docker()) {
    mutable_docker()->::manifest::v1::EstafetteDockerEvent::MergeFrom(from.docker());
  }
  if (from.has_cron()) {
    mutable_cron()->::manifest::v1::EstafetteCronEvent::MergeFrom(from.cron());
  }
  if (from.has_pub_sub()) {
    mutable_pub_sub()->::manifest::v1::EstafettePubSubEvent::MergeFrom(from.pub_sub());
  }
  if (from.has_manual()) {
    mutable_manual()->::manifest::v1::EstafetteManualEvent::MergeFrom(from.manual());
  }
}

void EstafetteEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteEvent::CopyFrom(const EstafetteEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteEvent::IsInitialized() const {
  return true;
}

void EstafetteEvent::Swap(EstafetteEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteEvent::InternalSwap(EstafetteEvent* other) {
  using std::swap;
  swap(pipeline_, other->pipeline_);
  swap(release_, other->release_);
  swap(git_, other->git_);
  swap(docker_, other->docker_);
  swap(cron_, other->cron_);
  swap(pub_sub_, other->pub_sub_);
  swap(manual_, other->manual_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteEvent::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5fevent_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5fevent_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteEvent* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteEvent >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteEvent >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
