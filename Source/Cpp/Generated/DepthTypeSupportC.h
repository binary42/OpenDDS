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

#ifndef _TAO_IDL____SOURCE_CPP_GENERATED__DEPTHTYPESUPPORTC_BSNYL8_H_
#define _TAO_IDL____SOURCE_CPP_GENERATED__DEPTHTYPESUPPORTC_BSNYL8_H_


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

#include "DepthC.h"
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

namespace orov
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< orov::Depth, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> DepthSeq;
  

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthSeq;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHTYPESUPPORT__VAR_OUT_CH_)
#define _OROV_DEPTHTYPESUPPORT__VAR_OUT_CH_

  class DepthTypeSupport;
  typedef DepthTypeSupport *DepthTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthTypeSupport
      >
    DepthTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthTypeSupport
      >
    DepthTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthTypeSupport_ptr _ptr_type;
    typedef DepthTypeSupport_var _var_type;
    typedef DepthTypeSupport_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthTypeSupport_ptr _duplicate (DepthTypeSupport_ptr obj);

    static void _tao_release (DepthTypeSupport_ptr obj);

    static DepthTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthTypeSupport (void);

    

    virtual ~DepthTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthTypeSupport (const DepthTypeSupport &);

    void operator= (const DepthTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthTypeSupport;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHDATAWRITER__VAR_OUT_CH_)
#define _OROV_DEPTHDATAWRITER__VAR_OUT_CH_

  class DepthDataWriter;
  typedef DepthDataWriter *DepthDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthDataWriter
      >
    DepthDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthDataWriter
      >
    DepthDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthDataWriter_ptr _ptr_type;
    typedef DepthDataWriter_var _var_type;
    typedef DepthDataWriter_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthDataWriter_ptr _duplicate (DepthDataWriter_ptr obj);

    static void _tao_release (DepthDataWriter_ptr obj);

    static DepthDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::orov::Depth & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::orov::Depth & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::orov::Depth & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::orov::Depth & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::orov::Depth & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::orov::Depth & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::orov::Depth & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::orov::Depth & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::orov::Depth & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::orov::Depth & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthDataWriter (void);

    

    virtual ~DepthDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthDataWriter (const DepthDataWriter &);

    void operator= (const DepthDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthDataWriter;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHDATAREADER__VAR_OUT_CH_)
#define _OROV_DEPTHDATAREADER__VAR_OUT_CH_

  class DepthDataReader;
  typedef DepthDataReader *DepthDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthDataReader
      >
    DepthDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthDataReader
      >
    DepthDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthDataReader_ptr _ptr_type;
    typedef DepthDataReader_var _var_type;
    typedef DepthDataReader_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthDataReader_ptr _duplicate (DepthDataReader_ptr obj);

    static void _tao_release (DepthDataReader_ptr obj);

    static DepthDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::orov::DepthSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::orov::DepthSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::orov::Depth & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::orov::Depth & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::orov::DepthSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::orov::DepthSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::orov::DepthSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::orov::Depth & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::orov::Depth & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthDataReader (void);

    

    virtual ~DepthDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthDataReader (const DepthDataReader &);

    void operator= (const DepthDataReader &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthDataReader;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module orov

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace orov
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< orov::DepthConfig, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> DepthConfigSeq;
  

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthConfigSeq;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHCONFIGTYPESUPPORT__VAR_OUT_CH_)
#define _OROV_DEPTHCONFIGTYPESUPPORT__VAR_OUT_CH_

  class DepthConfigTypeSupport;
  typedef DepthConfigTypeSupport *DepthConfigTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthConfigTypeSupport
      >
    DepthConfigTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthConfigTypeSupport
      >
    DepthConfigTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthConfigTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthConfigTypeSupport_ptr _ptr_type;
    typedef DepthConfigTypeSupport_var _var_type;
    typedef DepthConfigTypeSupport_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthConfigTypeSupport_ptr _duplicate (DepthConfigTypeSupport_ptr obj);

    static void _tao_release (DepthConfigTypeSupport_ptr obj);

    static DepthConfigTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthConfigTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthConfigTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthConfigTypeSupport (void);

    

    virtual ~DepthConfigTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthConfigTypeSupport (const DepthConfigTypeSupport &);

    void operator= (const DepthConfigTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthConfigTypeSupport;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHCONFIGDATAWRITER__VAR_OUT_CH_)
#define _OROV_DEPTHCONFIGDATAWRITER__VAR_OUT_CH_

  class DepthConfigDataWriter;
  typedef DepthConfigDataWriter *DepthConfigDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthConfigDataWriter
      >
    DepthConfigDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthConfigDataWriter
      >
    DepthConfigDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthConfigDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthConfigDataWriter_ptr _ptr_type;
    typedef DepthConfigDataWriter_var _var_type;
    typedef DepthConfigDataWriter_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthConfigDataWriter_ptr _duplicate (DepthConfigDataWriter_ptr obj);

    static void _tao_release (DepthConfigDataWriter_ptr obj);

    static DepthConfigDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthConfigDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthConfigDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::orov::DepthConfig & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::orov::DepthConfig & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::orov::DepthConfig & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::orov::DepthConfig & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::orov::DepthConfig & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::orov::DepthConfig & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::orov::DepthConfig & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::orov::DepthConfig & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::orov::DepthConfig & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::orov::DepthConfig & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthConfigDataWriter (void);

    

    virtual ~DepthConfigDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthConfigDataWriter (const DepthConfigDataWriter &);

    void operator= (const DepthConfigDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthConfigDataWriter;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_OROV_DEPTHCONFIGDATAREADER__VAR_OUT_CH_)
