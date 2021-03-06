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
// be/be_codegen.cpp:152

#ifndef _TAO_IDL____SOURCE_CPP_GENERATED__FLUIDPRESSURE_C_9RNOA2_H_
#define _TAO_IDL____SOURCE_CPP_GENERATED__FLUIDPRESSURE_C_9RNOA2_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "Header_C.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace sensor_msgs
{

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:38

  namespace msg
  {

    // TAO_IDL - Generated from
    // be/be_visitor_module/module_ch.cpp:38

    namespace dds_
    {

      // TAO_IDL - Generated from
      // be/be_type.cpp:261

      struct FluidPressure_;

      typedef
        ::TAO_Var_Var_T<
            FluidPressure_
          >
        FluidPressure__var;

      typedef
        ::TAO_Out_T<
            FluidPressure_
          >
        FluidPressure__out;

      // TAO_IDL - Generated from
      // be/be_visitor_structure/structure_ch.cpp:51

      struct  FluidPressure_
      {

        // TAO_IDL - Generated from
        // be/be_type.cpp:307

        
        typedef FluidPressure__var _var_type;
        typedef FluidPressure__out _out_type;

        static void _tao_any_destructor (void *);
        
        std_msgs::msg::dds_::Header_ header_;
        ::CORBA::Double fluid_pressure_;
        ::CORBA::Double variance_;
      };

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:37

      extern  ::CORBA::TypeCode_ptr const _tc_FluidPressure_;
    
    // TAO_IDL - Generated from
    // be/be_visitor_module/module_ch.cpp:67
    
    } // module sensor_msgs::msg::dds_
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:67
  
  } // module sensor_msgs::msg

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module sensor_msgs

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::sensor_msgs::msg::dds_::FluidPressure_>
    : public
        Var_Size_Arg_Traits_T<
            ::sensor_msgs::msg::dds_::FluidPressure_,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:45



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace sensor_msgs
{
  
  namespace msg
  {
    
    namespace dds_
    {
       void operator<<= (::CORBA::Any &, const ::sensor_msgs::msg::dds_::FluidPressure_ &); // copying version
       void operator<<= (::CORBA::Any &, ::sensor_msgs::msg::dds_::FluidPressure_*); // noncopying version
       ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::sensor_msgs::msg::dds_::FluidPressure_ *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::sensor_msgs::msg::dds_::FluidPressure_ *&);
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const sensor_msgs::msg::dds_::FluidPressure_ &); // copying version
 void operator<<= (::CORBA::Any &, sensor_msgs::msg::dds_::FluidPressure_*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, sensor_msgs::msg::dds_::FluidPressure_ *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const sensor_msgs::msg::dds_::FluidPressure_ *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const sensor_msgs::msg::dds_::FluidPressure_ &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, sensor_msgs::msg::dds_::FluidPressure_ &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "FluidPressure_C.inl"
#endif /* defined INLINE */

#endif /* ifndef */

