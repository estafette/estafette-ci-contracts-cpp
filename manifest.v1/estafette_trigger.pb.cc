// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/estafette_trigger.proto

#include "manifest.v1/estafette_trigger.pb.h"

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

namespace protobuf_manifest_2ev1_2festafette_5fcron_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fcron_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteCronTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5fcron_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fdocker_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fdocker_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteDockerTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5fdocker_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteGitTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePipelineTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafettePubSubTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5frelease_5ftrigger_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5frelease_5ftrigger_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteReleaseTrigger;
}  // namespace protobuf_manifest_2ev1_2festafette_5frelease_5ftrigger_2eproto
namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5fbuild_5faction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5ftrigger_5fbuild_5faction_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteTriggerBuildAction;
}  // namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5fbuild_5faction_2eproto
namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_EstafetteTriggerReleaseAction;
}  // namespace protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto
namespace manifest {
namespace v1 {
class EstafetteTriggerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EstafetteTrigger>
      _instance;
} _EstafetteTrigger_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto {
static void InitDefaultsEstafetteTrigger() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_EstafetteTrigger_default_instance_;
    new (ptr) ::manifest::v1::EstafetteTrigger();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::EstafetteTrigger::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<8> scc_info_EstafetteTrigger =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 8, InitDefaultsEstafetteTrigger}, {
      &protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::scc_info_EstafettePipelineTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5frelease_5ftrigger_2eproto::scc_info_EstafetteReleaseTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto::scc_info_EstafetteGitTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5fdocker_5ftrigger_2eproto::scc_info_EstafetteDockerTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5fcron_5ftrigger_2eproto::scc_info_EstafetteCronTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5ftrigger_2eproto::scc_info_EstafettePubSubTrigger.base,
      &protobuf_manifest_2ev1_2festafette_5ftrigger_5fbuild_5faction_2eproto::scc_info_EstafetteTriggerBuildAction.base,
      &protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::scc_info_EstafetteTriggerReleaseAction.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EstafetteTrigger.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, pipeline_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, release_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, git_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, docker_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, cron_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, pub_sub_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, build_action_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::EstafetteTrigger, release_action_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::EstafetteTrigger)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_EstafetteTrigger_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/estafette_trigger.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n#manifest.v1/estafette_trigger.proto\022\013m"
      "anifest.v1\032,manifest.v1/estafette_pipeli"
      "ne_trigger.proto\032+manifest.v1/estafette_"
      "release_trigger.proto\032\'manifest.v1/estaf"
      "ette_git_trigger.proto\032*manifest.v1/esta"
      "fette_docker_trigger.proto\032(manifest.v1/"
      "estafette_cron_trigger.proto\032+manifest.v"
      "1/estafette_pub_sub_trigger.proto\0320manif"
      "est.v1/estafette_trigger_build_action.pr"
      "oto\0322manifest.v1/estafette_trigger_relea"
      "se_action.proto\"\321\003\n\020EstafetteTrigger\0227\n\010"
      "pipeline\030\001 \001(\0132%.manifest.v1.EstafettePi"
      "pelineTrigger\0225\n\007release\030\002 \001(\0132$.manifes"
      "t.v1.EstafetteReleaseTrigger\022-\n\003git\030\003 \001("
      "\0132 .manifest.v1.EstafetteGitTrigger\0223\n\006d"
      "ocker\030\004 \001(\0132#.manifest.v1.EstafetteDocke"
      "rTrigger\022/\n\004cron\030\005 \001(\0132!.manifest.v1.Est"
      "afetteCronTrigger\0224\n\007pub_sub\030\006 \001(\0132#.man"
      "ifest.v1.EstafettePubSubTrigger\022>\n\014build"
      "_action\030\007 \001(\0132(.manifest.v1.EstafetteTri"
      "ggerBuildAction\022B\n\016release_action\030\010 \001(\0132"
      "*.manifest.v1.EstafetteTriggerReleaseAct"
      "ionB@Z>github.com/estafette/estafette-ci"
      "-contracts-golang/manifest_v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 957);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/estafette_trigger.proto", &protobuf_RegisterTypes);
  ::protobuf_manifest_2ev1_2festafette_5fpipeline_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5frelease_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fgit_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fdocker_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fcron_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5fpub_5fsub_5ftrigger_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5ftrigger_5fbuild_5faction_2eproto::AddDescriptors();
  ::protobuf_manifest_2ev1_2festafette_5ftrigger_5frelease_5faction_2eproto::AddDescriptors();
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
}  // namespace protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void EstafetteTrigger::InitAsDefaultInstance() {
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->pipeline_ = const_cast< ::manifest::v1::EstafettePipelineTrigger*>(
      ::manifest::v1::EstafettePipelineTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->release_ = const_cast< ::manifest::v1::EstafetteReleaseTrigger*>(
      ::manifest::v1::EstafetteReleaseTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->git_ = const_cast< ::manifest::v1::EstafetteGitTrigger*>(
      ::manifest::v1::EstafetteGitTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->docker_ = const_cast< ::manifest::v1::EstafetteDockerTrigger*>(
      ::manifest::v1::EstafetteDockerTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->cron_ = const_cast< ::manifest::v1::EstafetteCronTrigger*>(
      ::manifest::v1::EstafetteCronTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->pub_sub_ = const_cast< ::manifest::v1::EstafettePubSubTrigger*>(
      ::manifest::v1::EstafettePubSubTrigger::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->build_action_ = const_cast< ::manifest::v1::EstafetteTriggerBuildAction*>(
      ::manifest::v1::EstafetteTriggerBuildAction::internal_default_instance());
  ::manifest::v1::_EstafetteTrigger_default_instance_._instance.get_mutable()->release_action_ = const_cast< ::manifest::v1::EstafetteTriggerReleaseAction*>(
      ::manifest::v1::EstafetteTriggerReleaseAction::internal_default_instance());
}
void EstafetteTrigger::clear_pipeline() {
  if (GetArenaNoVirtual() == NULL && pipeline_ != NULL) {
    delete pipeline_;
  }
  pipeline_ = NULL;
}
void EstafetteTrigger::clear_release() {
  if (GetArenaNoVirtual() == NULL && release_ != NULL) {
    delete release_;
  }
  release_ = NULL;
}
void EstafetteTrigger::clear_git() {
  if (GetArenaNoVirtual() == NULL && git_ != NULL) {
    delete git_;
  }
  git_ = NULL;
}
void EstafetteTrigger::clear_docker() {
  if (GetArenaNoVirtual() == NULL && docker_ != NULL) {
    delete docker_;
  }
  docker_ = NULL;
}
void EstafetteTrigger::clear_cron() {
  if (GetArenaNoVirtual() == NULL && cron_ != NULL) {
    delete cron_;
  }
  cron_ = NULL;
}
void EstafetteTrigger::clear_pub_sub() {
  if (GetArenaNoVirtual() == NULL && pub_sub_ != NULL) {
    delete pub_sub_;
  }
  pub_sub_ = NULL;
}
void EstafetteTrigger::clear_build_action() {
  if (GetArenaNoVirtual() == NULL && build_action_ != NULL) {
    delete build_action_;
  }
  build_action_ = NULL;
}
void EstafetteTrigger::clear_release_action() {
  if (GetArenaNoVirtual() == NULL && release_action_ != NULL) {
    delete release_action_;
  }
  release_action_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EstafetteTrigger::kPipelineFieldNumber;
const int EstafetteTrigger::kReleaseFieldNumber;
const int EstafetteTrigger::kGitFieldNumber;
const int EstafetteTrigger::kDockerFieldNumber;
const int EstafetteTrigger::kCronFieldNumber;
const int EstafetteTrigger::kPubSubFieldNumber;
const int EstafetteTrigger::kBuildActionFieldNumber;
const int EstafetteTrigger::kReleaseActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EstafetteTrigger::EstafetteTrigger()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::scc_info_EstafetteTrigger.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.EstafetteTrigger)
}
EstafetteTrigger::EstafetteTrigger(const EstafetteTrigger& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pipeline()) {
    pipeline_ = new ::manifest::v1::EstafettePipelineTrigger(*from.pipeline_);
  } else {
    pipeline_ = NULL;
  }
  if (from.has_release()) {
    release_ = new ::manifest::v1::EstafetteReleaseTrigger(*from.release_);
  } else {
    release_ = NULL;
  }
  if (from.has_git()) {
    git_ = new ::manifest::v1::EstafetteGitTrigger(*from.git_);
  } else {
    git_ = NULL;
  }
  if (from.has_docker()) {
    docker_ = new ::manifest::v1::EstafetteDockerTrigger(*from.docker_);
  } else {
    docker_ = NULL;
  }
  if (from.has_cron()) {
    cron_ = new ::manifest::v1::EstafetteCronTrigger(*from.cron_);
  } else {
    cron_ = NULL;
  }
  if (from.has_pub_sub()) {
    pub_sub_ = new ::manifest::v1::EstafettePubSubTrigger(*from.pub_sub_);
  } else {
    pub_sub_ = NULL;
  }
  if (from.has_build_action()) {
    build_action_ = new ::manifest::v1::EstafetteTriggerBuildAction(*from.build_action_);
  } else {
    build_action_ = NULL;
  }
  if (from.has_release_action()) {
    release_action_ = new ::manifest::v1::EstafetteTriggerReleaseAction(*from.release_action_);
  } else {
    release_action_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:manifest.v1.EstafetteTrigger)
}

void EstafetteTrigger::SharedCtor() {
  ::memset(&pipeline_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&release_action_) -
      reinterpret_cast<char*>(&pipeline_)) + sizeof(release_action_));
}

EstafetteTrigger::~EstafetteTrigger() {
  // @@protoc_insertion_point(destructor:manifest.v1.EstafetteTrigger)
  SharedDtor();
}

void EstafetteTrigger::SharedDtor() {
  if (this != internal_default_instance()) delete pipeline_;
  if (this != internal_default_instance()) delete release_;
  if (this != internal_default_instance()) delete git_;
  if (this != internal_default_instance()) delete docker_;
  if (this != internal_default_instance()) delete cron_;
  if (this != internal_default_instance()) delete pub_sub_;
  if (this != internal_default_instance()) delete build_action_;
  if (this != internal_default_instance()) delete release_action_;
}

void EstafetteTrigger::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EstafetteTrigger::descriptor() {
  ::protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EstafetteTrigger& EstafetteTrigger::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::scc_info_EstafetteTrigger.base);
  return *internal_default_instance();
}


