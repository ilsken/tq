//===------------------------ optional.cpp --------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <tq/experimental/optional.h>
namespace std  // purposefully not using versioning namespace
{ namespace experimental {
    
#ifdef TQ_HAS_NO_DEFAULTED_FUNCTIONS
    
    bad_optional_access::~bad_optional_access() TQ_NOEXCEPT {}
    
#else
    
    bad_optional_access::~bad_optional_access() TQ_NOEXCEPT = default;
    
#endif
    
}}  // std::experimental