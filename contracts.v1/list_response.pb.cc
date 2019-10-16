// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contracts.v1/list_response.proto

#include "contracts.v1/list_response.pb.h"

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

namespace protobuf_contracts_2ev1_2fpagination_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_contracts_2ev1_2fpagination_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Pagination;
}  // namespace protobuf_contracts_2ev1_2fpagination_2eproto
namespace protobuf_google_2fprotobuf_2fany_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fany_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Any;
}  // namespace protobuf_google_2fprotobuf_2fany_2eproto
namespace contracts {
namespace v1 {
class ListResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ListResponse>
      _instance;
} _ListResponse_default_instance_;
}  // namespace v1
}  // namespace contracts
namespace protobuf_contracts_2ev1_2flist_5fresponse_2eproto {
static void InitDefaultsListResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::contracts::v1::_ListResponse_default_instance_;
    new (ptr) ::contracts::v1::ListResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::contracts::v1::ListResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_ListResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsListResponse}, {
      &protobuf_google_2fprotobuf_2fany_2eproto::scc_info_Any.base,
      &protobuf_contracts_2ev1_2fpagination_2eproto::scc_info_Pagination.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ListResponse.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ListResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ListResponse, items_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::contracts::v1::ListResponse, pagination_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::contracts::v1::ListResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::contracts::v1::_ListResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "contracts.v1/list_response.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n contracts.v1/list_response.proto\022\014cont"
      "racts.v1\032\035contracts.v1/pagination.proto\032"
      "\031google/protobuf/any.proto\"a\n\014ListRespon"
      "se\022#\n\005items\030\001 \003(\0132\024.google.protobuf.Any\022"
      ",\n\npagination\030\002 \001(\0132\030.contracts.v1.Pagin"
      "ationBAZ\?github.com/estafette/estafette-"
      "ci-contracts-golang/contracts_v1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 280);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "contracts.v1/list_response.proto", &protobuf_RegisterTypes);
  ::protobuf_contracts_2ev1_2fpagination_2eproto::AddDescriptors();
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
}  // namespace protobuf_contracts_2ev1_2flist_5fresponse_2eproto
namespace contracts {
namespace v1 {

// ===================================================================

void ListResponse::InitAsDefaultInstance() {
  ::contracts::v1::_ListResponse_default_instance_._instance.get_mutable()->pagination_ = const_cast< ::contracts::v1::Pagination*>(
      ::contracts::v1::Pagination::internal_default_instance());
}
void ListResponse::clear_items() {
  items_.Clear();
}
void ListResponse::clear_pagination() {
  if (GetArenaNoVirtual() == NULL && pagination_ != NULL) {
    delete pagination_;
  }
  pagination_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListResponse::kItemsFieldNumber;
const int ListResponse::kPaginationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListResponse::ListResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_contracts_2ev1_2flist_5fresponse_2eproto::scc_info_ListResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:contracts.v1.ListResponse)
}
ListResponse::ListResponse(const ListResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      items_(from.items_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pagination()) {
    pagination_ = new ::contracts::v1::Pagination(*from.pagination_);
  } else {
    pagination_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:contracts.v1.ListResponse)
}

void ListResponse::SharedCtor() {
  pagination_ = NULL;
}

ListResponse::~ListResponse() {
  // @@protoc_insertion_point(destructor:contracts.v1.ListResponse)
  SharedDtor();
}

void ListResponse::SharedDtor() {
  if (this != internal_default_instance()) delete pagination_;
}

void ListResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ListResponse::descriptor() {
  ::protobuf_contracts_2ev1_2flist_5fresponse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2flist_5fresponse_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ListResponse& ListResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_contracts_2ev1_2flist_5fresponse_2eproto::scc_info_ListResponse.base);
  return *internal_default_instance();
}


void ListResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:contracts.v1.ListResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  items_.Clear();
  if (GetArenaNoVirtual() == NULL && pagination_ != NULL) {
    delete pagination_;
  }
  pagination_ = NULL;
  _internal_metadata_.Clear();
}

bool ListResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:contracts.v1.ListResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.Any items = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_items()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .contracts.v1.Pagination pagination = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pagination()));
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
  // @@protoc_insertion_point(parse_success:contracts.v1.ListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:contracts.v1.ListResponse)
  return false;
#undef DO_
}

void ListResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:contracts.v1.ListResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Any items = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->items_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->items(static_cast<int>(i)),
      output);
  }

  // .contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_pagination(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:contracts.v1.ListResponse)
}

::google::protobuf::uint8* ListResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:contracts.v1.ListResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Any items = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->items_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->items(static_cast<int>(i)), deterministic, target);
  }

  // .contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_pagination(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:contracts.v1.ListResponse)
  return target;
}

size_t ListResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:contracts.v1.ListResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .google.protobuf.Any items = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->items_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->items(static_cast<int>(i)));
    }
  }

  // .contracts.v1.Pagination pagination = 2;
  if (this->has_pagination()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pagination_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:contracts.v1.ListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ListResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ListResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:contracts.v1.ListResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:contracts.v1.ListResponse)
    MergeFrom(*source);
  }
}

void ListResponse::MergeFrom(const ListResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:contracts.v1.ListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  items_.MergeFrom(from.items_);
  if (from.has_pagination()) {
    mutable_pagination()->::contracts::v1::Pagination::MergeFrom(from.pagination());
  }
}

void ListResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:contracts.v1.ListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListResponse::CopyFrom(const ListResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:contracts.v1.ListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListResponse::IsInitialized() const {
  return true;
}

void ListResponse::Swap(ListResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListResponse::InternalSwap(ListResponse* other) {
  using std::swap;
  CastToBase(&items_)->InternalSwap(CastToBase(&other->items_));
  swap(pagination_, other->pagination_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ListResponse::GetMetadata() const {
  protobuf_contracts_2ev1_2flist_5fresponse_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_contracts_2ev1_2flist_5fresponse_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace contracts
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::contracts::v1::ListResponse* Arena::CreateMaybeMessage< ::contracts::v1::ListResponse >(Arena* arena) {
  return Arena::CreateInternal< ::contracts::v1::ListResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
