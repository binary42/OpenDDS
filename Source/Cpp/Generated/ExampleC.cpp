// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p10
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


#include "ExampleC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "ExampleC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_ExampleApp_Data[] =
      {
        { "name", &CORBA::_tc_string },
        { "test", &CORBA::_tc_string },
        { "value", &CORBA::_tc_double },
        { "timestamp", &TimeBase::_tc_TimeT }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_ExampleApp_Data (
  ::CORBA::tk_struct,
  "IDL:ExampleApp/Data:1.0",
  "Data",
  _tao_fields_ExampleApp_Data,
  4);


namespace ExampleApp
{
  ::CORBA::TypeCode_ptr const _tc_Data =
    &_tao_tc_ExampleApp_Data;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
ExampleApp::Data::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Data *_tao_tmp_pointer =
    static_cast<Data *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_ExampleApp_Event[] =
      {
        { "kicker", &CORBA::_tc_string },
        { "timestamp", &TimeBase::_tc_TimeT }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_ExampleApp_Event (
  ::CORBA::tk_struct,
  "IDL:ExampleApp/Event:1.0",
  "Event",
  _tao_fields_ExampleApp_Event,
  2);


namespace ExampleApp
{
  ::CORBA::TypeCode_ptr const _tc_Event =
    &_tao_tc_ExampleApp_Event;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
ExampleApp::Event::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Event *_tao_tmp_pointer =
    static_cast<Event *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleApp
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::ExampleApp::Data &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::ExampleApp::Data>::insert_copy (
        _tao_any,
        ::ExampleApp::Data::_tao_any_destructor,
        ::ExampleApp::_tc_Data,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    ExampleApp::Data *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::ExampleApp::Data>::insert (
      _tao_any,
      ::ExampleApp::Data::_tao_any_destructor,
      ::ExampleApp::_tc_Data,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::ExampleApp::Data *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::ExampleApp::Data *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::ExampleApp::Data *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::ExampleApp::Data>::extract (
        _tao_any,
        ::ExampleApp::Data::_tao_any_destructor,
        ::ExampleApp::_tc_Data,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ExampleApp::Data &_tao_elem)
{
  TAO::Any_Dual_Impl_T<ExampleApp::Data>::insert_copy (
    _tao_any,
    ExampleApp::Data::_tao_any_destructor,
    ExampleApp::_tc_Data,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ExampleApp::Data *_tao_elem)
{
  TAO::Any_Dual_Impl_T<ExampleApp::Data>::insert (
    _tao_any,
    ExampleApp::Data::_tao_any_destructor,
    ExampleApp::_tc_Data,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  ExampleApp::Data *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ExampleApp::Data *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ExampleApp::Data *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<ExampleApp::Data>::extract (
      _tao_any,
      ExampleApp::Data::_tao_any_destructor,
      ExampleApp::_tc_Data,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleApp
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::ExampleApp::Event &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::ExampleApp::Event>::insert_copy (
        _tao_any,
        ::ExampleApp::Event::_tao_any_destructor,
        ::ExampleApp::_tc_Event,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    ExampleApp::Event *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::ExampleApp::Event>::insert (
      _tao_any,
      ::ExampleApp::Event::_tao_any_destructor,
      ::ExampleApp::_tc_Event,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::ExampleApp::Event *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::ExampleApp::Event *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::ExampleApp::Event *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::ExampleApp::Event>::extract (
        _tao_any,
        ::ExampleApp::Event::_tao_any_destructor,
        ::ExampleApp::_tc_Event,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ExampleApp::Event &_tao_elem)
{
  TAO::Any_Dual_Impl_T<ExampleApp::Event>::insert_copy (
    _tao_any,
    ExampleApp::Event::_tao_any_destructor,
    ExampleApp::_tc_Event,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ExampleApp::Event *_tao_elem)
{
  TAO::Any_Dual_Impl_T<ExampleApp::Event>::insert (
    _tao_any,
    ExampleApp::Event::_tao_any_destructor,
    ExampleApp::_tc_Event,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  ExampleApp::Event *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ExampleApp::Event *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ExampleApp::Event *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<ExampleApp::Event>::extract (
      _tao_any,
      ExampleApp::Event::_tao_any_destructor,
      ExampleApp::_tc_Event,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ExampleApp::Data &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.name.in ()) &&
    (strm << _tao_aggregate.test.in ()) &&
    (strm << _tao_aggregate.value) &&
    (strm << _tao_aggregate.timestamp);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ExampleApp::Data &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.name.out ()) &&
    (strm >> _tao_aggregate.test.out ()) &&
    (strm >> _tao_aggregate.value) &&
    (strm >> _tao_aggregate.timestamp);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ExampleApp::Event &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.kicker.in ()) &&
    (strm << _tao_aggregate.timestamp);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ExampleApp::Event &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.kicker.out ()) &&
    (strm >> _tao_aggregate.timestamp);
}

TAO_END_VERSIONED_NAMESPACE_DECL



