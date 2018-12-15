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

#ifndef _TAO_IDL____SOURCE_CPP_GENERATED__HEADER_TYPESUPPORTC_JSKDTM_H_
#define _TAO_IDL____SOURCE_CPP_GENERATED__HEADER_TYPESUPPORTC_JSKDTM_H_


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

#include "Header_C.h"
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

namespace std_msgs
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
      // be/be_visitor_sequence/sequence_ch.cpp:102

      typedef ::TAO::DCPS::ZeroCopyDataSeq< std_msgs::msg::dds_::Header_, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> Header_Seq;
      

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:37

      extern  ::CORBA::TypeCode_ptr const _tc_Header_Seq;

      // TAO_IDL - Generated from
      // be/be_interface.cpp:751

#if !defined (_STD_MSGS_MSG_DDS__HEADER_TYPESUPPORT__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__HEADER_TYPESUPPORT__VAR_OUT_CH_

      class Header_TypeSupport;
      typedef Header_TypeSupport *Header_TypeSupport_ptr;

      typedef
        TAO_Objref_Var_T<
            Header_TypeSupport
          >
        Header_TypeSupport_var;
      
      typedef
        TAO_Objref_Out_T<
            Header_TypeSupport
          >
        Header_TypeSupport_out;

#endif /* end #if !defined */

      // TAO_IDL - Generated from
      // be/be_visitor_interface/interface_ch.cpp:43

      class  Header_TypeSupport
        : public virtual ::OpenDDS::DCPS::TypeSupport
      
      {
      public:

        // TAO_IDL - Generated from
        // be/be_type.cpp:307

        typedef Header_TypeSupport_ptr _ptr_type;
        typedef Header_TypeSupport_var _var_type;
        typedef Header_TypeSupport_out _out_type;

        static void _tao_any_destructor (void *);

        // The static operations.
        static Header_TypeSupport_ptr _duplicate (Header_TypeSupport_ptr obj);

        static void _tao_release (Header_TypeSupport_ptr obj);

        static Header_TypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
        static Header_TypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static Header_TypeSupport_ptr _nil (void);

        // TAO_IDL - Generated from
        // be/be_visitor_interface/interface_ch.cpp:140

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        Header_TypeSupport (void);

        

        virtual ~Header_TypeSupport (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        Header_TypeSupport (const Header_TypeSupport &);

        void operator= (const Header_TypeSupport &);
      };

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:37

      extern  ::CORBA::TypeCode_ptr const _tc_Header_TypeSupport;

      // TAO_IDL - Generated from
      // be/be_interface.cpp:751

#if !defined (_STD_MSGS_MSG_DDS__HEADER_DATAWRITER__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__HEADER_DATAWRITER__VAR_OUT_CH_

      class Header_DataWriter;
      typedef Header_DataWriter *Header_DataWriter_ptr;

      typedef
        TAO_Objref_Var_T<
            Header_DataWriter
          >
        Header_DataWriter_var;
      
      typedef
        TAO_Objref_Out_T<
            Header_DataWriter
          >
        Header_DataWriter_out;

#endif /* end #if !defined */

      // TAO_IDL - Generated from
      // be/be_visitor_interface/interface_ch.cpp:43

      class  Header_DataWriter
        : public virtual ::DDS::DataWriter
      
      {
      public:

        // TAO_IDL - Generated from
        // be/be_type.cpp:307

        typedef Header_DataWriter_ptr _ptr_type;
        typedef Header_DataWriter_var _var_type;
        typedef Header_DataWriter_out _out_type;

        static void _tao_any_destructor (void *);

        // The static operations.
        static Header_DataWriter_ptr _duplicate (Header_DataWriter_ptr obj);

        static void _tao_release (Header_DataWriter_ptr obj);

        static Header_DataWriter_ptr _narrow (::CORBA::Object_ptr obj);
        static Header_DataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static Header_DataWriter_ptr _nil (void);

        virtual ::DDS::InstanceHandle_t register_instance (
          const ::std_msgs::msg::dds_::Header_ & instance) = 0;

        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
          const ::std_msgs::msg::dds_::Header_ & instance,
          const ::DDS::Time_t & timestamp) = 0;

        virtual ::DDS::ReturnCode_t unregister_instance (
          const ::std_msgs::msg::dds_::Header_ & instance,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
          const ::std_msgs::msg::dds_::Header_ & instance,
          ::DDS::InstanceHandle_t handle,
          const ::DDS::Time_t & timestamp) = 0;

        virtual ::DDS::ReturnCode_t write (
          const ::std_msgs::msg::dds_::Header_ & instance_data,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::ReturnCode_t write_w_timestamp (
          const ::std_msgs::msg::dds_::Header_ & instance_data,
          ::DDS::InstanceHandle_t handle,
          const ::DDS::Time_t & source_timestamp) = 0;

        virtual ::DDS::ReturnCode_t dispose (
          const ::std_msgs::msg::dds_::Header_ & instance_data,
          ::DDS::InstanceHandle_t instance_handle) = 0;

        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
          const ::std_msgs::msg::dds_::Header_ & instance_data,
          ::DDS::InstanceHandle_t instance_handle,
          const ::DDS::Time_t & source_timestamp) = 0;

        virtual ::DDS::ReturnCode_t get_key_value (
          ::std_msgs::msg::dds_::Header_ & key_holder,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::InstanceHandle_t lookup_instance (
          const ::std_msgs::msg::dds_::Header_ & instance_data) = 0;

        // TAO_IDL - Generated from
        // be/be_visitor_interface/interface_ch.cpp:140

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        Header_DataWriter (void);

        

        virtual ~Header_DataWriter (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        Header_DataWriter (const Header_DataWriter &);

        void operator= (const Header_DataWriter &);
      };

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:37

      extern  ::CORBA::TypeCode_ptr const _tc_Header_DataWriter;

      // TAO_IDL - Generated from
      // be/be_interface.cpp:751

#if !defined (_STD_MSGS_MSG_DDS__HEADER_DATAREADER__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__HEADER_DATAREADER__VAR_OUT_CH_

      class Header_DataReader;
      typedef Header_DataReader *Header_DataReader_ptr;

      typedef
        TAO_Objref_Var_T<
            Header_DataReader
          >
        Header_DataReader_var;
      
      typedef
        TAO_Objref_Out_T<
            Header_DataReader
          >
        Header_DataReader_out;

#endif /* end #if !defined */

      // TAO_IDL - Generated from
      // be/be_visitor_interface/interface_ch.cpp:43

      class  Header_DataReader
        : public virtual ::OpenDDS::DCPS::DataReaderEx
      
      {
      public:

        // TAO_IDL - Generated from
        // be/be_type.cpp:307

        typedef Header_DataReader_ptr _ptr_type;
        typedef Header_DataReader_var _var_type;
        typedef Header_DataReader_out _out_type;

        static void _tao_any_destructor (void *);

        // The static operations.
        static Header_DataReader_ptr _duplicate (Header_DataReader_ptr obj);

        static void _tao_release (Header_DataReader_ptr obj);

        static Header_DataReader_ptr _narrow (::CORBA::Object_ptr obj);
        static Header_DataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static Header_DataReader_ptr _nil (void);

        virtual ::DDS::ReturnCode_t read (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t read_next_sample (
          ::std_msgs::msg::dds_::Header_ & received_data,
          ::DDS::SampleInfo & sample_info) = 0;

        virtual ::DDS::ReturnCode_t take_next_sample (
          ::std_msgs::msg::dds_::Header_ & received_data,
          ::DDS::SampleInfo & sample_info) = 0;

        virtual ::DDS::ReturnCode_t read_instance (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take_instance (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_instance_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_instance_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t read_next_instance (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take_next_instance (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t previous_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
          ::std_msgs::msg::dds_::Header_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t previous_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t return_loan (
          ::std_msgs::msg::dds_::Header_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq) = 0;

        virtual ::DDS::ReturnCode_t get_key_value (
          ::std_msgs::msg::dds_::Header_ & key_holder,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::InstanceHandle_t lookup_instance (
          const ::std_msgs::msg::dds_::Header_ & instance_data) = 0;

        // TAO_IDL - Generated from
        // be/be_visitor_interface/interface_ch.cpp:140

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        Header_DataReader (void);

        

        virtual ~Header_DataReader (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        Header_DataReader (const Header_DataReader &);

        void operator= (const Header_DataReader &);
      };

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:37

      extern  ::CORBA::TypeCode_ptr const _tc_Header_DataReader;
    
    // TAO_IDL - Generated from
    // be/be_visitor_module/module_ch.cpp:67
    
    } // module std_msgs::msg::dds_
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:67
  
  } // module std_msgs::msg

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module std_msgs

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

#if !defined (_STD_MSGS_MSG_DDS__HEADER_TYPESUPPORT__TRAITS_)
#define _STD_MSGS_MSG_DDS__HEADER_TYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::Header_TypeSupport>
  {
    static ::std_msgs::msg::dds_::Header_TypeSupport_ptr duplicate (
        ::std_msgs::msg::dds_::Header_TypeSupport_ptr p);
    static void release (
        ::std_msgs::msg::dds_::Header_TypeSupport_ptr p);
    static ::std_msgs::msg::dds_::Header_TypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::Header_TypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_STD_MSGS_MSG_DDS__HEADER_DATAWRITER__TRAITS_)
#define _STD_MSGS_MSG_DDS__HEADER_DATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::Header_DataWriter>
  {
    static ::std_msgs::msg::dds_::Header_DataWriter_ptr duplicate (
        ::std_msgs::msg::dds_::Header_DataWriter_ptr p);
    static void release (
        ::std_msgs::msg::dds_::Header_DataWriter_ptr p);
    static ::std_msgs::msg::dds_::Header_DataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::Header_DataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_STD_MSGS_MSG_DDS__HEADER_DATAREADER__TRAITS_)
#define _STD_MSGS_MSG_DDS__HEADER_DATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::Header_DataReader>
  {
    static ::std_msgs::msg::dds_::Header_DataReader_ptr duplicate (
        ::std_msgs::msg::dds_::Header_DataReader_ptr p);
    static void release (
        ::std_msgs::msg::dds_::Header_DataReader_ptr p);
    static ::std_msgs::msg::dds_::Header_DataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::Header_DataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace std_msgs
{
  
  namespace msg
  {
    
    namespace dds_
    {
       void operator<<= ( ::CORBA::Any &, Header_TypeSupport_ptr); // copying
       void operator<<= ( ::CORBA::Any &, Header_TypeSupport_ptr *); // non-copying
       ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Header_TypeSupport_ptr &);
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_TypeSupport_ptr); // copying
 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_TypeSupport_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, std_msgs::msg::dds_::Header_TypeSupport_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace std_msgs
{
  
  namespace msg
  {
    
    namespace dds_
    {
       void operator<<= ( ::CORBA::Any &, Header_DataWriter_ptr); // copying
       void operator<<= ( ::CORBA::Any &, Header_DataWriter_ptr *); // non-copying
       ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Header_DataWriter_ptr &);
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_DataWriter_ptr); // copying
 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_DataWriter_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, std_msgs::msg::dds_::Header_DataWriter_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace std_msgs
{
  
  namespace msg
  {
    
    namespace dds_
    {
       void operator<<= ( ::CORBA::Any &, Header_DataReader_ptr); // copying
       void operator<<= ( ::CORBA::Any &, Header_DataReader_ptr *); // non-copying
       ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Header_DataReader_ptr &);
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_DataReader_ptr); // copying
 void operator<<= (::CORBA::Any &, std_msgs::msg::dds_::Header_DataReader_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, std_msgs::msg::dds_::Header_DataReader_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "Header_TypeSupportC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

