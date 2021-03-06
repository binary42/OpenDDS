// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p15
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "DepthTypeSupportC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "DepthTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_orov_DepthSeq_GUARD
#define _TAO_TYPECODE_orov_DepthSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        orov_DepthSeq_0 (
          ::CORBA::tk_sequence,
          &orov::_tc_Depth,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_orov_DepthSeq_0 =
        &orov_DepthSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_orov_DepthSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthSeq (
    ::CORBA::tk_alias,
    "IDL:orov/DepthSeq:1.0",
    "DepthSeq",
    &TAO::TypeCode::tc_orov_DepthSeq_0);
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthSeq =
    &_tao_tc_orov_DepthSeq;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthTypeSupport.

orov::DepthTypeSupport_ptr
TAO::Objref_Traits<orov::DepthTypeSupport>::duplicate (
    orov::DepthTypeSupport_ptr p)
{
  return orov::DepthTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthTypeSupport>::release (
    orov::DepthTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthTypeSupport_ptr
TAO::Objref_Traits<orov::DepthTypeSupport>::nil (void)
{
  return orov::DepthTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthTypeSupport>::marshal (
    const orov::DepthTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthTypeSupport::DepthTypeSupport (void)
{}

orov::DepthTypeSupport::~DepthTypeSupport (void)
{
}

void
orov::DepthTypeSupport::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthTypeSupport *_tao_tmp_pointer =
    static_cast<DepthTypeSupport *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthTypeSupport_ptr
orov::DepthTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthTypeSupport::_duplicate (
      dynamic_cast<DepthTypeSupport_ptr> (_tao_objref)
    );
}

orov::DepthTypeSupport_ptr
orov::DepthTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthTypeSupport::_duplicate (
      dynamic_cast<DepthTypeSupport_ptr> (_tao_objref)
    );
}

orov::DepthTypeSupport_ptr
orov::DepthTypeSupport::_nil (void)
{
  return 0;
}

orov::DepthTypeSupport_ptr
orov::DepthTypeSupport::_duplicate (DepthTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthTypeSupport::_tao_release (DepthTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthTypeSupport::_interface_repository_id (void) const
{
  return "IDL:orov/DepthTypeSupport:1.0";
}

::CORBA::Boolean
orov::DepthTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthTypeSupport (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthTypeSupport:1.0",
    "DepthTypeSupport");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthTypeSupport =
    &_tao_tc_orov_DepthTypeSupport;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthDataWriter.

orov::DepthDataWriter_ptr
TAO::Objref_Traits<orov::DepthDataWriter>::duplicate (
    orov::DepthDataWriter_ptr p)
{
  return orov::DepthDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthDataWriter>::release (
    orov::DepthDataWriter_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthDataWriter_ptr
TAO::Objref_Traits<orov::DepthDataWriter>::nil (void)
{
  return orov::DepthDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthDataWriter>::marshal (
    const orov::DepthDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthDataWriter::DepthDataWriter (void)
{}

orov::DepthDataWriter::~DepthDataWriter (void)
{
}

void
orov::DepthDataWriter::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthDataWriter *_tao_tmp_pointer =
    static_cast<DepthDataWriter *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthDataWriter_ptr
orov::DepthDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthDataWriter::_duplicate (
      dynamic_cast<DepthDataWriter_ptr> (_tao_objref)
    );
}

orov::DepthDataWriter_ptr
orov::DepthDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthDataWriter::_duplicate (
      dynamic_cast<DepthDataWriter_ptr> (_tao_objref)
    );
}

orov::DepthDataWriter_ptr
orov::DepthDataWriter::_nil (void)
{
  return 0;
}

orov::DepthDataWriter_ptr
orov::DepthDataWriter::_duplicate (DepthDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthDataWriter::_tao_release (DepthDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthDataWriter::_interface_repository_id (void) const
{
  return "IDL:orov/DepthDataWriter:1.0";
}

::CORBA::Boolean
orov::DepthDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthDataWriter (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthDataWriter:1.0",
    "DepthDataWriter");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthDataWriter =
    &_tao_tc_orov_DepthDataWriter;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthDataReader.

orov::DepthDataReader_ptr
TAO::Objref_Traits<orov::DepthDataReader>::duplicate (
    orov::DepthDataReader_ptr p)
{
  return orov::DepthDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthDataReader>::release (
    orov::DepthDataReader_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthDataReader_ptr
TAO::Objref_Traits<orov::DepthDataReader>::nil (void)
{
  return orov::DepthDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthDataReader>::marshal (
    const orov::DepthDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthDataReader::DepthDataReader (void)
{}

orov::DepthDataReader::~DepthDataReader (void)
{
}

void
orov::DepthDataReader::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthDataReader *_tao_tmp_pointer =
    static_cast<DepthDataReader *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthDataReader_ptr
orov::DepthDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthDataReader::_duplicate (
      dynamic_cast<DepthDataReader_ptr> (_tao_objref)
    );
}

orov::DepthDataReader_ptr
orov::DepthDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthDataReader::_duplicate (
      dynamic_cast<DepthDataReader_ptr> (_tao_objref)
    );
}

orov::DepthDataReader_ptr
orov::DepthDataReader::_nil (void)
{
  return 0;
}

orov::DepthDataReader_ptr
orov::DepthDataReader::_duplicate (DepthDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthDataReader::_tao_release (DepthDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthDataReader::_interface_repository_id (void) const
{
  return "IDL:orov/DepthDataReader:1.0";
}

::CORBA::Boolean
orov::DepthDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthDataReader (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthDataReader:1.0",
    "DepthDataReader");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthDataReader =
    &_tao_tc_orov_DepthDataReader;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_orov_DepthConfigSeq_GUARD
#define _TAO_TYPECODE_orov_DepthConfigSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        orov_DepthConfigSeq_0 (
          ::CORBA::tk_sequence,
          &orov::_tc_DepthConfig,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_orov_DepthConfigSeq_0 =
        &orov_DepthConfigSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_orov_DepthConfigSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthConfigSeq (
    ::CORBA::tk_alias,
    "IDL:orov/DepthConfigSeq:1.0",
    "DepthConfigSeq",
    &TAO::TypeCode::tc_orov_DepthConfigSeq_0);
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthConfigSeq =
    &_tao_tc_orov_DepthConfigSeq;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthConfigTypeSupport.

orov::DepthConfigTypeSupport_ptr
TAO::Objref_Traits<orov::DepthConfigTypeSupport>::duplicate (
    orov::DepthConfigTypeSupport_ptr p)
{
  return orov::DepthConfigTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthConfigTypeSupport>::release (
    orov::DepthConfigTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthConfigTypeSupport_ptr
TAO::Objref_Traits<orov::DepthConfigTypeSupport>::nil (void)
{
  return orov::DepthConfigTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthConfigTypeSupport>::marshal (
    const orov::DepthConfigTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthConfigTypeSupport::DepthConfigTypeSupport (void)
{}

orov::DepthConfigTypeSupport::~DepthConfigTypeSupport (void)
{
}

void
orov::DepthConfigTypeSupport::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthConfigTypeSupport *_tao_tmp_pointer =
    static_cast<DepthConfigTypeSupport *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthConfigTypeSupport_ptr
orov::DepthConfigTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigTypeSupport::_duplicate (
      dynamic_cast<DepthConfigTypeSupport_ptr> (_tao_objref)
    );
}

orov::DepthConfigTypeSupport_ptr
orov::DepthConfigTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigTypeSupport::_duplicate (
      dynamic_cast<DepthConfigTypeSupport_ptr> (_tao_objref)
    );
}

orov::DepthConfigTypeSupport_ptr
orov::DepthConfigTypeSupport::_nil (void)
{
  return 0;
}

orov::DepthConfigTypeSupport_ptr
orov::DepthConfigTypeSupport::_duplicate (DepthConfigTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthConfigTypeSupport::_tao_release (DepthConfigTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthConfigTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthConfigTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthConfigTypeSupport::_interface_repository_id (void) const
{
  return "IDL:orov/DepthConfigTypeSupport:1.0";
}

::CORBA::Boolean
orov::DepthConfigTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthConfigTypeSupport (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthConfigTypeSupport:1.0",
    "DepthConfigTypeSupport");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthConfigTypeSupport =
    &_tao_tc_orov_DepthConfigTypeSupport;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthConfigDataWriter.

orov::DepthConfigDataWriter_ptr
TAO::Objref_Traits<orov::DepthConfigDataWriter>::duplicate (
    orov::DepthConfigDataWriter_ptr p)
{
  return orov::DepthConfigDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthConfigDataWriter>::release (
    orov::DepthConfigDataWriter_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthConfigDataWriter_ptr
TAO::Objref_Traits<orov::DepthConfigDataWriter>::nil (void)
{
  return orov::DepthConfigDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthConfigDataWriter>::marshal (
    const orov::DepthConfigDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthConfigDataWriter::DepthConfigDataWriter (void)
{}

orov::DepthConfigDataWriter::~DepthConfigDataWriter (void)
{
}

void
orov::DepthConfigDataWriter::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthConfigDataWriter *_tao_tmp_pointer =
    static_cast<DepthConfigDataWriter *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthConfigDataWriter_ptr
orov::DepthConfigDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigDataWriter::_duplicate (
      dynamic_cast<DepthConfigDataWriter_ptr> (_tao_objref)
    );
}

orov::DepthConfigDataWriter_ptr
orov::DepthConfigDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigDataWriter::_duplicate (
      dynamic_cast<DepthConfigDataWriter_ptr> (_tao_objref)
    );
}

orov::DepthConfigDataWriter_ptr
orov::DepthConfigDataWriter::_nil (void)
{
  return 0;
}

orov::DepthConfigDataWriter_ptr
orov::DepthConfigDataWriter::_duplicate (DepthConfigDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthConfigDataWriter::_tao_release (DepthConfigDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthConfigDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthConfigDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthConfigDataWriter::_interface_repository_id (void) const
{
  return "IDL:orov/DepthConfigDataWriter:1.0";
}

::CORBA::Boolean
orov::DepthConfigDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthConfigDataWriter (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthConfigDataWriter:1.0",
    "DepthConfigDataWriter");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthConfigDataWriter =
    &_tao_tc_orov_DepthConfigDataWriter;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for orov::DepthConfigDataReader.

orov::DepthConfigDataReader_ptr
TAO::Objref_Traits<orov::DepthConfigDataReader>::duplicate (
    orov::DepthConfigDataReader_ptr p)
{
  return orov::DepthConfigDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<orov::DepthConfigDataReader>::release (
    orov::DepthConfigDataReader_ptr p)
{
  ::CORBA::release (p);
}

orov::DepthConfigDataReader_ptr
TAO::Objref_Traits<orov::DepthConfigDataReader>::nil (void)
{
  return orov::DepthConfigDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<orov::DepthConfigDataReader>::marshal (
    const orov::DepthConfigDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

orov::DepthConfigDataReader::DepthConfigDataReader (void)
{}

orov::DepthConfigDataReader::~DepthConfigDataReader (void)
{
}

void
orov::DepthConfigDataReader::_tao_any_destructor (void *_tao_void_pointer)
{
  DepthConfigDataReader *_tao_tmp_pointer =
    static_cast<DepthConfigDataReader *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

orov::DepthConfigDataReader_ptr
orov::DepthConfigDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigDataReader::_duplicate (
      dynamic_cast<DepthConfigDataReader_ptr> (_tao_objref)
    );
}

orov::DepthConfigDataReader_ptr
orov::DepthConfigDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DepthConfigDataReader::_duplicate (
      dynamic_cast<DepthConfigDataReader_ptr> (_tao_objref)
    );
}

orov::DepthConfigDataReader_ptr
orov::DepthConfigDataReader::_nil (void)
{
  return 0;
}

orov::DepthConfigDataReader_ptr
orov::DepthConfigDataReader::_duplicate (DepthConfigDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
orov::DepthConfigDataReader::_tao_release (DepthConfigDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
orov::DepthConfigDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:orov/DepthConfigDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* orov::DepthConfigDataReader::_interface_repository_id (void) const
{
  return "IDL:orov/DepthConfigDataReader:1.0";
}

::CORBA::Boolean
orov::DepthConfigDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_orov_DepthConfigDataReader (
    ::CORBA::tk_local_interface,
    "IDL:orov/DepthConfigDataReader:1.0",
    "DepthConfigDataReader");
  

namespace orov
{
  ::CORBA::TypeCode_ptr const _tc_DepthConfigDataReader =
    &_tao_tc_orov_DepthConfigDataReader;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthTypeSupport>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthTypeSupport>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthTypeSupport>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthTypeSupport_ptr _tao_elem)
  {
    DepthTypeSupport_ptr _tao_objptr =
      DepthTypeSupport::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthTypeSupport_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthTypeSupport>::insert (
        _tao_any,
        DepthTypeSupport::_tao_any_destructor,
        _tc_DepthTypeSupport,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthTypeSupport_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthTypeSupport>::extract (
          _tao_any,
          DepthTypeSupport::_tao_any_destructor,
          _tc_DepthTypeSupport,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthTypeSupport_ptr _tao_elem)
{
  orov::DepthTypeSupport_ptr _tao_objptr =
    orov::DepthTypeSupport::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthTypeSupport_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthTypeSupport>::insert (
      _tao_any,
      orov::DepthTypeSupport::_tao_any_destructor,
      orov::_tc_DepthTypeSupport,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthTypeSupport_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthTypeSupport>::extract (
        _tao_any,
        orov::DepthTypeSupport::_tao_any_destructor,
        orov::_tc_DepthTypeSupport,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataWriter>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataWriter>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataWriter>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthDataWriter_ptr _tao_elem)
  {
    DepthDataWriter_ptr _tao_objptr =
      DepthDataWriter::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthDataWriter_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthDataWriter>::insert (
        _tao_any,
        DepthDataWriter::_tao_any_destructor,
        _tc_DepthDataWriter,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthDataWriter_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthDataWriter>::extract (
          _tao_any,
          DepthDataWriter::_tao_any_destructor,
          _tc_DepthDataWriter,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthDataWriter_ptr _tao_elem)
{
  orov::DepthDataWriter_ptr _tao_objptr =
    orov::DepthDataWriter::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthDataWriter_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthDataWriter>::insert (
      _tao_any,
      orov::DepthDataWriter::_tao_any_destructor,
      orov::_tc_DepthDataWriter,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthDataWriter_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthDataWriter>::extract (
        _tao_any,
        orov::DepthDataWriter::_tao_any_destructor,
        orov::_tc_DepthDataWriter,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataReader>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataReader>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthDataReader>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthDataReader_ptr _tao_elem)
  {
    DepthDataReader_ptr _tao_objptr =
      DepthDataReader::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthDataReader_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthDataReader>::insert (
        _tao_any,
        DepthDataReader::_tao_any_destructor,
        _tc_DepthDataReader,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthDataReader_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthDataReader>::extract (
          _tao_any,
          DepthDataReader::_tao_any_destructor,
          _tc_DepthDataReader,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthDataReader_ptr _tao_elem)
{
  orov::DepthDataReader_ptr _tao_objptr =
    orov::DepthDataReader::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthDataReader_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthDataReader>::insert (
      _tao_any,
      orov::DepthDataReader::_tao_any_destructor,
      orov::_tc_DepthDataReader,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthDataReader_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthDataReader>::extract (
        _tao_any,
        orov::DepthDataReader::_tao_any_destructor,
        orov::_tc_DepthDataReader,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigTypeSupport>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigTypeSupport>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigTypeSupport>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigTypeSupport_ptr _tao_elem)
  {
    DepthConfigTypeSupport_ptr _tao_objptr =
      DepthConfigTypeSupport::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigTypeSupport_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthConfigTypeSupport>::insert (
        _tao_any,
        DepthConfigTypeSupport::_tao_any_destructor,
        _tc_DepthConfigTypeSupport,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthConfigTypeSupport_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthConfigTypeSupport>::extract (
          _tao_any,
          DepthConfigTypeSupport::_tao_any_destructor,
          _tc_DepthConfigTypeSupport,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigTypeSupport_ptr _tao_elem)
{
  orov::DepthConfigTypeSupport_ptr _tao_objptr =
    orov::DepthConfigTypeSupport::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigTypeSupport_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthConfigTypeSupport>::insert (
      _tao_any,
      orov::DepthConfigTypeSupport::_tao_any_destructor,
      orov::_tc_DepthConfigTypeSupport,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthConfigTypeSupport_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthConfigTypeSupport>::extract (
        _tao_any,
        orov::DepthConfigTypeSupport::_tao_any_destructor,
        orov::_tc_DepthConfigTypeSupport,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataWriter>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataWriter>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataWriter>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigDataWriter_ptr _tao_elem)
  {
    DepthConfigDataWriter_ptr _tao_objptr =
      DepthConfigDataWriter::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigDataWriter_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthConfigDataWriter>::insert (
        _tao_any,
        DepthConfigDataWriter::_tao_any_destructor,
        _tc_DepthConfigDataWriter,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthConfigDataWriter_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthConfigDataWriter>::extract (
          _tao_any,
          DepthConfigDataWriter::_tao_any_destructor,
          _tc_DepthConfigDataWriter,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigDataWriter_ptr _tao_elem)
{
  orov::DepthConfigDataWriter_ptr _tao_objptr =
    orov::DepthConfigDataWriter::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigDataWriter_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthConfigDataWriter>::insert (
      _tao_any,
      orov::DepthConfigDataWriter::_tao_any_destructor,
      orov::_tc_DepthConfigDataWriter,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthConfigDataWriter_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthConfigDataWriter>::extract (
        _tao_any,
        orov::DepthConfigDataWriter::_tao_any_destructor,
        orov::_tc_DepthConfigDataWriter,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataReader>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataReader>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<orov::DepthConfigDataReader>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigDataReader_ptr _tao_elem)
  {
    DepthConfigDataReader_ptr _tao_objptr =
      DepthConfigDataReader::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DepthConfigDataReader_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DepthConfigDataReader>::insert (
        _tao_any,
        DepthConfigDataReader::_tao_any_destructor,
        _tc_DepthConfigDataReader,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DepthConfigDataReader_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DepthConfigDataReader>::extract (
          _tao_any,
          DepthConfigDataReader::_tao_any_destructor,
          _tc_DepthConfigDataReader,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigDataReader_ptr _tao_elem)
{
  orov::DepthConfigDataReader_ptr _tao_objptr =
    orov::DepthConfigDataReader::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    orov::DepthConfigDataReader_ptr *_tao_elem)
{
  TAO::Any_Impl_T<orov::DepthConfigDataReader>::insert (
      _tao_any,
      orov::DepthConfigDataReader::_tao_any_destructor,
      orov::_tc_DepthConfigDataReader,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    orov::DepthConfigDataReader_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<orov::DepthConfigDataReader>::extract (
        _tao_any,
        orov::DepthConfigDataReader::_tao_any_destructor,
        orov::_tc_DepthConfigDataReader,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

