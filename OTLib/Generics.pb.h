// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Generics.proto

#ifndef PROTOBUF_Generics_2eproto__INCLUDED
#define PROTOBUF_Generics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace OTDB {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Generics_2eproto();
void protobuf_AssignDesc_Generics_2eproto();
void protobuf_ShutdownFile_Generics_2eproto();

class String_InternalPB;
class KeyValue_InternalPB;
class StringMap_InternalPB;

// ===================================================================

class String_InternalPB : public ::google::protobuf::Message {
 public:
  String_InternalPB();
  virtual ~String_InternalPB();
  
  String_InternalPB(const String_InternalPB& from);
  
  inline String_InternalPB& operator=(const String_InternalPB& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const String_InternalPB& default_instance();
  
  void Swap(String_InternalPB* other);
  
  // implements Message ----------------------------------------------
  
  String_InternalPB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const String_InternalPB& from);
  void MergeFrom(const String_InternalPB& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  
  // @@protoc_insertion_point(class_scope:OTDB.String_InternalPB)
 private:
  inline void set_has_value();
  inline void clear_has_value();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* value_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_Generics_2eproto();
  friend void protobuf_AssignDesc_Generics_2eproto();
  friend void protobuf_ShutdownFile_Generics_2eproto();
  
  void InitAsDefaultInstance();
  static String_InternalPB* default_instance_;
};
// -------------------------------------------------------------------

class KeyValue_InternalPB : public ::google::protobuf::Message {
 public:
  KeyValue_InternalPB();
  virtual ~KeyValue_InternalPB();
  
  KeyValue_InternalPB(const KeyValue_InternalPB& from);
  
  inline KeyValue_InternalPB& operator=(const KeyValue_InternalPB& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const KeyValue_InternalPB& default_instance();
  
  void Swap(KeyValue_InternalPB* other);
  
  // implements Message ----------------------------------------------
  
  KeyValue_InternalPB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KeyValue_InternalPB& from);
  void MergeFrom(const KeyValue_InternalPB& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  
  // optional string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  
  // @@protoc_insertion_point(class_scope:OTDB.KeyValue_InternalPB)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* key_;
  ::std::string* value_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Generics_2eproto();
  friend void protobuf_AssignDesc_Generics_2eproto();
  friend void protobuf_ShutdownFile_Generics_2eproto();
  
  void InitAsDefaultInstance();
  static KeyValue_InternalPB* default_instance_;
};
// -------------------------------------------------------------------

class StringMap_InternalPB : public ::google::protobuf::Message {
 public:
  StringMap_InternalPB();
  virtual ~StringMap_InternalPB();
  
  StringMap_InternalPB(const StringMap_InternalPB& from);
  
  inline StringMap_InternalPB& operator=(const StringMap_InternalPB& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const StringMap_InternalPB& default_instance();
  
  void Swap(StringMap_InternalPB* other);
  
  // implements Message ----------------------------------------------
  
  StringMap_InternalPB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StringMap_InternalPB& from);
  void MergeFrom(const StringMap_InternalPB& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .OTDB.KeyValue_InternalPB node = 1;
  inline int node_size() const;
  inline void clear_node();
  static const int kNodeFieldNumber = 1;
  inline const ::OTDB::KeyValue_InternalPB& node(int index) const;
  inline ::OTDB::KeyValue_InternalPB* mutable_node(int index);
  inline ::OTDB::KeyValue_InternalPB* add_node();
  inline const ::google::protobuf::RepeatedPtrField< ::OTDB::KeyValue_InternalPB >&
      node() const;
  inline ::google::protobuf::RepeatedPtrField< ::OTDB::KeyValue_InternalPB >*
      mutable_node();
  
  // @@protoc_insertion_point(class_scope:OTDB.StringMap_InternalPB)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::OTDB::KeyValue_InternalPB > node_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_Generics_2eproto();
  friend void protobuf_AssignDesc_Generics_2eproto();
  friend void protobuf_ShutdownFile_Generics_2eproto();
  
  void InitAsDefaultInstance();
  static StringMap_InternalPB* default_instance_;
};
// ===================================================================


// ===================================================================

// String_InternalPB

// optional string value = 1;
inline bool String_InternalPB::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void String_InternalPB::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void String_InternalPB::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void String_InternalPB::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& String_InternalPB::value() const {
  return *value_;
}
inline void String_InternalPB::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void String_InternalPB::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void String_InternalPB::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* String_InternalPB::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* String_InternalPB::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// KeyValue_InternalPB

// optional string key = 1;
inline bool KeyValue_InternalPB::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void KeyValue_InternalPB::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void KeyValue_InternalPB::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void KeyValue_InternalPB::clear_key() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& KeyValue_InternalPB::key() const {
  return *key_;
}
inline void KeyValue_InternalPB::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void KeyValue_InternalPB::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void KeyValue_InternalPB::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* KeyValue_InternalPB::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  return key_;
}
inline ::std::string* KeyValue_InternalPB::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string value = 2;
inline bool KeyValue_InternalPB::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void KeyValue_InternalPB::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void KeyValue_InternalPB::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void KeyValue_InternalPB::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& KeyValue_InternalPB::value() const {
  return *value_;
}
inline void KeyValue_InternalPB::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void KeyValue_InternalPB::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void KeyValue_InternalPB::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* KeyValue_InternalPB::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* KeyValue_InternalPB::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// StringMap_InternalPB

// repeated .OTDB.KeyValue_InternalPB node = 1;
inline int StringMap_InternalPB::node_size() const {
  return node_.size();
}
inline void StringMap_InternalPB::clear_node() {
  node_.Clear();
}
inline const ::OTDB::KeyValue_InternalPB& StringMap_InternalPB::node(int index) const {
  return node_.Get(index);
}
inline ::OTDB::KeyValue_InternalPB* StringMap_InternalPB::mutable_node(int index) {
  return node_.Mutable(index);
}
inline ::OTDB::KeyValue_InternalPB* StringMap_InternalPB::add_node() {
  return node_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::OTDB::KeyValue_InternalPB >&
StringMap_InternalPB::node() const {
  return node_;
}
inline ::google::protobuf::RepeatedPtrField< ::OTDB::KeyValue_InternalPB >*
StringMap_InternalPB::mutable_node() {
  return &node_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OTDB

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Generics_2eproto__INCLUDED