void EstafetteTrigger::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.EstafetteTrigger)
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
  if (GetArenaNoVirtual() == NULL && build_action_ != NULL) {
    delete build_action_;
  }
  build_action_ = NULL;
  if (GetArenaNoVirtual() == NULL && release_action_ != NULL) {
    delete release_action_;
  }
  release_action_ = NULL;
  _internal_metadata_.Clear();
}

bool EstafetteTrigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.EstafetteTrigger)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .manifest.v1.EstafettePipelineTrigger pipeline = 1;
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

      // .manifest.v1.EstafetteReleaseTrigger release = 2;
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

      // .manifest.v1.EstafetteGitTrigger git = 3;
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

      // .manifest.v1.EstafetteDockerTrigger docker = 4;
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

      // .manifest.v1.EstafetteCronTrigger cron = 5;
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

      // .manifest.v1.EstafettePubSubTrigger pub_sub = 6;
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

      // .manifest.v1.EstafetteTriggerBuildAction build_action = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_build_action()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .manifest.v1.EstafetteTriggerReleaseAction release_action = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_release_action()));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.EstafetteTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.EstafetteTrigger)
  return false;
#undef DO_
}

void EstafetteTrigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.EstafetteTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .manifest.v1.EstafettePipelineTrigger pipeline = 1;
  if (this->has_pipeline()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_pipeline(), output);
  }

  // .manifest.v1.EstafetteReleaseTrigger release = 2;
  if (this->has_release()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_release(), output);
  }

  // .manifest.v1.EstafetteGitTrigger git = 3;
  if (this->has_git()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_git(), output);
  }

  // .manifest.v1.EstafetteDockerTrigger docker = 4;
  if (this->has_docker()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_docker(), output);
  }

  // .manifest.v1.EstafetteCronTrigger cron = 5;
  if (this->has_cron()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_cron(), output);
  }

  // .manifest.v1.EstafettePubSubTrigger pub_sub = 6;
  if (this->has_pub_sub()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_pub_sub(), output);
  }

  // .manifest.v1.EstafetteTriggerBuildAction build_action = 7;
  if (this->has_build_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_build_action(), output);
  }

  // .manifest.v1.EstafetteTriggerReleaseAction release_action = 8;
  if (this->has_release_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_release_action(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.EstafetteTrigger)
}

