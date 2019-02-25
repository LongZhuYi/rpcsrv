// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dbsvr.proto

#ifndef PROTOBUF_INCLUDED_dbsvr_2eproto
#define PROTOBUF_INCLUDED_dbsvr_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
#include <google/protobuf/empty.pb.h>
#include "phxrpc/rpc/phxrpc.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dbsvr_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_dbsvr_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_dbsvr_2eproto();
namespace dbsvr {
class GetReq;
class GetReqDefaultTypeInternal;
extern GetReqDefaultTypeInternal _GetReq_default_instance_;
class GetResp;
class GetRespDefaultTypeInternal;
extern GetRespDefaultTypeInternal _GetResp_default_instance_;
class SetReq;
class SetReqDefaultTypeInternal;
extern SetReqDefaultTypeInternal _SetReq_default_instance_;
class SetResp;
class SetRespDefaultTypeInternal;
extern SetRespDefaultTypeInternal _SetResp_default_instance_;
}  // namespace dbsvr
namespace google {
namespace protobuf {
template<> ::dbsvr::GetReq* Arena::CreateMaybeMessage<::dbsvr::GetReq>(Arena*);
template<> ::dbsvr::GetResp* Arena::CreateMaybeMessage<::dbsvr::GetResp>(Arena*);
template<> ::dbsvr::SetReq* Arena::CreateMaybeMessage<::dbsvr::SetReq>(Arena*);
template<> ::dbsvr::SetResp* Arena::CreateMaybeMessage<::dbsvr::SetResp>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dbsvr {

// ===================================================================

class SetReq final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbsvr.SetReq) */ {
 public:
  SetReq();
  virtual ~SetReq();

  SetReq(const SetReq& from);

  inline SetReq& operator=(const SetReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetReq(SetReq&& from) noexcept
    : SetReq() {
    *this = ::std::move(from);
  }

  inline SetReq& operator=(SetReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const SetReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetReq* internal_default_instance() {
    return reinterpret_cast<const SetReq*>(
               &_SetReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SetReq* other);
  friend void swap(SetReq& a, SetReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetReq* New() const final {
    return CreateMaybeMessage<SetReq>(nullptr);
  }

  SetReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SetReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SetReq& from);
  void MergeFrom(const SetReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:dbsvr.SetReq)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbsvr_2eproto;
};
// -------------------------------------------------------------------

class SetResp final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbsvr.SetResp) */ {
 public:
  SetResp();
  virtual ~SetResp();

  SetResp(const SetResp& from);

  inline SetResp& operator=(const SetResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetResp(SetResp&& from) noexcept
    : SetResp() {
    *this = ::std::move(from);
  }

  inline SetResp& operator=(SetResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const SetResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetResp* internal_default_instance() {
    return reinterpret_cast<const SetResp*>(
               &_SetResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SetResp* other);
  friend void swap(SetResp& a, SetResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetResp* New() const final {
    return CreateMaybeMessage<SetResp>(nullptr);
  }

  SetResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SetResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SetResp& from);
  void MergeFrom(const SetResp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::uint32 code() const;
  void set_code(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:dbsvr.SetResp)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbsvr_2eproto;
};
// -------------------------------------------------------------------

class GetReq final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbsvr.GetReq) */ {
 public:
  GetReq();
  virtual ~GetReq();

  GetReq(const GetReq& from);

  inline GetReq& operator=(const GetReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetReq(GetReq&& from) noexcept
    : GetReq() {
    *this = ::std::move(from);
  }

  inline GetReq& operator=(GetReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GetReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetReq* internal_default_instance() {
    return reinterpret_cast<const GetReq*>(
               &_GetReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(GetReq* other);
  friend void swap(GetReq& a, GetReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetReq* New() const final {
    return CreateMaybeMessage<GetReq>(nullptr);
  }

  GetReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetReq& from);
  void MergeFrom(const GetReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:dbsvr.GetReq)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbsvr_2eproto;
};
// -------------------------------------------------------------------

class GetResp final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbsvr.GetResp) */ {
 public:
  GetResp();
  virtual ~GetResp();

  GetResp(const GetResp& from);

  inline GetResp& operator=(const GetResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetResp(GetResp&& from) noexcept
    : GetResp() {
    *this = ::std::move(from);
  }

  inline GetResp& operator=(GetResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GetResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetResp* internal_default_instance() {
    return reinterpret_cast<const GetResp*>(
               &_GetResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(GetResp* other);
  friend void swap(GetResp& a, GetResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetResp* New() const final {
    return CreateMaybeMessage<GetResp>(nullptr);
  }

  GetResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetResp& from);
  void MergeFrom(const GetResp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // uint32 code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::uint32 code() const;
  void set_code(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:dbsvr.GetResp)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::uint32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbsvr_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetReq

// string key = 1;
inline void SetReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetReq::key() const {
  // @@protoc_insertion_point(field_get:dbsvr.SetReq.key)
  return key_.GetNoArena();
}
inline void SetReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbsvr.SetReq.key)
}
#if LANG_CXX11
inline void SetReq::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbsvr.SetReq.key)
}
#endif
inline void SetReq::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbsvr.SetReq.key)
}
inline void SetReq::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbsvr.SetReq.key)
}
inline ::std::string* SetReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:dbsvr.SetReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetReq::release_key() {
  // @@protoc_insertion_point(field_release:dbsvr.SetReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetReq::set_allocated_key(::std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:dbsvr.SetReq.key)
}

// string value = 2;
inline void SetReq::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetReq::value() const {
  // @@protoc_insertion_point(field_get:dbsvr.SetReq.value)
  return value_.GetNoArena();
}
inline void SetReq::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbsvr.SetReq.value)
}
#if LANG_CXX11
inline void SetReq::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbsvr.SetReq.value)
}
#endif
inline void SetReq::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbsvr.SetReq.value)
}
inline void SetReq::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbsvr.SetReq.value)
}
inline ::std::string* SetReq::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:dbsvr.SetReq.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetReq::release_value() {
  // @@protoc_insertion_point(field_release:dbsvr.SetReq.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetReq::set_allocated_value(::std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:dbsvr.SetReq.value)
}

