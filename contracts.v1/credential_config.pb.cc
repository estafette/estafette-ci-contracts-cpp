// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/credential_config.proto

#include "contracts.v1/credential_config.pb.h"

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

namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_CredentialConfig_AdditionalPropertiesEntry_DoNotUse;
}  // namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto
namespace protobuf_google_2fprotobuf_2fany_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fany_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Any;
}  // namespace protobuf_google_2fprotobuf_2fany_2eproto
namespace contracts {
namespace v1 {
class CredentialConfig_AdditionalPropertiesEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CredentialConfig_AdditionalPropertiesEntry_DoNotUse>
      _instance;
} _CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_;
class CredentialConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CredentialConfig>
      _instance;
} _CredentialConfig_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto {
static void InitDefaultsCredentialConfig_AdditionalPropertiesEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_;
    new (ptr) ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse();
  }
  ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_CredentialConfig_AdditionalPropertiesEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCredentialConfig_AdditionalPropertiesEntry_DoNotUse}, {
      &protobuf_google_2fprotobuf_2fany_2eproto::scc_info_Any.base,}};

static void InitDefaultsCredentialConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_CredentialConfig_default_instance_;
    new (ptr) ::contracts::v1::CredentialConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::CredentialConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_CredentialConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCredentialConfig}, {
      &protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::scc_info_CredentialConfig_AdditionalPropertiesEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CredentialConfig_AdditionalPropertiesEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_CredentialConfig.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::CredentialConfig, additional_properties_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse)},
  { 9, -1, sizeof(::contracts::v1::CredentialConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_CredentialConfig_AdditionalPropertiesEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_CredentialConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/credential_config.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n$contracts.v1/credential_config.proto\022\014"
      "contracts.v1\032\031google/protobuf/any.proto\""
      "\332\001\n\020CredentialConfig\022\014\n\004name\030\001 \001(\t\022\014\n\004ty"
      "pe\030\002 \001(\t\022W\n\025additional_properties\030\003 \003(\0132"
      "8.contracts.v1.CredentialConfig.Addition"
      "alPropertiesEntry\032Q\n\031AdditionalPropertie"
      "sEntry\022\013\n\003key\030\001 \001(\t\022#\n\005value\030\002 \001(\0132\024.goo"
      "gle.protobuf.Any:\0028\001B{\n\034io.estafette.ci."
      "contracts.v1Z\?github.com/estafette/estaf"
      "ette-ci-contracts-golang/contracts_v1\252\002\031"
      "Estafette.CI.Contracts.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 433);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/credential_config.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors();
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
}  // namespace protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

CredentialConfig_AdditionalPropertiesEntry_DoNotUse::CredentialConfig_AdditionalPropertiesEntry_DoNotUse() {}
CredentialConfig_AdditionalPropertiesEntry_DoNotUse::CredentialConfig_AdditionalPropertiesEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void CredentialConfig_AdditionalPropertiesEntry_DoNotUse::MergeFrom(const CredentialConfig_AdditionalPropertiesEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata CredentialConfig_AdditionalPropertiesEntry_DoNotUse::GetMetadata() const {
  ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::file_level_metadata[0];
}
void CredentialConfig_AdditionalPropertiesEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void CredentialConfig::InitAsDefaultInstance() {
}
void CredentialConfig::clear_additional_properties() {
  additional_properties_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CredentialConfig::kNameFieldNumber;
const int CredentialConfig::kTypeFieldNumber;
const int CredentialConfig::kAdditionalPropertiesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CredentialConfig::CredentialConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::scc_info_CredentialConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.CredentialConfig)
}
CredentialConfig::CredentialConfig(const CredentialConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  additional_properties_.MergeFrom(from.additional_properties_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.type().size() > 0) {
    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  // @@protoc_insertion_point(copy_constructor:contracts.v1.CredentialConfig)
}

void CredentialConfig::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CredentialConfig::~CredentialConfig() {
  // @@protoc_insertion_point(destructor:contracts.v1.CredentialConfig)
  SharedDtor();
}

void CredentialConfig::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CredentialConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CredentialConfig::descriptor() {
  ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CredentialConfig& CredentialConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::scc_info_CredentialConfig.base);
  return *internal_default_instance();
}


void CredentialConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.CredentialConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  additional_properties_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool CredentialConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.CredentialConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.CredentialConfig.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type().data(), static_cast<int>(this->type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.CredentialConfig.type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, .google.protobuf.Any> additional_properties = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          CredentialConfig_AdditionalPropertiesEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              CredentialConfig_AdditionalPropertiesEntry_DoNotUse,
              ::std::string, ::google::protobuf::Any,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::google::protobuf::Any > > parser(&additional_properties_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "contracts.v1.CredentialConfig.AdditionalPropertiesEntry.key"));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.CredentialConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.CredentialConfig)
  return false;
