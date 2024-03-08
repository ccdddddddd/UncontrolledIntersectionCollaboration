//
// find.h
//
// Code generation for function 'find'
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
void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
              int32_T i_data[], int32_T i_size[2]);

}

// End of code generation (find.h)
