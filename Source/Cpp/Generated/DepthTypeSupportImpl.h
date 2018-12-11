/* -*- C++ -*- */
/* Generated by /home/binary9/dev/OpenDDS-3.13/dds/idl/opendds_idl version 3.13 (ACE version 6.2a_p15) running on input file ../IDL/Depth.idl */
#ifndef OPENDDS_IDL_GENERATED_DEPTHTYPESUPPORTIMPL_H_VABU0G
#define OPENDDS_IDL_GENERATED_DEPTHTYPESUPPORTIMPL_H_VABU0G
#include "DepthC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "DepthTypeSupportC.h"
#include "FluidPressure_C.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


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

void gen_find_size(const orov::Depth& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const orov::Depth& stru);

bool operator>>(Serializer& strm, orov::Depth& stru);

size_t gen_max_marshaled_size(const orov::Depth& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const orov::Depth> stru, bool align);

void gen_find_size(KeyOnly<const orov::Depth> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const orov::Depth> stru);

bool operator>>(Serializer& strm, KeyOnly<orov::Depth> stru);

template <>
struct MarshalTraits<orov::Depth> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  Depth_OpenDDS_KeyLessThan {
  bool operator()(const orov::Depth& v1, const orov::Depth& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.id < v2.id) return true;
    if (v2.id < v1.id) return false;
    return false;
  }
};
}


namespace orov {
class DepthTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<orov::Depth> {
  typedef orov::Depth MessageType;
  typedef orov::DepthSeq MessageSequenceType;
  typedef orov::DepthTypeSupport TypeSupportType;
  typedef orov::DepthTypeSupportImpl TypeSupportTypeImpl;
  typedef orov::DepthDataWriter DataWriterType;
  typedef orov::DepthDataReader DataReaderType;
  typedef orov::Depth_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "orov::Depth"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
class  DepthTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<DepthTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Depth> TraitsType;
  typedef DepthTypeSupport TypeSupportType;
  typedef DepthTypeSupport::_var_type _var_type;
  typedef DepthTypeSupport::_ptr_type _ptr_type;

  DepthTypeSupportImpl() {}
  virtual ~DepthTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static DepthTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
const MetaStruct& getMetaStruct<orov::Depth>();
bool gen_skip_over(Serializer& ser, orov::Depth*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Depth */


/* Begin STRUCT: DepthConfig */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const orov::DepthConfig& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const orov::DepthConfig& stru);

bool operator>>(Serializer& strm, orov::DepthConfig& stru);

size_t gen_max_marshaled_size(const orov::DepthConfig& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const orov::DepthConfig> stru, bool align);

void gen_find_size(KeyOnly<const orov::DepthConfig> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const orov::DepthConfig> stru);

bool operator>>(Serializer& strm, KeyOnly<orov::DepthConfig> stru);

template <>
struct MarshalTraits<orov::DepthConfig> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  DepthConfig_OpenDDS_KeyLessThan {
  bool operator()(const orov::DepthConfig& v1, const orov::DepthConfig& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.id < v2.id) return true;
    if (v2.id < v1.id) return false;
    return false;
  }
};
}


namespace orov {
class DepthConfigTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<orov::DepthConfig> {
  typedef orov::DepthConfig MessageType;
  typedef orov::DepthConfigSeq MessageSequenceType;
  typedef orov::DepthConfigTypeSupport TypeSupportType;
  typedef orov::DepthConfigTypeSupportImpl TypeSupportTypeImpl;
  typedef orov::DepthConfigDataWriter DataWriterType;
  typedef orov::DepthConfigDataReader DataReaderType;
  typedef orov::DepthConfig_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "orov::DepthConfig"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace orov {
class  DepthConfigTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<DepthConfigTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<DepthConfig> TraitsType;
  typedef DepthConfigTypeSupport TypeSupportType;
  typedef DepthConfigTypeSupport::_var_type _var_type;
  typedef DepthConfigTypeSupport::_ptr_type _ptr_type;

  DepthConfigTypeSupportImpl() {}
  virtual ~DepthConfigTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static DepthConfigTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
const MetaStruct& getMetaStruct<orov::DepthConfig>();
bool gen_skip_over(Serializer& ser, orov::DepthConfig*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: DepthConfig */

/* End MODULE: orov */
#endif /* OPENDDS_IDL_GENERATED_DEPTHTYPESUPPORTIMPL_H_VABU0G */
