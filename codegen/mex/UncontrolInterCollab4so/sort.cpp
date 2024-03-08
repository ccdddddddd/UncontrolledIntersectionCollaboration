//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo o_emlrtRSI{
    72,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    506,           // lineNo
    "merge_block", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    76,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    79,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    81,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    84,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    87,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    90,     // lineNo
    "sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pathName
};

static emlrtRTEInfo dd_emlrtRTEI{
    56,     // lineNo
    24,     // colNo
    "sort", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pName
};

static emlrtRTEInfo ed_emlrtRTEI{
    75,     // lineNo
    26,     // colNo
    "sort", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sort.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void sort(const emlrtStack *sp, ::coder::array<real_T, 1U> &x,
          ::coder::array<int32_T, 1U> &idx)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  dim = 0;
  if (x.size(0) != 1) {
    dim = -1;
  }
  if (dim + 2 <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vlen = i - 1;
  vwork.set_size(&dd_emlrtRTEI, sp, i);
  idx.set_size(&ed_emlrtRTEI, sp, x.size(0));
  st.site = &ib_emlrtRSI;
  vstride = 1;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &jb_emlrtRSI;
  st.site = &kb_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &lb_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (int32_T k{0}; k <= vlen; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &mb_emlrtRSI;
    sortIdx(&st, vwork, iidx);
    st.site = &nb_emlrtRSI;
    for (int32_T k{0}; k <= vlen; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void sort(const emlrtStack *sp, real_T x_data[], const int32_T x_size[2],
          int32_T idx_data[], int32_T idx_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T xwork_data[20];
  int32_T iwork_data[20];
  int32_T ib;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  idx_size[0] = 1;
  idx_size[1] = x_size[1];
  ib = x_size[1];
  if (ib - 1 >= 0) {
    std::memset(&idx_data[0], 0, static_cast<uint32_T>(ib) * sizeof(int32_T));
  }
  if (x_size[1] != 0) {
    real_T x4[4];
    int32_T i1;
    int32_T i2;
    int32_T i4;
    int32_T n;
    int32_T nNaNs;
    int32_T quartetOffset;
    int8_T idx4[4];
    b_st.site = &p_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    n = x_size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    ib = x_size[1];
    if (ib - 1 >= 0) {
      std::memset(&iwork_data[0], 0,
                  static_cast<uint32_T>(ib) * sizeof(int32_T));
    }
    ib = x_size[1];
    if (ib - 1 >= 0) {
      std::memset(&xwork_data[0], 0,
                  static_cast<uint32_T>(ib) * sizeof(real_T));
    }
    nNaNs = 0;
    ib = 0;
    d_st.site = &s_emlrtRSI;
    for (int32_T k{0}; k < n; k++) {
      if (muDoubleScalarIsNaN(x_data[k])) {
        i2 = (n - nNaNs) - 1;
        idx_data[i2] = k + 1;
        xwork_data[i2] = x_data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib - 1] = static_cast<int8_T>(k + 1);
        x4[ib - 1] = x_data[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          int8_T b_i1;
          int8_T b_i2;
          int8_T i;
          int8_T i3;
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            ib = 3;
            i4 = 4;
          } else {
            ib = 4;
            i4 = 3;
          }
          d = x4[i1 - 1];
          d1 = x4[ib - 1];
          if (d <= d1) {
            d = x4[i2 - 1];
            if (d <= d1) {
              i = static_cast<int8_T>(i1);
              b_i1 = static_cast<int8_T>(i2);
              b_i2 = static_cast<int8_T>(ib);
              i3 = static_cast<int8_T>(i4);
            } else if (d <= x4[i4 - 1]) {
              i = static_cast<int8_T>(i1);
              b_i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i2);
              i3 = static_cast<int8_T>(i4);
            } else {
              i = static_cast<int8_T>(i1);
              b_i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i4);
              i3 = static_cast<int8_T>(i2);
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[i2 - 1] <= d1) {
                i = static_cast<int8_T>(ib);
                b_i1 = static_cast<int8_T>(i1);
                b_i2 = static_cast<int8_T>(i2);
                i3 = static_cast<int8_T>(i4);
              } else {
                i = static_cast<int8_T>(ib);
                b_i1 = static_cast<int8_T>(i1);
                b_i2 = static_cast<int8_T>(i4);
                i3 = static_cast<int8_T>(i2);
              }
            } else {
              i = static_cast<int8_T>(ib);
              b_i1 = static_cast<int8_T>(i4);
              b_i2 = static_cast<int8_T>(i1);
              i3 = static_cast<int8_T>(i2);
            }
          }
          idx_data[quartetOffset - 3] = idx4[i - 1];
          idx_data[quartetOffset - 2] = idx4[b_i1 - 1];
          idx_data[quartetOffset - 1] = idx4[b_i2 - 1];
          idx_data[quartetOffset] = idx4[i3 - 1];
          x_data[quartetOffset - 3] = x4[i - 1];
          x_data[quartetOffset - 2] = x4[b_i1 - 1];
          x_data[quartetOffset - 1] = x4[b_i2 - 1];
          x_data[quartetOffset] = x4[i3 - 1];
          ib = 0;
        }
      }
    }
    i4 = x_size[1] - nNaNs;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      d_st.site = &t_emlrtRSI;
      if (ib > 2147483646) {
        e_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      quartetOffset = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < quartetOffset; k++) {
        i2 = perm[k] - 1;
        i1 = (i4 - ib) + k;
        idx_data[i1] = idx4[i2];
        x_data[i1] = x4[i2];
      }
    }
    ib = nNaNs >> 1;
    d_st.site = &u_emlrtRSI;
    for (int32_T k{0}; k < ib; k++) {
      quartetOffset = i4 + k;
      i1 = idx_data[quartetOffset];
      i2 = (n - k) - 1;
      idx_data[quartetOffset] = idx_data[i2];
      idx_data[i2] = i1;
      x_data[quartetOffset] = xwork_data[i2];
      x_data[i2] = xwork_data[quartetOffset];
    }
    if ((nNaNs & 1) != 0) {
      quartetOffset = i4 + ib;
      x_data[quartetOffset] = xwork_data[quartetOffset];
    }
    if (i4 > 1) {
      c_st.site = &q_emlrtRSI;
      i2 = i4 >> 2;
      i1 = 4;
      while (i2 > 1) {
        if ((i2 & 1) != 0) {
          i2--;
          ib = i1 * i2;
          quartetOffset = i4 - ib;
          if (quartetOffset > i1) {
            d_st.site = &w_emlrtRSI;
            merge(&d_st, idx_data, x_data, ib, i1, quartetOffset - i1,
                  iwork_data, xwork_data);
          }
        }
        ib = i1 << 1;
        i2 >>= 1;
        d_st.site = &x_emlrtRSI;
        for (int32_T k{0}; k < i2; k++) {
          d_st.site = &y_emlrtRSI;
          merge(&d_st, idx_data, x_data, k * ib, i1, i1, iwork_data,
                xwork_data);
        }
        i1 = ib;
      }
      if (i4 > i1) {
        d_st.site = &ab_emlrtRSI;
        merge(&d_st, idx_data, x_data, 0, i1, i4 - i1, iwork_data, xwork_data);
      }
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
