//
// issorted.cpp
//
// Code generation for function 'issorted'
//

// Include files
#include "issorted.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo fb_emlrtRSI{
    74,         // lineNo
    "issorted", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\issort"
    "ed.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    112,      // lineNo
    "looper", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\issort"
    "ed.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    95,       // lineNo
    "looper", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\issort"
    "ed.m" // pathName
};

// Function Definitions
namespace coder {
boolean_T issorted(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T dim;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  y = true;
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (x.size(0) != 0) {
    int32_T i;
    if (dim <= 1) {
      i = x.size(0);
    } else {
      i = 1;
    }
    if (i != 1) {
      int32_T k;
      boolean_T exitg1;
      st.site = &fb_emlrtRSI;
      if (dim == 2) {
        i = -1;
      } else {
        i = 0;
      }
      b_st.site = &hb_emlrtRSI;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i)) {
        int32_T n;
        boolean_T exitg2;
        b_st.site = &gb_emlrtRSI;
        if (dim == 1) {
          n = x.size(0) - 1;
        } else {
          n = x.size(0);
        }
        c_st.site = &hb_emlrtRSI;
        if (n > 2147483646) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k <= n - 1)) {
          real_T d;
          int32_T subs[2];
          subs[0] = k + 1;
          subs[1] = 1;
          subs[dim - 1]++;
          d = x[subs[0] - 1];
          if ((x[k] <= d) || muDoubleScalarIsNaN(d)) {
            k++;
          } else {
            y = false;
            exitg2 = true;
          }
        }
        if (!y) {
          exitg1 = true;
        } else {
          k = 1;
        }
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (issorted.cpp)
