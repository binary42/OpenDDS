/* Generated by /home/binary9/dev/OpenDDS-3.12/dds/idl/opendds_idl version 3.12 (ACE version 6.2a_p15) running on input file ../IDL/Header_.idl */
#include "Header_TypeSupportImpl.h"

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
#include "Time_TypeSupportImpl.h"


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

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const std_msgs::msg::dds_::Header_& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.stamp_, size, padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.frame_id_.in()) + 1;
}

bool operator<<(Serializer& strm, const std_msgs::msg::dds_::Header_& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.stamp_)
    && (strm << stru.frame_id_.in());
}

bool operator>>(Serializer& strm, std_msgs::msg::dds_::Header_& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.stamp_)
    && (strm >> stru.frame_id_.out());
}

size_t gen_max_marshaled_size(const std_msgs::msg::dds_::Header_& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const std_msgs::msg::dds_::Header_> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const std_msgs::msg::dds_::Header_> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const std_msgs::msg::dds_::Header_> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<std_msgs::msg::dds_::Header_> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace std_msgs {
namespace msg {
namespace dds_ {
::DDS::DataWriter_ptr Header_TypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Header_> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr Header_TypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Header_> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr Header_TypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Header_> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Header_, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& Header_TypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Header_>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool Header_TypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* Header_TypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
Header_TypeSupport::_ptr_type Header_TypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<std_msgs::msg::dds_::Header_> : MetaStruct {
  typedef std_msgs::msg::dds_::Header_ T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }
  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const std_msgs::msg::dds_::Header_& typed = *static_cast<const std_msgs::msg::dds_::Header_*>(stru);
    if (std::strncmp(field, "stamp_.", 7) == 0) {
      return getMetaStruct<builtin_interfaces::msg::dds_::Time_>().getValue(&typed.stamp_, field + 7);
    }
    if (std::strcmp(field, "frame_id_") == 0) {
      return typed.frame_id_.in();
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct std_msgs::msg::dds_::Header_)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "stamp_.", 7) == 0) {
      return getMetaStruct<builtin_interfaces::msg::dds_::Time_>().getValue(ser, field + 7);
    } else {
      if (!gen_skip_over(ser, static_cast<builtin_interfaces::msg::dds_::Time_*>(0))) {
        throw std::runtime_error("Field 'stamp_' could not be skipped");
      }
    }
    if (std::strcmp(field, "frame_id_") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'frame_id_' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'frame_id_' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'frame_id_' contents could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct std_msgs::msg::dds_::Header_");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "stamp_.", 7) == 0) {
      return make_struct_cmp(&T::stamp_, getMetaStruct<builtin_interfaces::msg::dds_::Time_>().create_qc_comparator(field + 7), next);
    }
    if (std::strcmp(field, "frame_id_") == 0) {
      return make_field_cmp(&T::frame_id_, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct std_msgs::msg::dds_::Header_)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"stamp_", "frame_id_", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "stamp_") == 0) {
      return &static_cast<const T*>(stru)->stamp_;
    }
    if (std::strcmp(field, "frame_id_") == 0) {
      return &static_cast<const T*>(stru)->frame_id_;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct std_msgs::msg::dds_::Header_)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "stamp_") == 0) {
      static_cast<T*>(lhs)->stamp_ = *static_cast<const builtin_interfaces::msg::dds_::Time_*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "frame_id_") == 0) {
      static_cast<T*>(lhs)->frame_id_ = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct std_msgs::msg::dds_::Header_)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "frame_id_") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->frame_id_.in(), static_cast<const T*>(rhs)->frame_id_.in());
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct std_msgs::msg::dds_::Header_)");
  }
};

template<>
const MetaStruct& getMetaStruct<std_msgs::msg::dds_::Header_>()
{
  static MetaStructImpl<std_msgs::msg::dds_::Header_> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, std_msgs::msg::dds_::Header_*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<std_msgs::msg::dds_::Header_>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Header_ */

/* End MODULE: dds_ */

/* End MODULE: msg */

/* End MODULE: std_msgs */
