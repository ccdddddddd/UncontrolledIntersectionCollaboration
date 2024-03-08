//
// eml_setop.cpp
//
// Code generation for function 'eml_setop'
//

// Include files
#include "eml_setop.h"
#include "UncontrolInterCollab4so_data.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo kd_emlrtRSI{
    238,          // lineNo
    "do_vectors", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pathName
};

static emlrtRTEInfo h_emlrtRTEI{
    239,          // lineNo
    13,           // colNo
    "do_vectors", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    406,          // lineNo
    5,            // colNo
    "do_vectors", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    444,          // lineNo
    5,            // colNo
    "do_vectors", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    220,         // lineNo
    24,          // colNo
    "eml_setop", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    221,         // lineNo
    25,          // colNo
    "eml_setop", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    412,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    448,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pName
};

// Function Definitions
namespace coder {
void do_vectors(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                ::coder::array<real_T, 1U> &c, ::coder::array<int32_T, 1U> &ia,
                int32_T *ib_size)
{
  emlrtStack st;
  int32_T b_ialast;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T na;
  int32_T nc;
  int32_T nia;
  st.prev = sp;
  st.tls = sp->tls;
  na = a.size(0);
  c.set_size(&wc_emlrtRTEI, sp, a.size(0));
  ia.set_size(&xc_emlrtRTEI, sp, a.size(0));
  *ib_size = 0;
  st.site = &kd_emlrtRSI;
  if (!issorted(&st, a)) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 0;
  iblast = 1;
  while ((ialast + 1 <= na) && (iblast <= 1)) {
    real_T ak;
    b_ialast = ialast + 1;
    ak = a[ialast];
    while ((b_ialast < a.size(0)) && (a[b_ialast] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast - 1;
    if (ak == 0.0) {
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = 2;
    } else if ((!muDoubleScalarIsNaN(ak)) && (ak < 0.0)) {
      nc++;
      nia++;
      c[nc - 1] = ak;
      ia[nia - 1] = iafirst + 1;
      ialast = b_ialast;
      iafirst = b_ialast;
    } else {
      iblast = 2;
    }
  }
  while (ialast + 1 <= na) {
    b_ialast = ialast + 1;
    while ((b_ialast < a.size(0)) && (a[b_ialast] == a[ialast])) {
      b_ialast++;
    }
    nc++;
    nia++;
    c[nc - 1] = a[ialast];
    ia[nia - 1] = iafirst + 1;
    ialast = b_ialast;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nia < 1) {
      nia = 0;
    }
    ia.set_size(&yc_emlrtRTEI, sp, nia);
    if (nc > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&ad_emlrtRTEI, sp, nc);
  }
}

void do_vectors(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                real_T b, ::coder::array<real_T, 1U> &c,
                ::coder::array<int32_T, 1U> &ia, int32_T *ib_size)
{
  emlrtStack st;
  int32_T b_ialast;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T na;
  int32_T nc;
  int32_T nia;
  st.prev = sp;
  st.tls = sp->tls;
  na = a.size(0);
  c.set_size(&wc_emlrtRTEI, sp, a.size(0));
  ia.set_size(&xc_emlrtRTEI, sp, a.size(0));
  *ib_size = 0;
  st.site = &kd_emlrtRSI;
  if (!issorted(&st, a)) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 0;
  iblast = 1;
  while ((ialast + 1 <= na) && (iblast <= 1)) {
    real_T ak;
    b_ialast = ialast + 1;
    ak = a[ialast];
    while ((b_ialast < a.size(0)) && (a[b_ialast] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast - 1;
    if (ak == b) {
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = 2;
    } else {
      boolean_T p;
      if (muDoubleScalarIsNaN(b)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < b);
      }
      if (p) {
        nc++;
        nia++;
        c[nc - 1] = ak;
        ia[nia - 1] = iafirst + 1;
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        iblast = 2;
      }
    }
  }
  while (ialast + 1 <= na) {
    b_ialast = ialast + 1;
    while ((b_ialast < a.size(0)) && (a[b_ialast] == a[ialast])) {
      b_ialast++;
    }
    nc++;
    nia++;
    c[nc - 1] = a[ialast];
    ia[nia - 1] = iafirst + 1;
    ialast = b_ialast;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nia < 1) {
      nia = 0;
    }
    ia.set_size(&yc_emlrtRTEI, sp, nia);
    if (nc > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&ad_emlrtRTEI, sp, nc);
  }
}

} // namespace coder

// End of code generation (eml_setop.cpp)
