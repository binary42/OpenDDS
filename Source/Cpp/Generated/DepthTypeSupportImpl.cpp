/* Generated by /home/binary9/dev/OpenDDS-3.12/dds/idl/opendds_idl version 3.12 (ACE version 6.2a_p15) running on input file ../IDL/Depth.idl */
#include "DepthTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"
#include "FluidPressure_TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: builtin_interfaces */



/* Begin MODULE: msg */



/* Begin MODULE: dds_ */



/* Begin STRUCT: Time_ */


/* End STRUCT: Time_ */

/* End MODULE: dds_ */

/* End MODULE: msg */

/* End MODULE: builtin_interfaces */


/* Begin MODULE: std_msgs */



/* Begin MODULE: msg */



/* Begin MODULE: dds_ */



/* Begin STRUCT: Header_ */


/* End STRUCT: Header_ */

/* End MODULE: dds_ */

/* End MODULE: msg */

/* End MODULE: std_msgs */


/* Begin MODULE: sensor_msgs */



/* Begin MODULE: msg */



/* Begin MODULE: dds_ */



/* Begin STRUCT: FluidPressure_ */


/* End STRUCT: FluidPressure_ */

/* End MODULE: dds_ */

/* End MODULE: msg */

/* End MODULE: sensor_msgs */


/* Begin MODULE: orov */



/* Begin CONST: WATER_TYPE_FRESH */


/* End CONST: WATER_TYPE_FRESH */


/* Begin CONST: WATER_TYPE_BRACKISH */


/* End CONST: WATER_TYPE_BRACKISH */


/* Begin CONST: WATER_TYPE_SALT */


/* End CONST: WATER_TYPE_SALT */


/* Begin CONST: WATER_TYPE_COUNT */


/* End CONST: WATER_TYPE_COUNT */


/* Begin STRUCT: Depth */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const orov::Depth& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.pressure, size, padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.id.in()) + 1;
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.depth);
}

bool operator<<(Serializer& strm, const orov::Depth& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.pressure)
    && (strm << stru.id.in())
    && (strm << stru.depth);
}

bool operator>>(Serializer& strm, orov::Depth& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.pressure)
    && (strm >> stru.id.out())
    && (strm >> stru.depth);
}

size_t gen_max_marshaled_size(const orov::Depth& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const orov::Depth> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const orov::Depth> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.t.id.in()) + 1;
}

bool operator<<(Serializer& strm, KeyOnly<const orov::Depth> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.t.id.in());
}

bool operator>>(Serializer& strm, KeyOnly<orov::Depth> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.t.id.out());
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
::DDS::DataWriter_ptr DepthTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Depth> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr DepthTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Depth> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr DepthTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Depth> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Depth, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& DepthTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Depth>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool DepthTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* DepthTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
DepthTypeSupport::_ptr_type DepthTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<orov::Depth> : MetaStruct {
  typedef orov::Depth T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }
  size_t numDcpsKeys() const { return 1; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const orov::Depth& typed = *static_cast<const orov::Depth*>(stru);
    if (std::strncmp(field, "pressure.", 9) == 0) {
      return getMetaStruct<sensor_msgs::msg::dds_::FluidPressure_>().getValue(&typed.pressure, field + 9);
    }
    if (std::strcmp(field, "id") == 0) {
      return typed.id.in();
    }
    if (std::strcmp(field, "depth") == 0) {
      return typed.depth;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::Depth)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "pressure.", 9) == 0) {
      return getMetaStruct<sensor_msgs::msg::dds_::FluidPressure_>().getValue(ser, field + 9);
    } else {
      if (!gen_skip_over(ser, static_cast<sensor_msgs::msg::dds_::FluidPressure_*>(0))) {
        throw std::runtime_error("Field 'pressure' could not be skipped");
      }
    }
    if (std::strcmp(field, "id") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'id' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'id' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'id' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "depth") == 0) {
      ACE_CDR::Float val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'depth' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'depth' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct orov::Depth");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "pressure.", 9) == 0) {
      return make_struct_cmp(&T::pressure, getMetaStruct<sensor_msgs::msg::dds_::FluidPressure_>().create_qc_comparator(field + 9), next);
    }
    if (std::strcmp(field, "id") == 0) {
      return make_field_cmp(&T::id, next);
    }
    if (std::strcmp(field, "depth") == 0) {
      return make_field_cmp(&T::depth, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::Depth)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"pressure", "id", "depth", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "pressure") == 0) {
      return &static_cast<const T*>(stru)->pressure;
    }
    if (std::strcmp(field, "id") == 0) {
      return &static_cast<const T*>(stru)->id;
    }
    if (std::strcmp(field, "depth") == 0) {
      return &static_cast<const T*>(stru)->depth;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::Depth)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "pressure") == 0) {
      static_cast<T*>(lhs)->pressure = *static_cast<const sensor_msgs::msg::dds_::FluidPressure_*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "id") == 0) {
      static_cast<T*>(lhs)->id = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "depth") == 0) {
      static_cast<T*>(lhs)->depth = *static_cast<const CORBA::Float*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::Depth)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "id") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->id.in(), static_cast<const T*>(rhs)->id.in());
    }
    if (std::strcmp(field, "depth") == 0) {
      return static_cast<const T*>(lhs)->depth == static_cast<const T*>(rhs)->depth;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::Depth)");
  }
};

