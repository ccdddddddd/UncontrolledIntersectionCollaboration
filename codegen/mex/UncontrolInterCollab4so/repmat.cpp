//
// repmat.cpp
//
// Code generation for function 'repmat'
//

// Include files
#include "repmat.h"
#include "UncontrolInterCollab4so_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo
    de_emlrtRSI{
        28,       // lineNo
        "repmat", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repm"
        "at.m" // pathName
    };

static emlrtRTEInfo l_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" // pName
};

// Function Definitions
namespace coder {
void repmat(const emlrtStack *sp, real_T varargin_2, real_T b_data[],
            int32_T b_size[2])
{
  emlrtStack st;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &de_emlrtRSI;
  if (varargin_2 != varargin_2) {
    emlrtErrorWithMessageIdR2018a(
        &st, &l_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  b_size[0] = 1;
  loop_ub_tmp = static_cast<int32_T>(varargin_2);
  b_size[1] = static_cast<int32_T>(varargin_2);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_data[i] = -99.0;
  }
}

} // namespace coder

// End of code generation (repmat.cpp)
