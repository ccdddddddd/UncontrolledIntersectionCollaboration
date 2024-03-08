//
// ismember.h
//
// Code generation for function 'ismember'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
void b_isMember(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                const ::coder::array<real_T, 2U> &s,
                ::coder::array<boolean_T, 1U> &tf);

boolean_T isMember(const emlrtStack *sp, real_T a,
                   const ::coder::array<real_T, 2U> &s);

boolean_T isMember(real_T a, const real_T s_data[], const int32_T s_size[2]);

} // namespace coder

// End of code generation (ismember.h)
