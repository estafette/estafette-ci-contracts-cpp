// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: manifest.v1/string_or_string_array.proto

#include "manifest.v1/string_or_string_array.pb.h"

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
class StringOrStringArrayDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StringOrStringArray>
      _instance;
} _StringOrStringArray_default_instance_;
}  // namespace v1
}  // namespace manifest
namespace protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto {
static void InitDefaultsStringOrStringArray() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::manifest::v1::_StringOrStringArray_default_instance_;
    new (ptr) ::manifest::v1::StringOrStringArray();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::manifest::v1::StringOrStringArray::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_StringOrStringArray =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsStringOrStringArray}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_StringOrStringArray.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::StringOrStringArray, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::manifest::v1::StringOrStringArray, values_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::manifest::v1::StringOrStringArray)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::manifest::v1::_StringOrStringArray_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "manifest.v1/string_or_string_array.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(manifest.v1/string_or_string_array.pro"
      "to\022\013manifest.v1\"%\n\023StringOrStringArray\022\016"
      "\n\006values\030\001 \003(\tBx\n\033io.estafette.ci.manife"
      "st.v1Z>github.com/estafette/estafette-ci"
      "-contracts-golang/manifest_v1\252\002\030Estafett"
      "e.CI.Manifest.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "manifest.v1/string_or_string_array.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto
namespace manifest {
namespace v1 {

// ===================================================================

void StringOrStringArray::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StringOrStringArray::kValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StringOrStringArray::StringOrStringArray()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::scc_info_StringOrStringArray.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:manifest.v1.StringOrStringArray)
}
StringOrStringArray::StringOrStringArray(const StringOrStringArray& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      values_(from.values_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:manifest.v1.StringOrStringArray)
}

void StringOrStringArray::SharedCtor() {
}

StringOrStringArray::~StringOrStringArray() {
  // @@protoc_insertion_point(destructor:manifest.v1.StringOrStringArray)
  SharedDtor();
}

void StringOrStringArray::SharedDtor() {
}

void StringOrStringArray::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* StringOrStringArray::descriptor() {
  ::protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StringOrStringArray& StringOrStringArray::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::scc_info_StringOrStringArray.base);
  return *internal_default_instance();
}


void StringOrStringArray::Clear() {
// @@protoc_insertion_point(message_clear_start:manifest.v1.StringOrStringArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  values_.Clear();
  _internal_metadata_.Clear();
}

bool StringOrStringArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:manifest.v1.StringOrStringArray)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string values = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_values()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->values(this->values_size() - 1).data(),
            static_cast<int>(this->values(this->values_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "manifest.v1.StringOrStringArray.values"));
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
  // @@protoc_insertion_point(parse_success:manifest.v1.StringOrStringArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:manifest.v1.StringOrStringArray)
  return false;
#undef DO_
}

void StringOrStringArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:manifest.v1.StringOrStringArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string values = 1;
  for (int i = 0, n = this->values_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->values(i).data(), static_cast<int>(this->values(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.StringOrStringArray.values");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->values(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:manifest.v1.StringOrStringArray)
}

::google::protobuf::uint8* StringOrStringArray::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:manifest.v1.StringOrStringArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string values = 1;
  for (int i = 0, n = this->values_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->values(i).data(), static_cast<int>(this->values(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "manifest.v1.StringOrStringArray.values");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->values(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:manifest.v1.StringOrStringArray)
  return target;
}

size_t StringOrStringArray::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:manifest.v1.StringOrStringArray)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string values = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->values_size());
  for (int i = 0, n = this->values_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->values(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StringOrStringArray::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:manifest.v1.StringOrStringArray)
  GOOGLE_DCHECK_NE(&from, this);
  const StringOrStringArray* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StringOrStringArray>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:manifest.v1.StringOrStringArray)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:manifest.v1.StringOrStringArray)
    MergeFrom(*source);
  }
}

void StringOrStringArray::MergeFrom(const StringOrStringArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:manifest.v1.StringOrStringArray)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  values_.MergeFrom(from.values_);
}

void StringOrStringArray::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:manifest.v1.StringOrStringArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StringOrStringArray::CopyFrom(const StringOrStringArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:manifest.v1.StringOrStringArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StringOrStringArray::IsInitialized() const {
  return true;
}

void StringOrStringArray::Swap(StringOrStringArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StringOrStringArray::InternalSwap(StringOrStringArray* other) {
  using std::swap;
  values_.InternalSwap(CastToBase(&other->values_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata StringOrStringArray::GetMetadata() const {
  protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_manifest_2ev1_2fstring_5for_5fstring_5farray_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace manifest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::manifest::v1::StringOrStringArray* Arena::CreateMaybeMessage< ::manifest::v1::StringOrStringArray >(Arena* arena) {
  return Arena::CreateInternal< ::manifest::v1::StringOrStringArray >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
