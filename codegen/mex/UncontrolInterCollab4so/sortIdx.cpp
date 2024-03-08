//
// sortIdx.cpp
//
// Code generation for function 'sortIdx'
//

// Include files
#include "sortIdx.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bb_emlrtRSI{
    561,     // lineNo
    "merge", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    530,     // lineNo
    "merge", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    316,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    317,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    325,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    587,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    589,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    617,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRTEInfo bd_emlrtRTEI{
    386,       // lineNo
    1,         // colNo
    "sortIdx", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    388,       // lineNo
    1,         // colNo
    "sortIdx", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pName
};

static emlrtRTEInfo fd_emlrtRTEI{
    61,        // lineNo
    5,         // colNo
    "sortIdx", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static void merge(const emlrtStack *sp, ::coder::array<int32_T, 1U> &idx,
                  ::coder::array<real_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, ::coder::array<int32_T, 1U> &iwork,
                  ::coder::array<real_T, 1U> &xwork);

static void merge_block(const emlrtStack *sp, ::coder::array<int32_T, 1U> &idx,
                        ::coder::array<real_T, 1U> &x, int32_T offset,
                        int32_T n, int32_T preSortLevel,
                        ::coder::array<int32_T, 1U> &iwork,
                        ::coder::array<real_T, 1U> &xwork);

} // namespace internal
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void merge(const emlrtStack *sp, ::coder::array<int32_T, 1U> &idx,
                  ::coder::array<real_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, ::coder::array<int32_T, 1U> &iwork,
                  ::coder::array<real_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &cb_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &bb_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack *sp, ::coder::array<int32_T, 1U> &idx,
                        ::coder::array<real_T, 1U> &x, int32_T offset,
                        int32_T n, int32_T preSortLevel,
                        ::coder::array<int32_T, 1U> &iwork,
                        ::coder::array<real_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &w_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &y_emlrtRSI;
      merge(&st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &ab_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void merge(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
           int32_T offset, int32_T np, int32_T nq, int32_T iwork_data[],
           real_T xwork_data[])
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &cb_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork_data[j] = idx_data[iout];
      xwork_data[j] = x_data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &bb_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx_data[iout] = iwork_data[j - 1];
            x_data[iout] = xwork_data[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

void sortIdx(const emlrtStack *sp, ::coder::array<real_T, 1U> &x,
             ::coder::array<int32_T, 1U> &idx)
{
  array<real_T, 1U> xwork;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T ib;
  uint32_T unnamed_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  unnamed_idx_0 = static_cast<uint32_T>(x.size(0));
  idx.set_size(&fd_emlrtRTEI, sp, static_cast<int32_T>(unnamed_idx_0));
  ib = static_cast<int32_T>(unnamed_idx_0);
  for (i = 0; i < ib; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T idx_tmp;
    int32_T n;
    int32_T nNonNaN;
    int32_T quartetOffset;
    st.site = &p_emlrtRSI;
    b_st.site = &r_emlrtRSI;
    n = x.size(0);
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    iwork.set_size(&bd_emlrtRTEI, &b_st, static_cast<int32_T>(unnamed_idx_0));
    ib = static_cast<int32_T>(unnamed_idx_0);
    for (i = 0; i < ib; i++) {
      iwork[i] = 0;
    }
    ib = x.size(0);
    xwork.set_size(&cd_emlrtRTEI, &b_st, ib);
    for (i = 0; i < ib; i++) {
      xwork[i] = 0.0;
    }
    bLen = 0;
    ib = 0;
    c_st.site = &s_emlrtRSI;
    if (x.size(0) > 2147483646) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (int32_T k{0}; k < n; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (n - bLen) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        bLen++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          int8_T b_i2;
          int8_T b_i3;
          int8_T b_i4;
          int8_T i1;
          quartetOffset = k - bLen;
          if (x4[0] <= x4[1]) {
            ib = 1;
            i2 = 2;
          } else {
            ib = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[ib - 1];
          d1 = x4[i3 - 1];
          if (d <= d1) {
            d = x4[i2 - 1];
            if (d <= d1) {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i2);
              b_i3 = static_cast<int8_T>(i3);
              b_i4 = static_cast<int8_T>(i4);
            } else if (d <= x4[i4 - 1]) {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i3);
              b_i3 = static_cast<int8_T>(i2);
              b_i4 = static_cast<int8_T>(i4);
            } else {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i3);
              b_i3 = static_cast<int8_T>(i4);
              b_i4 = static_cast<int8_T>(i2);
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[i2 - 1] <= d1) {
                i1 = static_cast<int8_T>(i3);
                b_i2 = static_cast<int8_T>(ib);
                b_i3 = static_cast<int8_T>(i2);
                b_i4 = static_cast<int8_T>(i4);
              } else {
                i1 = static_cast<int8_T>(i3);
                b_i2 = static_cast<int8_T>(ib);
                b_i3 = static_cast<int8_T>(i4);
                b_i4 = static_cast<int8_T>(i2);
              }
            } else {
              i1 = static_cast<int8_T>(i3);
              b_i2 = static_cast<int8_T>(i4);
              b_i3 = static_cast<int8_T>(ib);
              b_i4 = static_cast<int8_T>(i2);
            }
          }
          idx[quartetOffset - 3] = idx4[i1 - 1];
          idx[quartetOffset - 2] = idx4[b_i2 - 1];
          idx[quartetOffset - 1] = idx4[b_i3 - 1];
          idx[quartetOffset] = idx4[b_i4 - 1];
          x[quartetOffset - 3] = x4[i1 - 1];
          x[quartetOffset - 2] = x4[b_i2 - 1];
          x[quartetOffset - 1] = x4[b_i3 - 1];
          x[quartetOffset] = x4[b_i4 - 1];
          ib = 0;
        }
      }
    }
    i3 = x.size(0) - bLen;
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
      c_st.site = &t_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = perm[k] - 1;
        quartetOffset = (i3 - ib) + k;
        idx[quartetOffset] = idx4[idx_tmp];
        x[quartetOffset] = x4[idx_tmp];
      }
    }
    ib = bLen >> 1;
    c_st.site = &u_emlrtRSI;
    for (int32_T k{0}; k < ib; k++) {
      quartetOffset = i3 + k;
      i2 = idx[quartetOffset];
      idx_tmp = (n - k) - 1;
      idx[quartetOffset] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[quartetOffset] = xwork[idx_tmp];
      x[idx_tmp] = xwork[quartetOffset];
    }
    if ((bLen & 1) != 0) {
      i = i3 + ib;
      x[i] = xwork[i];
    }
    nNonNaN = x.size(0) - bLen;
    ib = 2;
    if (nNonNaN > 1) {
      if (x.size(0) >= 256) {
        int32_T nBlocks;
        nBlocks = nNonNaN >> 8;
        if (nBlocks > 0) {
          b_st.site = &pb_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            b_st.site = &qb_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              n = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &sb_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * n) + 1;
                c_st.site = &tb_emlrtRSI;
                for (quartetOffset = 0; quartetOffset < n; quartetOffset++) {
                  ib = i2 + quartetOffset;
                  b_iwork[quartetOffset] = idx[ib];
                  b_xwork[quartetOffset] = x[ib];
                }
                i3 = 0;
                quartetOffset = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[quartetOffset]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[quartetOffset];
                    x[ib] = b_xwork[quartetOffset];
                    if (quartetOffset + 1 < n) {
                      quartetOffset++;
                    } else {
                      ib -= i3;
                      c_st.site = &ub_emlrtRSI;
                      for (quartetOffset = i3 + 1; quartetOffset <= bLen;
                           quartetOffset++) {
                        idx_tmp = ib + quartetOffset;
                        idx[idx_tmp] = b_iwork[quartetOffset - 1];
                        x[idx_tmp] = b_xwork[quartetOffset - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          quartetOffset = nNonNaN - ib;
          if (quartetOffset > 0) {
            b_st.site = &rb_emlrtRSI;
            merge_block(&b_st, idx, x, ib, quartetOffset, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &q_emlrtRSI;
      merge_block(&b_st, idx, x, 0, nNonNaN, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.cpp)
