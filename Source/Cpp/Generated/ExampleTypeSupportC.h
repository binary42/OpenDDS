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
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_EXAMPLETYPESUPPORTC_VW1OJI_H_
#define _TAO_IDL_EXAMPLETYPESUPPORTC_VW1OJI_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "ExampleC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace ExampleApp
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< ExampleApp::Event, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> EventSeq;
  

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_EventSeq;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_EXAMPLEAPP_EVENTTYPESUPPORT__VAR_OUT_CH_)
#define _EXAMPLEAPP_EVENTTYPESUPPORT__VAR_OUT_CH_

  class EventTypeSupport;
  typedef EventTypeSupport *EventTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        EventTypeSupport
      >
    EventTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        EventTypeSupport
      >
    EventTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  EventTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef EventTypeSupport_ptr _ptr_type;
    typedef EventTypeSupport_var _var_type;
    typedef EventTypeSupport_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventTypeSupport_ptr _duplicate (EventTypeSupport_ptr obj);

    static void _tao_release (EventTypeSupport_ptr obj);

    static EventTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static EventTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    EventTypeSupport (void);

    

    virtual ~EventTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventTypeSupport (const EventTypeSupport &);

    void operator= (const EventTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_EventTypeSupport;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_EXAMPLEAPP_EVENTDATAWRITER__VAR_OUT_CH_)
#define _EXAMPLEAPP_EVENTDATAWRITER__VAR_OUT_CH_

  class EventDataWriter;
  typedef EventDataWriter *EventDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        EventDataWriter
      >
    EventDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        EventDataWriter
      >
    EventDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  EventDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef EventDataWriter_ptr _ptr_type;
    typedef EventDataWriter_var _var_type;
    typedef EventDataWriter_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventDataWriter_ptr _duplicate (EventDataWriter_ptr obj);

    static void _tao_release (EventDataWriter_ptr obj);

    static EventDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static EventDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::ExampleApp::Event & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::ExampleApp::Event & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::ExampleApp::Event & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::ExampleApp::Event & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::ExampleApp::Event & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::ExampleApp::Event & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::ExampleApp::Event & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::ExampleApp::Event & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::ExampleApp::Event & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::ExampleApp::Event & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    EventDataWriter (void);

    

    virtual ~EventDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventDataWriter (const EventDataWriter &);

    void operator= (const EventDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_EventDataWriter;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_EXAMPLEAPP_EVENTDATAREADER__VAR_OUT_CH_)
#define _EXAMPLEAPP_EVENTDATAREADER__VAR_OUT_CH_

  class EventDataReader;
  typedef EventDataReader *EventDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        EventDataReader
      >
    EventDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        EventDataReader
      >
    EventDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  EventDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef EventDataReader_ptr _ptr_type;
    typedef EventDataReader_var _var_type;
    typedef EventDataReader_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventDataReader_ptr _duplicate (EventDataReader_ptr obj);

    static void _tao_release (EventDataReader_ptr obj);

    static EventDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static EventDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::ExampleApp::EventSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::ExampleApp::EventSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::ExampleApp::Event & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::ExampleApp::Event & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::ExampleApp::EventSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::ExampleApp::EventSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::ExampleApp::EventSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::ExampleApp::Event & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::ExampleApp::Event & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    EventDataReader (void);

    

    virtual ~EventDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventDataReader (const EventDataReader &);

    void operator= (const EventDataReader &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_EventDataReader;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module ExampleApp

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_EXAMPLEAPP_EVENTTYPESUPPORT__TRAITS_)
#define _EXAMPLEAPP_EVENTTYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::ExampleApp::EventTypeSupport>
  {
    static ::ExampleApp::EventTypeSupport_ptr duplicate (
        ::ExampleApp::EventTypeSupport_ptr p);
    static void release (
        ::ExampleApp::EventTypeSupport_ptr p);
    static ::ExampleApp::EventTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ExampleApp::EventTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_EXAMPLEAPP_EVENTDATAWRITER__TRAITS_)
#define _EXAMPLEAPP_EVENTDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::ExampleApp::EventDataWriter>
  {
    static ::ExampleApp::EventDataWriter_ptr duplicate (
        ::ExampleApp::EventDataWriter_ptr p);
    static void release (
        ::ExampleApp::EventDataWriter_ptr p);
    static ::ExampleApp::EventDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ExampleApp::EventDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_EXAMPLEAPP_EVENTDATAREADER__TRAITS_)
#define _EXAMPLEAPP_EVENTDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::ExampleApp::EventDataReader>
  {
    static ::ExampleApp::EventDataReader_ptr duplicate (
        ::ExampleApp::EventDataReader_ptr p);
    static void release (
        ::ExampleApp::EventDataReader_ptr p);
    static ::ExampleApp::EventDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ExampleApp::EventDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleApp
{
   void operator<<= ( ::CORBA::Any &, EventTypeSupport_ptr); // copying
   void operator<<= ( ::CORBA::Any &, EventTypeSupport_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventTypeSupport_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ExampleApp::EventTypeSupport_ptr); // copying
 void operator<<= (::CORBA::Any &, ExampleApp::EventTypeSupport_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ExampleApp::EventTypeSupport_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleApp
{
   void operator<<= ( ::CORBA::Any &, EventDataWriter_ptr); // copying
   void operator<<= ( ::CORBA::Any &, EventDataWriter_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventDataWriter_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ExampleApp::EventDataWriter_ptr); // copying
 void operator<<= (::CORBA::Any &, ExampleApp::EventDataWriter_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ExampleApp::EventDataWriter_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleApp
{
   void operator<<= ( ::CORBA::Any &, EventDataReader_ptr); // copying
   void operator<<= ( ::CORBA::Any &, EventDataReader_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventDataReader_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ExampleApp::EventDataReader_ptr); // copying
 void operator<<= (::CORBA::Any &, ExampleApp::EventDataReader_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ExampleApp::EventDataReader_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "ExampleTypeSupportC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

