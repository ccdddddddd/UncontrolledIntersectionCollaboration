//
// sumMatrixIncludeNaN.cpp
//
// Code generation for function 'sumMatrixIncludeNaN'
//

// Include files
#include "sumMatrixIncludeNaN.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo sd_emlrtRSI{
    178,          // lineNo
    "sumColumnB", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\privat"
    "e\\sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    182,          // lineNo
    "sumColumnB", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\privat"
    "e\\sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    184,          // lineNo
    "sumColumnB", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\privat"
    "e\\sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    189,          // lineNo
    "sumColumnB", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\privat"
    "e\\sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    210,         // lineNo
    "sumColumn", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\privat"
    "e\\sumMatrixIncludeNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T sumColumnB(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x,
                  int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &sd_emlrtRSI;
    y = x[0];
    b_st.site = &wd_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[k + 1];
    }
  } else {
    real_T b_y;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &td_emlrtRSI;
    y = x[0];
    b_st.site = &wd_emlrtRSI;
    for (int32_T k{0}; k < 1023; k++) {
      y += x[k + 1];
    }
    for (int32_T k{2}; k <= nfb; k++) {
      int32_T vstart;
      st.site = &ud_emlrtRSI;
      vstart = (k - 1) << 10;
      b_y = x[vstart];
      b_st.site = &wd_emlrtRSI;
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(vstart + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &vd_emlrtRSI;
      b_y = x[inb];
      nfb = vlen - inb;
      b_st.site = &wd_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[(inb + k) + 1];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x,
                  int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &sd_emlrtRSI;
    y = x[vstart - 1];
    b_st.site = &wd_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[vstart + k];
    }
  } else {
    real_T b_y;
    int32_T b_vstart;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &td_emlrtRSI;
    y = x[vstart - 1];
    b_st.site = &wd_emlrtRSI;
    for (int32_T k{0}; k < 1023; k++) {
      y += x[vstart + k];
    }
    for (int32_T k{2}; k <= nfb; k++) {
      st.site = &ud_emlrtRSI;
      b_vstart = vstart + ((k - 1) << 10);
      b_y = x[b_vstart - 1];
      b_st.site = &wd_emlrtRSI;
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[b_vstart + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      b_vstart = vstart + inb;
      st.site = &vd_emlrtRSI;
      b_y = x[b_vstart - 1];
      nfb = vlen - inb;
      b_st.site = &wd_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[b_vstart + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB4(const ::coder::array<real_T, 1U> &x, int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  psum1 = x[vstart - 1];
  psum2 = x[vstart + 1023];
  psum3 = x[vstart + 2047];
  psum4 = x[vstart + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = vstart + k;
    psum1 += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

} // namespace coder

// End of code generation (sumMatrixIncludeNaN.cpp)
