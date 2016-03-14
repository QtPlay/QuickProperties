// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: quickproperties.proto

#ifndef PROTOBUF_quickproperties_2eproto__INCLUDED
#define PROTOBUF_quickproperties_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace qps {
namespace pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_quickproperties_2eproto();
void protobuf_AssignDesc_quickproperties_2eproto();
void protobuf_ShutdownFile_quickproperties_2eproto();

class Properties;
class Property;

// ===================================================================

class Property : public ::google::protobuf::Message {
 public:
  Property();
  virtual ~Property();

  Property(const Property& from);

  inline Property& operator=(const Property& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Property& default_instance();

  void Swap(Property* other);

  // implements Message ----------------------------------------------

  inline Property* New() const { return New(NULL); }

  Property* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Property& from);
  void MergeFrom(const Property& from);
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
  void InternalSwap(Property* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // optional string value = 3;
  void clear_value();
  static const int kValueFieldNumber = 3;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:qps.pb.Property)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickproperties_2eproto();
  friend void protobuf_AssignDesc_quickproperties_2eproto();
  friend void protobuf_ShutdownFile_quickproperties_2eproto();

  void InitAsDefaultInstance();
  static Property* default_instance_;
};
// -------------------------------------------------------------------

class Properties : public ::google::protobuf::Message {
 public:
  Properties();
  virtual ~Properties();

  Properties(const Properties& from);

  inline Properties& operator=(const Properties& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Properties& default_instance();

  void Swap(Properties* other);

  // implements Message ----------------------------------------------

  inline Properties* New() const { return New(NULL); }

  Properties* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Properties& from);
  void MergeFrom(const Properties& from);
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
  void InternalSwap(Properties* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string object_name = 1;
  void clear_object_name();
  static const int kObjectNameFieldNumber = 1;
  const ::std::string& object_name() const;
  void set_object_name(const ::std::string& value);
  void set_object_name(const char* value);
  void set_object_name(const char* value, size_t size);
  ::std::string* mutable_object_name();
  ::std::string* release_object_name();
  void set_allocated_object_name(::std::string* object_name);

  // optional int32 hidden_static_properties_count = 2;
  void clear_hidden_static_properties_count();
  static const int kHiddenStaticPropertiesCountFieldNumber = 2;
  ::google::protobuf::int32 hidden_static_properties_count() const;
  void set_hidden_static_properties_count(::google::protobuf::int32 value);

  // optional int32 static_property_count = 3;
  void clear_static_property_count();
  static const int kStaticPropertyCountFieldNumber = 3;
  ::google::protobuf::int32 static_property_count() const;
  void set_static_property_count(::google::protobuf::int32 value);

  // optional int32 dynamic_property_count = 4;
  void clear_dynamic_property_count();
  static const int kDynamicPropertyCountFieldNumber = 4;
  ::google::protobuf::int32 dynamic_property_count() const;
  void set_dynamic_property_count(::google::protobuf::int32 value);

  // repeated .qps.pb.Property properties = 5;
  int properties_size() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 5;
  const ::qps::pb::Property& properties(int index) const;
  ::qps::pb::Property* mutable_properties(int index);
  ::qps::pb::Property* add_properties();
  ::google::protobuf::RepeatedPtrField< ::qps::pb::Property >*
      mutable_properties();
  const ::google::protobuf::RepeatedPtrField< ::qps::pb::Property >&
      properties() const;

  // @@protoc_insertion_point(class_scope:qps.pb.Properties)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr object_name_;
  ::google::protobuf::int32 hidden_static_properties_count_;
  ::google::protobuf::int32 static_property_count_;
  ::google::protobuf::RepeatedPtrField< ::qps::pb::Property > properties_;
  ::google::protobuf::int32 dynamic_property_count_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_quickproperties_2eproto();
  friend void protobuf_AssignDesc_quickproperties_2eproto();
  friend void protobuf_ShutdownFile_quickproperties_2eproto();

  void InitAsDefaultInstance();
  static Properties* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Property

// optional string name = 1;
inline void Property::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Property::name() const {
  // @@protoc_insertion_point(field_get:qps.pb.Property.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Property::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qps.pb.Property.name)
}
inline void Property::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qps.pb.Property.name)
}
inline void Property::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qps.pb.Property.name)
}
inline ::std::string* Property::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:qps.pb.Property.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Property::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Property::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:qps.pb.Property.name)
}

