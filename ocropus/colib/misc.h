// -*- C++ -*-

// Copyright 2006 Deutsches Forschungszentrum fuer Kuenstliche Intelligenz 
// or its licensors, as applicable.
// Copyright 1995-2005 Thomas M. Breuel.
// 
// You may not use this file except under the terms of the accompanying license.
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may
// obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// Project: iupr common header files
// File: misc.h
// Purpose: miscellaneous utility functions
// Responsible: tmb
// Reviewer: 
// Primary Repository: 
// Web Sites: www.iupr.org, www.dfki.de

/// \file misc.h
/// \brief A few utility functions.


#ifndef h_misc__
#define h_misc__

#include <string.h>
#include <stdlib.h>

namespace colib {

#if 0
    /// Swap two values.

    template <class T,class S>
    inline void swap(T &a,S &b) {
        T temp = b;
        b = a;
        a = temp;
    }
#endif    

    /// The min of two integer values.
    
    template <class T,class U>
    inline T min(T a,U b) {
        return a<b?a:b;
    }
    
    /// The max of two integer values.
    
    template <class T,class U>
    inline T max(T a,U b) {
        return a>b?a:b;
    }

    /// Square of a value.

    template <class T>
    inline T sqr(T x) {
        return x*x;
    }

    /// Absolute value of a value.

    template <class T>
    inline T abs(T x) {
        return x<0?-x:x;
    }

    /// Heaviside function of a value.

    template <class T>
    inline T heaviside(T x) {
        return x<0?0:x;
    }

    /// Boolean values, initialized to false; useful with hashtable implementations.

    template <bool INITIAL>
    struct Boolean {
        bool value;
        Boolean() {
            value = INITIAL;
        }
        operator bool() {
            return value;
        }
        operator bool&() {
            return value;
        }
        void operator=(bool other) {
            value = other;
        }
    };

    /// Integer values initialized to the given value; useful with hashtable implementations.

    template <int INITIAL>
    struct integer {
        int value;
        integer() {
            value = INITIAL;
        }
        operator int&() {
            return value;
        }
        void operator=(int other) {
            value = other;
        }
    };

    /// Floating point values initialized to the given value; useful with hashtable implementations.

    template <int INITIAL>
    struct floating {
        float value;
        floating() {
            value = INITIAL;
        }
        operator floating&() {
            return value;
        }
        void operator=(int other) {
            value = other;
        }
    };

}

#endif
