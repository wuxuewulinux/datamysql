// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DBmsg.proto

#ifndef PROTOBUF_DBmsg_2eproto__INCLUDED
#define PROTOBUF_DBmsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DBmsg_2eproto();
void protobuf_AssignDesc_DBmsg_2eproto();
void protobuf_ShutdownFile_DBmsg_2eproto();

class DBRoleInfo;

// ===================================================================

class DBRoleInfo : public ::google::protobuf::Message {
 public:
  DBRoleInfo();
  virtual ~DBRoleInfo();

  DBRoleInfo(const DBRoleInfo& from);

  inline DBRoleInfo& operator=(const DBRoleInfo& from) {
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
  static const DBRoleInfo& default_instance();

  void Swap(DBRoleInfo* other);

  // implements Message ----------------------------------------------

  DBRoleInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBRoleInfo& from);
  void MergeFrom(const DBRoleInfo& from);
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

  // optional uint64 UID = 1;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUIDFieldNumber = 1;
  inline ::google::protobuf::uint64 uid() const;
  inline void set_uid(::google::protobuf::uint64 value);

  // optional string Name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional uint32 Level = 3;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 3;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // optional uint32 Rank = 4;
  inline bool has_rank() const;
  inline void clear_rank();
  static const int kRankFieldNumber = 4;
  inline ::google::protobuf::uint32 rank() const;
  inline void set_rank(::google::protobuf::uint32 value);

  // optional uint32 LevelExper = 5;
  inline bool has_levelexper() const;
  inline void clear_levelexper();
  static const int kLevelExperFieldNumber = 5;
  inline ::google::protobuf::uint32 levelexper() const;
  inline void set_levelexper(::google::protobuf::uint32 value);

  // optional uint32 RankExper = 6;
  inline bool has_rankexper() const;
  inline void clear_rankexper();
  static const int kRankExperFieldNumber = 6;
  inline ::google::protobuf::uint32 rankexper() const;
  inline void set_rankexper(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:DBRoleInfo)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_rank();
  inline void clear_has_rank();
  inline void set_has_levelexper();
  inline void clear_has_levelexper();
  inline void set_has_rankexper();
  inline void clear_has_rankexper();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 uid_;
  ::std::string* name_;
  ::google::protobuf::uint32 level_;
  ::google::protobuf::uint32 rank_;
  ::google::protobuf::uint32 levelexper_;
  ::google::protobuf::uint32 rankexper_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_DBmsg_2eproto();
  friend void protobuf_AssignDesc_DBmsg_2eproto();
  friend void protobuf_ShutdownFile_DBmsg_2eproto();

  void InitAsDefaultInstance();
  static DBRoleInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// DBRoleInfo

// optional uint64 UID = 1;
inline bool DBRoleInfo::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBRoleInfo::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBRoleInfo::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBRoleInfo::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
  clear_has_uid();
}
inline ::google::protobuf::uint64 DBRoleInfo::uid() const {
  return uid_;
}
inline void DBRoleInfo::set_uid(::google::protobuf::uint64 value) {
  set_has_uid();
  uid_ = value;
}

// optional string Name = 2;
inline bool DBRoleInfo::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBRoleInfo::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBRoleInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBRoleInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& DBRoleInfo::name() const {
  return *name_;
}
inline void DBRoleInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DBRoleInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void DBRoleInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DBRoleInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* DBRoleInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DBRoleInfo::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint32 Level = 3;
inline bool DBRoleInfo::has_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DBRoleInfo::set_has_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DBRoleInfo::clear_has_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DBRoleInfo::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 DBRoleInfo::level() const {
  return level_;
}
inline void DBRoleInfo::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// optional uint32 Rank = 4;
inline bool DBRoleInfo::has_rank() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DBRoleInfo::set_has_rank() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DBRoleInfo::clear_has_rank() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DBRoleInfo::clear_rank() {
  rank_ = 0u;
  clear_has_rank();
}
inline ::google::protobuf::uint32 DBRoleInfo::rank() const {
  return rank_;
}
inline void DBRoleInfo::set_rank(::google::protobuf::uint32 value) {
  set_has_rank();
  rank_ = value;
}

// optional uint32 LevelExper = 5;
inline bool DBRoleInfo::has_levelexper() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DBRoleInfo::set_has_levelexper() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DBRoleInfo::clear_has_levelexper() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DBRoleInfo::clear_levelexper() {
  levelexper_ = 0u;
  clear_has_levelexper();
}
inline ::google::protobuf::uint32 DBRoleInfo::levelexper() const {
  return levelexper_;
}
inline void DBRoleInfo::set_levelexper(::google::protobuf::uint32 value) {
  set_has_levelexper();
  levelexper_ = value;
}

// optional uint32 RankExper = 6;
inline bool DBRoleInfo::has_rankexper() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DBRoleInfo::set_has_rankexper() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DBRoleInfo::clear_has_rankexper() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DBRoleInfo::clear_rankexper() {
  rankexper_ = 0u;
  clear_has_rankexper();
}
inline ::google::protobuf::uint32 DBRoleInfo::rankexper() const {
  return rankexper_;
}
inline void DBRoleInfo::set_rankexper(::google::protobuf::uint32 value) {
  set_has_rankexper();
  rankexper_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DBmsg_2eproto__INCLUDED