::google::protobuf::uint8* EstafetteTrigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.EstafetteTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .manifest.v1.EstafettePipelineTrigger pipeline = 1;
  if (this->has_pipeline()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_pipeline(), deterministic, target);
  }

  // .manifest.v1.EstafetteReleaseTrigger release = 2;
  if (this->has_release()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_release(), deterministic, target);
  }

  // .manifest.v1.EstafetteGitTrigger git = 3;
  if (this->has_git()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_git(), deterministic, target);
  }

  // .manifest.v1.EstafetteDockerTrigger docker = 4;
  if (this->has_docker()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_docker(), deterministic, target);
  }

  // .manifest.v1.EstafetteCronTrigger cron = 5;
  if (this->has_cron()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_cron(), deterministic, target);
  }

  // .manifest.v1.EstafettePubSubTrigger pub_sub = 6;
  if (this->has_pub_sub()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_pub_sub(), deterministic, target);
  }

  // .manifest.v1.EstafetteTriggerBuildAction build_action = 7;
  if (this->has_build_action()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_build_action(), deterministic, target);
  }

  // .manifest.v1.EstafetteTriggerReleaseAction release_action = 8;
  if (this->has_release_action()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_release_action(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.EstafetteTrigger)
  return target;
}

size_t EstafetteTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.EstafetteTrigger)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .manifest.v1.EstafettePipelineTrigger pipeline = 1;
  if (this->has_pipeline()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pipeline_);
  }

  // .manifest.v1.EstafetteReleaseTrigger release = 2;
  if (this->has_release()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *release_);
  }

  // .manifest.v1.EstafetteGitTrigger git = 3;
  if (this->has_git()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *git_);
  }

  // .manifest.v1.EstafetteDockerTrigger docker = 4;
  if (this->has_docker()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *docker_);
  }

  // .manifest.v1.EstafetteCronTrigger cron = 5;
  if (this->has_cron()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *cron_);
  }

  // .manifest.v1.EstafettePubSubTrigger pub_sub = 6;
  if (this->has_pub_sub()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pub_sub_);
  }

  // .manifest.v1.EstafetteTriggerBuildAction build_action = 7;
  if (this->has_build_action()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *build_action_);
  }

  // .manifest.v1.EstafetteTriggerReleaseAction release_action = 8;
  if (this->has_release_action()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *release_action_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EstafetteTrigger::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.EstafetteTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  const EstafetteTrigger* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EstafetteTrigger>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.EstafetteTrigger)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.EstafetteTrigger)
    MergeFrom(*source);
  }
}