#undef DO_
}

void CredentialConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.CredentialConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.CredentialConfig.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string type = 2;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.CredentialConfig.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->type(), output);
  }

  // map<string, .google.protobuf.Any> additional_properties = 3;
  if (!this->additional_properties().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "contracts.v1.CredentialConfig.AdditionalPropertiesEntry.key");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->additional_properties().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->additional_properties().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
          it = this->additional_properties().begin();
          it != this->additional_properties().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<CredentialConfig_AdditionalPropertiesEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(additional_properties_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<CredentialConfig_AdditionalPropertiesEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
          it = this->additional_properties().begin();
          it != this->additional_properties().end(); ++it) {
        entry.reset(additional_properties_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.CredentialConfig)
}

::google::protobuf::uint8* CredentialConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.CredentialConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.CredentialConfig.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string type = 2;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "contracts.v1.CredentialConfig.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->type(), target);
  }

  // map<string, .google.protobuf.Any> additional_properties = 3;
  if (!this->additional_properties().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "contracts.v1.CredentialConfig.AdditionalPropertiesEntry.key");
      }
    };

    if (deterministic &&
        this->additional_properties().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->additional_properties().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
          it = this->additional_properties().begin();
          it != this->additional_properties().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<CredentialConfig_AdditionalPropertiesEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(additional_properties_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<CredentialConfig_AdditionalPropertiesEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
          it = this->additional_properties().begin();
          it != this->additional_properties().end(); ++it) {
        entry.reset(additional_properties_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.CredentialConfig)
  return target;
}

size_t CredentialConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.CredentialConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, .google.protobuf.Any> additional_properties = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->additional_properties_size());
  {
    ::std::unique_ptr<CredentialConfig_AdditionalPropertiesEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
        it = this->additional_properties().begin();
        it != this->additional_properties().end(); ++it) {
      entry.reset(additional_properties_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string type = 2;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CredentialConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.CredentialConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const CredentialConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CredentialConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.CredentialConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.CredentialConfig)
    MergeFrom(*source);
  }
}

void CredentialConfig::MergeFrom(const CredentialConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.CredentialConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  additional_properties_.MergeFrom(from.additional_properties_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.type().size() > 0) {

    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
}

void CredentialConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.CredentialConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CredentialConfig::CopyFrom(const CredentialConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.CredentialConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CredentialConfig::IsInitialized() const {
  return true;
}

void CredentialConfig::Swap(CredentialConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CredentialConfig::InternalSwap(CredentialConfig* other) {
  using std::swap;
  additional_properties_.Swap(&other->additional_properties_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  type_.Swap(&other->type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CredentialConfig::GetMetadata() const {
  protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2fcredential_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse* Arena::CreateMaybeMessage< ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::CredentialConfig_AdditionalPropertiesEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::CredentialConfig* Arena::CreateMaybeMessage< ::contracts::v1::CredentialConfig >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::CredentialConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