#define _OROV_DEPTHCONFIGDATAREADER__VAR_OUT_CH_

  class DepthConfigDataReader;
  typedef DepthConfigDataReader *DepthConfigDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        DepthConfigDataReader
      >
    DepthConfigDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        DepthConfigDataReader
      >
    DepthConfigDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  DepthConfigDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef DepthConfigDataReader_ptr _ptr_type;
    typedef DepthConfigDataReader_var _var_type;
    typedef DepthConfigDataReader_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DepthConfigDataReader_ptr _duplicate (DepthConfigDataReader_ptr obj);

    static void _tao_release (DepthConfigDataReader_ptr obj);

    static DepthConfigDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static DepthConfigDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DepthConfigDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::orov::DepthConfigSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::orov::DepthConfigSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::orov::DepthConfig & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::orov::DepthConfig & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::orov::DepthConfigSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::orov::DepthConfigSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::orov::DepthConfigSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::orov::DepthConfig & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::orov::DepthConfig & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DepthConfigDataReader (void);

    

    virtual ~DepthConfigDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DepthConfigDataReader (const DepthConfigDataReader &);

    void operator= (const DepthConfigDataReader &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:37

  extern  ::CORBA::TypeCode_ptr const _tc_DepthConfigDataReader;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module orov

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

#if !defined (_OROV_DEPTHTYPESUPPORT__TRAITS_)
#define _OROV_DEPTHTYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthTypeSupport>
  {
    static ::orov::DepthTypeSupport_ptr duplicate (
        ::orov::DepthTypeSupport_ptr p);
    static void release (
        ::orov::DepthTypeSupport_ptr p);
    static ::orov::DepthTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OROV_DEPTHDATAWRITER__TRAITS_)
#define _OROV_DEPTHDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthDataWriter>
  {
    static ::orov::DepthDataWriter_ptr duplicate (
        ::orov::DepthDataWriter_ptr p);
    static void release (
        ::orov::DepthDataWriter_ptr p);
    static ::orov::DepthDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OROV_DEPTHDATAREADER__TRAITS_)
#define _OROV_DEPTHDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthDataReader>
  {
    static ::orov::DepthDataReader_ptr duplicate (
        ::orov::DepthDataReader_ptr p);
    static void release (
        ::orov::DepthDataReader_ptr p);
    static ::orov::DepthDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OROV_DEPTHCONFIGTYPESUPPORT__TRAITS_)
#define _OROV_DEPTHCONFIGTYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthConfigTypeSupport>
  {
    static ::orov::DepthConfigTypeSupport_ptr duplicate (
        ::orov::DepthConfigTypeSupport_ptr p);
    static void release (
        ::orov::DepthConfigTypeSupport_ptr p);
    static ::orov::DepthConfigTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthConfigTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OROV_DEPTHCONFIGDATAWRITER__TRAITS_)
#define _OROV_DEPTHCONFIGDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthConfigDataWriter>
  {
    static ::orov::DepthConfigDataWriter_ptr duplicate (
        ::orov::DepthConfigDataWriter_ptr p);
    static void release (
        ::orov::DepthConfigDataWriter_ptr p);
    static ::orov::DepthConfigDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthConfigDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OROV_DEPTHCONFIGDATAREADER__TRAITS_)
#define _OROV_DEPTHCONFIGDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::orov::DepthConfigDataReader>
  {
    static ::orov::DepthConfigDataReader_ptr duplicate (
        ::orov::DepthConfigDataReader_ptr p);
    static void release (
        ::orov::DepthConfigDataReader_ptr p);
    static ::orov::DepthConfigDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::orov::DepthConfigDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthTypeSupport_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthTypeSupport_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthTypeSupport_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthTypeSupport_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthTypeSupport_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthTypeSupport_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthDataWriter_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthDataWriter_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthDataWriter_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthDataWriter_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthDataWriter_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthDataWriter_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthDataReader_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthDataReader_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthDataReader_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthDataReader_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthDataReader_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthDataReader_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthConfigTypeSupport_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthConfigTypeSupport_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthConfigTypeSupport_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthConfigTypeSupport_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthConfigTypeSupport_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthConfigTypeSupport_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthConfigDataWriter_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthConfigDataWriter_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthConfigDataWriter_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthConfigDataWriter_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthConfigDataWriter_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthConfigDataWriter_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace orov
{
   void operator<<= ( ::CORBA::Any &, DepthConfigDataReader_ptr); // copying
   void operator<<= ( ::CORBA::Any &, DepthConfigDataReader_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DepthConfigDataReader_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, orov::DepthConfigDataReader_ptr); // copying
 void operator<<= (::CORBA::Any &, orov::DepthConfigDataReader_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, orov::DepthConfigDataReader_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "DepthTypeSupportC.inl"
#endif /* defined INLINE */

#endif /* ifndef */