// optional int32 type = 2;
inline void Property::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 Property::type() const {
  // @@protoc_insertion_point(field_get:qps.pb.Property.type)
  return type_;
}
inline void Property::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:qps.pb.Property.type)
}

// optional string value = 3;
inline void Property::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Property::value() const {
  // @@protoc_insertion_point(field_get:qps.pb.Property.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Property::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qps.pb.Property.value)
}
inline void Property::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qps.pb.Property.value)
}
inline void Property::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qps.pb.Property.value)
}
inline ::std::string* Property::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:qps.pb.Property.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Property::release_value() {
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Property::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:qps.pb.Property.value)
}

// -------------------------------------------------------------------

// Properties

// optional string object_name = 1;
inline void Properties::clear_object_name() {
  object_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Properties::object_name() const {
  // @@protoc_insertion_point(field_get:qps.pb.Properties.object_name)
  return object_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Properties::set_object_name(const ::std::string& value) {
  
  object_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qps.pb.Properties.object_name)
}
inline void Properties::set_object_name(const char* value) {
  
  object_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qps.pb.Properties.object_name)
}
inline void Properties::set_object_name(const char* value, size_t size) {
  
  object_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qps.pb.Properties.object_name)
}
inline ::std::string* Properties::mutable_object_name() {
  
  // @@protoc_insertion_point(field_mutable:qps.pb.Properties.object_name)
  return object_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Properties::release_object_name() {
  
  return object_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Properties::set_allocated_object_name(::std::string* object_name) {
  if (object_name != NULL) {
    
  } else {
    
  }
  object_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), object_name);
  // @@protoc_insertion_point(field_set_allocated:qps.pb.Properties.object_name)
}

// optional int32 hidden_static_properties_count = 2;
inline void Properties::clear_hidden_static_properties_count() {
  hidden_static_properties_count_ = 0;
}
inline ::google::protobuf::int32 Properties::hidden_static_properties_count() const {
  // @@protoc_insertion_point(field_get:qps.pb.Properties.hidden_static_properties_count)
  return hidden_static_properties_count_;
}
inline void Properties::set_hidden_static_properties_count(::google::protobuf::int32 value) {
  
  hidden_static_properties_count_ = value;
  // @@protoc_insertion_point(field_set:qps.pb.Properties.hidden_static_properties_count)
}

// optional int32 static_property_count = 3;
inline void Properties::clear_static_property_count() {
  static_property_count_ = 0;
}
inline ::google::protobuf::int32 Properties::static_property_count() const {
  // @@protoc_insertion_point(field_get:qps.pb.Properties.static_property_count)
  return static_property_count_;
}
inline void Properties::set_static_property_count(::google::protobuf::int32 value) {
  
  static_property_count_ = value;
  // @@protoc_insertion_point(field_set:qps.pb.Properties.static_property_count)
}

// optional int32 dynamic_property_count = 4;
inline void Properties::clear_dynamic_property_count() {
  dynamic_property_count_ = 0;
}
inline ::google::protobuf::int32 Properties::dynamic_property_count() const {
  // @@protoc_insertion_point(field_get:qps.pb.Properties.dynamic_property_count)
  return dynamic_property_count_;
}
inline void Properties::set_dynamic_property_count(::google::protobuf::int32 value) {
  
  dynamic_property_count_ = value;
  // @@protoc_insertion_point(field_set:qps.pb.Properties.dynamic_property_count)
}

// repeated .qps.pb.Property properties = 5;
inline int Properties::properties_size() const {
  return properties_.size();
}
inline void Properties::clear_properties() {
  properties_.Clear();
}
inline const ::qps::pb::Property& Properties::properties(int index) const {
  // @@protoc_insertion_point(field_get:qps.pb.Properties.properties)
  return properties_.Get(index);
}
inline ::qps::pb::Property* Properties::mutable_properties(int index) {
  // @@protoc_insertion_point(field_mutable:qps.pb.Properties.properties)
  return properties_.Mutable(index);
}
inline ::qps::pb::Property* Properties::add_properties() {
  // @@protoc_insertion_point(field_add:qps.pb.Properties.properties)
  return properties_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::qps::pb::Property >*
Properties::mutable_properties() {
  // @@protoc_insertion_point(field_mutable_list:qps.pb.Properties.properties)
  return &properties_;
}
inline const ::google::protobuf::RepeatedPtrField< ::qps::pb::Property >&
Properties::properties() const {
  // @@protoc_insertion_point(field_list:qps.pb.Properties.properties)
  return properties_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace qps

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_quickproperties_2eproto__INCLUDED