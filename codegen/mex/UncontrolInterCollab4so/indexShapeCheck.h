//
// indexShapeCheck.h
//
// Code generation for function 'indexShapeCheck'
//

#pragma once

// Include files
#include "rtwtypes.h"
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
void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                     const int32_T indexSize[2]);

void indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                     int32_T indexSize);

} // namespace internal
} // namespace coder

// End of code generation (indexShapeCheck.h)
