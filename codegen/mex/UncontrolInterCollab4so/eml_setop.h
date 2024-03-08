//
// eml_setop.h
//
// Code generation for function 'eml_setop'
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
void do_vectors(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                ::coder::array<real_T, 1U> &c, ::coder::array<int32_T, 1U> &ia,
                int32_T *ib_size);

void do_vectors(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                real_T b, ::coder::array<real_T, 1U> &c,
                ::coder::array<int32_T, 1U> &ia, int32_T *ib_size);

} // namespace coder

// End of code generation (eml_setop.h)
