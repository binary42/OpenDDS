// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p7
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
// be/be_codegen.cpp:461

#ifndef _TAO_IDL____SOURCE_CPP_GENERATED__EXAMPLES_OBTVI6_H_
#define _TAO_IDL____SOURCE_CPP_GENERATED__EXAMPLES_OBTVI6_H_


#include "ExampleC.h"
#include "orbsvcs/TimeBaseS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::ExampleApp::Data>
    : public
        Var_Size_SArg_Traits_T<
            ::ExampleApp::Data,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::ExampleApp::Event>
    : public
        Var_Size_SArg_Traits_T<
            ::ExampleApp::Event,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:38

namespace POA_ExampleApp
{
  

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:69

} // module ExampleApp

#endif /* ifndef */