void EstafetteTrigger::MergeFrom(const EstafetteTrigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.EstafetteTrigger)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_pipeline()) {
    mutable_pipeline()->::manifest::v1::EstafettePipelineTrigger::MergeFrom(from.pipeline());
  }
  if (from.has_release()) {
    mutable_release()->::manifest::v1::EstafetteReleaseTrigger::MergeFrom(from.release());
  }
  if (from.has_git()) {
    mutable_git()->::manifest::v1::EstafetteGitTrigger::MergeFrom(from.git());
  }
  if (from.has_docker()) {
    mutable_docker()->::manifest::v1::EstafetteDockerTrigger::MergeFrom(from.docker());
  }
  if (from.has_cron()) {
    mutable_cron()->::manifest::v1::EstafetteCronTrigger::MergeFrom(from.cron());
  }
  if (from.has_pub_sub()) {
    mutable_pub_sub()->::manifest::v1::EstafettePubSubTrigger::MergeFrom(from.pub_sub());
  }
  if (from.has_build_action()) {
    mutable_build_action()->::manifest::v1::EstafetteTriggerBuildAction::MergeFrom(from.build_action());
  }
  if (from.has_release_action()) {
    mutable_release_action()->::manifest::v1::EstafetteTriggerReleaseAction::MergeFrom(from.release_action());
  }
}

void EstafetteTrigger::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.EstafetteTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EstafetteTrigger::CopyFrom(const EstafetteTrigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.EstafetteTrigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EstafetteTrigger::IsInitialized() const {
  return true;
}

void EstafetteTrigger::Swap(EstafetteTrigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EstafetteTrigger::InternalSwap(EstafetteTrigger* other) {
  using std::swap;
  swap(pipeline_, other->pipeline_);
  swap(release_, other->release_);
  swap(git_, other->git_);
  swap(docker_, other->docker_);
  swap(cron_, other->cron_);
  swap(pub_sub_, other->pub_sub_);
  swap(build_action_, other->build_action_);
  swap(release_action_, other->release_action_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EstafetteTrigger::GetMetadata() const {
  protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2festafette_5ftrigger_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::EstafetteTrigger* Arena::CreateMaybeMessage< ::manifest::v1::EstafetteTrigger >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::EstafetteTrigger >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
