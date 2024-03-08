//
// sortIdx.h
//
// Code generation for function 'sortIdx'
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
namespace internal {
void merge(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
           int32_T offset, int32_T np, int32_T nq, int32_T iwork_data[],
           real_T xwork_data[]);

void sortIdx(const emlrtStack *sp, ::coder::array<real_T, 1U> &x,
             ::coder::array<int32_T, 1U> &idx);

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.h)
