//
// abs.cpp
//
// Code generation for function 'abs'
//

// Include files
#include "abs.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    vc_emlrtRSI{
        18,    // lineNo
        "abs", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\abs."
        "m" // pathName
    };

static emlrtRSInfo wc_emlrtRSI{
    74,                    // lineNo
    "applyScalarFunction", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pathName
};

static emlrtRTEInfo rc_emlrtRTEI{
    30,                    // lineNo
    21,                    // colNo
    "applyScalarFunction", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pName
};

// Function Definitions
namespace coder {
void b_abs(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x,
           ::coder::array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(1);
  y.set_size(&rc_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &wc_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

} // namespace coder

// End of code generation (abs.cpp)