template<>
const MetaStruct& getMetaStruct<orov::Depth>()
{
  static MetaStructImpl<orov::Depth> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, orov::Depth*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<orov::Depth>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Depth */


/* Begin STRUCT: DepthConfig */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const orov::DepthConfig& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.id.in()) + 1;
  size += gen_max_marshaled_size(ACE_OutputCDR::from_octet(stru.water_type));
  size += gen_max_marshaled_size(ACE_OutputCDR::from_boolean(stru.user_offset_enabled));
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.zero_offset);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.zero_offset_user);
}

bool operator<<(Serializer& strm, const orov::DepthConfig& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.id.in())
    && (strm << ACE_OutputCDR::from_octet(stru.water_type))
    && (strm << ACE_OutputCDR::from_boolean(stru.user_offset_enabled))
    && (strm << stru.zero_offset)
    && (strm << stru.zero_offset_user);
}

bool operator>>(Serializer& strm, orov::DepthConfig& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.id.out())
    && (strm >> ACE_InputCDR::to_octet(stru.water_type))
    && (strm >> ACE_InputCDR::to_boolean(stru.user_offset_enabled))
    && (strm >> stru.zero_offset)
    && (strm >> stru.zero_offset_user);
}

size_t gen_max_marshaled_size(const orov::DepthConfig& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const orov::DepthConfig> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const orov::DepthConfig> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.t.id.in()) + 1;
}

bool operator<<(Serializer& strm, KeyOnly<const orov::DepthConfig> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.t.id.in());
}

bool operator>>(Serializer& strm, KeyOnly<orov::DepthConfig> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.t.id.out());
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
::DDS::DataWriter_ptr DepthConfigTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<DepthConfig> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr DepthConfigTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<DepthConfig> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr DepthConfigTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<DepthConfig> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<DepthConfig, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& DepthConfigTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<DepthConfig>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool DepthConfigTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* DepthConfigTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
DepthConfigTypeSupport::_ptr_type DepthConfigTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<orov::DepthConfig> : MetaStruct {
  typedef orov::DepthConfig T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }
  size_t numDcpsKeys() const { return 1; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const orov::DepthConfig& typed = *static_cast<const orov::DepthConfig*>(stru);
    if (std::strcmp(field, "id") == 0) {
      return typed.id.in();
    }
    if (std::strcmp(field, "water_type") == 0) {
      return typed.water_type;
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      return typed.user_offset_enabled;
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      return typed.zero_offset;
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      return typed.zero_offset_user;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::DepthConfig)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "id") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'id' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'id' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'id' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "water_type") == 0) {
      ACE_CDR::Octet val;
      if (!(ser >> ACE_InputCDR::to_octet(val))) {
        throw std::runtime_error("Field 'water_type' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 1)) {
        throw std::runtime_error("Field 'water_type' could not be skipped");
      }
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      ACE_CDR::Boolean val;
      if (!(ser >> ACE_InputCDR::to_boolean(val))) {
        throw std::runtime_error("Field 'user_offset_enabled' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 1)) {
        throw std::runtime_error("Field 'user_offset_enabled' could not be skipped");
      }
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      ACE_CDR::Float val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'zero_offset' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'zero_offset' could not be skipped");
      }
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      ACE_CDR::Float val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'zero_offset_user' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'zero_offset_user' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct orov::DepthConfig");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "id") == 0) {
      return make_field_cmp(&T::id, next);
    }
    if (std::strcmp(field, "water_type") == 0) {
      return make_field_cmp(&T::water_type, next);
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      return make_field_cmp(&T::user_offset_enabled, next);
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      return make_field_cmp(&T::zero_offset, next);
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      return make_field_cmp(&T::zero_offset_user, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::DepthConfig)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"id", "water_type", "user_offset_enabled", "zero_offset", "zero_offset_user", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "id") == 0) {
      return &static_cast<const T*>(stru)->id;
    }
    if (std::strcmp(field, "water_type") == 0) {
      return &static_cast<const T*>(stru)->water_type;
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      return &static_cast<const T*>(stru)->user_offset_enabled;
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      return &static_cast<const T*>(stru)->zero_offset;
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      return &static_cast<const T*>(stru)->zero_offset_user;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::DepthConfig)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "id") == 0) {
      static_cast<T*>(lhs)->id = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "water_type") == 0) {
      static_cast<T*>(lhs)->water_type = *static_cast<const CORBA::Octet*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      static_cast<T*>(lhs)->user_offset_enabled = *static_cast<const CORBA::Boolean*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      static_cast<T*>(lhs)->zero_offset = *static_cast<const CORBA::Float*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      static_cast<T*>(lhs)->zero_offset_user = *static_cast<const CORBA::Float*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::DepthConfig)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "id") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->id.in(), static_cast<const T*>(rhs)->id.in());
    }
    if (std::strcmp(field, "water_type") == 0) {
      return static_cast<const T*>(lhs)->water_type == static_cast<const T*>(rhs)->water_type;
    }
    if (std::strcmp(field, "user_offset_enabled") == 0) {
      return static_cast<const T*>(lhs)->user_offset_enabled == static_cast<const T*>(rhs)->user_offset_enabled;
    }
    if (std::strcmp(field, "zero_offset") == 0) {
      return static_cast<const T*>(lhs)->zero_offset == static_cast<const T*>(rhs)->zero_offset;
    }
    if (std::strcmp(field, "zero_offset_user") == 0) {
      return static_cast<const T*>(lhs)->zero_offset_user == static_cast<const T*>(rhs)->zero_offset_user;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct orov::DepthConfig)");
  }
};

template<>
const MetaStruct& getMetaStruct<orov::DepthConfig>()
{
  static MetaStructImpl<orov::DepthConfig> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, orov::DepthConfig*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<orov::DepthConfig>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: DepthConfig */

/* End MODULE: orov */