// -------------------------------------------------------------------

// SetResp

// uint32 code = 1;
inline void SetResp::clear_code() {
  code_ = 0u;
}
inline ::google::protobuf::uint32 SetResp::code() const {
  // @@protoc_insertion_point(field_get:dbsvr.SetResp.code)
  return code_;
}
inline void SetResp::set_code(::google::protobuf::uint32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:dbsvr.SetResp.code)
}

// -------------------------------------------------------------------

// GetReq

// string key = 1;
inline void GetReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetReq::key() const {
  // @@protoc_insertion_point(field_get:dbsvr.GetReq.key)
  return key_.GetNoArena();
}
inline void GetReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbsvr.GetReq.key)
}
#if LANG_CXX11
inline void GetReq::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbsvr.GetReq.key)
}
#endif
inline void GetReq::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbsvr.GetReq.key)
}
inline void GetReq::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbsvr.GetReq.key)
}
inline ::std::string* GetReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:dbsvr.GetReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetReq::release_key() {
  // @@protoc_insertion_point(field_release:dbsvr.GetReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetReq::set_allocated_key(::std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:dbsvr.GetReq.key)
}

// -------------------------------------------------------------------

// GetResp

// uint32 code = 1;
inline void GetResp::clear_code() {
  code_ = 0u;
}
inline ::google::protobuf::uint32 GetResp::code() const {
  // @@protoc_insertion_point(field_get:dbsvr.GetResp.code)
  return code_;
}
inline void GetResp::set_code(::google::protobuf::uint32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:dbsvr.GetResp.code)
}

// string value = 2;
inline void GetResp::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetResp::value() const {
  // @@protoc_insertion_point(field_get:dbsvr.GetResp.value)
  return value_.GetNoArena();
}
inline void GetResp::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbsvr.GetResp.value)
}
#if LANG_CXX11
inline void GetResp::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbsvr.GetResp.value)
}
#endif
inline void GetResp::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbsvr.GetResp.value)
}
inline void GetResp::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbsvr.GetResp.value)
}
inline ::std::string* GetResp::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:dbsvr.GetResp.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetResp::release_value() {
  // @@protoc_insertion_point(field_release:dbsvr.GetResp.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetResp::set_allocated_value(::std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:dbsvr.GetResp.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dbsvr

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_dbsvr_2eproto