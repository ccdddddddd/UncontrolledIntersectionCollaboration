//
// unique.cpp
//
// Code generation for function 'unique'
//

// Include files
#include "unique.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    yc_emlrtRSI{
        160,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo
    ad_emlrtRSI{
        162,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo
    bd_emlrtRSI{
        206,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo
    cd_emlrtRSI{
        230,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo
    dd_emlrtRSI{
        238,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo
    ed_emlrtRSI{
        244,             // lineNo
        "unique_vector", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo fd_emlrtRSI{
    145,       // lineNo
    "sortIdx", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortIdx.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    57,          // lineNo
    "mergesort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\mergesort.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    113,         // lineNo
    "mergesort", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\mergesort.m" // pathName
};

static emlrtRTEInfo
    g_emlrtRTEI{
        237,             // lineNo
        1,               // colNo
        "unique_vector", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pName
    };

static emlrtRTEInfo
    sc_emlrtRTEI{
        160,      // lineNo
        1,        // colNo
        "unique", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pName
    };

static emlrtRTEInfo tc_emlrtRTEI{
    52,          // lineNo
    9,           // colNo
    "mergesort", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\mergesort.m" // pName
};

static emlrtRTEInfo
    uc_emlrtRTEI{
        161,      // lineNo
        20,       // colNo
        "unique", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pName
    };

static emlrtRTEInfo
    vc_emlrtRTEI{
        238,      // lineNo
        1,        // colNo
        "unique", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pName
    };

// Function Definitions
namespace coder {
void unique_vector(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                   ::coder::array<real_T, 1U> &b)
{
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T x;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T n;
  int32_T na;
  int32_T nb;
  int32_T pEnd;
  int32_T qEnd;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  na = a.size(0);
  st.site = &yc_emlrtRSI;
  n = a.size(0) + 1;
  idx.set_size(&sc_emlrtRTEI, &st, a.size(0));
  i = a.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    idx[b_i] = 0;
  }
  if (a.size(0) != 0) {
    b_st.site = &fd_emlrtRSI;
    iwork.set_size(&tc_emlrtRTEI, &b_st, a.size(0));
    i = a.size(0) - 1;
    c_st.site = &gd_emlrtRSI;
    if (a.size(0) - 1 > 2147483645) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 1; k <= i; k += 2) {
      if ((a[k - 1] <= a[k]) || muDoubleScalarIsNaN(a[k])) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((a.size(0) & 1) != 0) {
      idx[a.size(0) - 1] = a.size(0);
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        int32_T kEnd;
        int32_T q;
        nb = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          x = a[idx[q] - 1];
          b_i = idx[nb - 1];
          if ((a[b_i - 1] <= x) || muDoubleScalarIsNaN(x)) {
            iwork[k] = b_i;
            nb++;
            if (nb == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork[k] = idx[q];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q];
            q++;
            if (q + 1 == qEnd) {
              while (nb < pEnd) {
                k++;
                iwork[k] = idx[nb - 1];
                nb++;
              }
            }
          }
          k++;
        }
        c_st.site = &hd_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  b.set_size(&uc_emlrtRTEI, sp, a.size(0));
  st.site = &ad_emlrtRSI;
  if (a.size(0) > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < na; k++) {
    b[k] = a[idx[k] - 1];
  }
  k = a.size(0);
  while ((k >= 1) && muDoubleScalarIsNaN(b[k - 1])) {
    k--;
  }
  pEnd = a.size(0) - k;
  nb = 0;
  i = 0;
  while (i + 1 <= k) {
    x = b[i];
    i2 = i;
    do {
      i++;
    } while (!((i + 1 > k) || (b[i] != x)));
    nb++;
    b[nb - 1] = x;
    st.site = &bd_emlrtRSI;
    if ((i2 + 1 <= i) && (i > 2147483646)) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
  }
  st.site = &cd_emlrtRSI;
  for (j = 0; j < pEnd; j++) {
    b[nb + j] = b[k + j];
  }
  nb += pEnd;
  if (nb > a.size(0)) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nb < 1) {
    b_i = 0;
  } else {
    b_i = nb;
  }
  iv[0] = 1;
  iv[1] = b_i;
  st.site = &dd_emlrtRSI;
  internal::indexShapeCheck(&st, b.size(0), iv);
  b.set_size(&vc_emlrtRTEI, sp, b_i);
  st.site = &ed_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

} // namespace coder

// End of code generation (unique.cpp)
