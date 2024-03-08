//
// ismember.cpp
//
// Code generation for function 'ismember'
//

// Include files
#include "ismember.h"
#include "UncontrolInterCollab4so_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo
    eb_emlrtRSI{
        163,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo
    qc_emlrtRSI{
        162,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo
    rc_emlrtRSI{
        173,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo
    sc_emlrtRSI{
        180,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo
    tc_emlrtRSI{
        183,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo
    uc_emlrtRSI{
        202,        // lineNo
        "isMember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRTEInfo
    p_emlrtRTEI{
        27,     // lineNo
        6,      // colNo
        "sort", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\so"
        "rt.m" // pName
    };

static emlrtRTEInfo
    qc_emlrtRTEI{
        120,        // lineNo
        1,          // colNo
        "ismember", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pName
    };

// Function Declarations
namespace coder {
static int32_T bsearchni(int32_T k, const ::coder::array<real_T, 1U> &x,
                         const ::coder::array<real_T, 2U> &s);

static int32_T bsearchni(int32_T k, const ::coder::array<real_T, 1U> &x,
                         const ::coder::array<real_T, 1U> &s);

} // namespace coder

// Function Definitions
namespace coder {
static int32_T bsearchni(int32_T k, const ::coder::array<real_T, 1U> &x,
                         const ::coder::array<real_T, 2U> &s)
{
  real_T b_x;
  int32_T idx;
  int32_T ihi;
  int32_T ilo;
  boolean_T exitg1;
  b_x = x[k - 1];
  ihi = s.size(0);
  idx = 0;
  ilo = 1;
  exitg1 = false;
  while ((!exitg1) && (ihi >= ilo)) {
    int32_T imid;
    imid = ((ilo >> 1) + (ihi >> 1)) - 1;
    if (((ilo & 1) == 1) && ((ihi & 1) == 1)) {
      imid++;
    }
    if (b_x == s[imid]) {
      idx = imid + 1;
      exitg1 = true;
    } else {
      boolean_T p;
      if (muDoubleScalarIsNaN(s[imid])) {
        p = !muDoubleScalarIsNaN(b_x);
      } else if (muDoubleScalarIsNaN(b_x)) {
        p = false;
      } else {
        p = (b_x < s[imid]);
      }
      if (p) {
        ihi = imid;
      } else {
        ilo = imid + 2;
      }
    }
  }
  if (idx > 0) {
    idx--;
    while ((idx > 0) && (b_x == s[idx - 1])) {
      idx--;
    }
    idx++;
  }
  return idx;
}

static int32_T bsearchni(int32_T k, const ::coder::array<real_T, 1U> &x,
                         const ::coder::array<real_T, 1U> &s)
{
  real_T b_x;
  int32_T idx;
  int32_T ihi;
  int32_T ilo;
  boolean_T exitg1;
  b_x = x[k - 1];
  ihi = s.size(0);
  idx = 0;
  ilo = 1;
  exitg1 = false;
  while ((!exitg1) && (ihi >= ilo)) {
    int32_T imid;
    imid = ((ilo >> 1) + (ihi >> 1)) - 1;
    if (((ilo & 1) == 1) && ((ihi & 1) == 1)) {
      imid++;
    }
    if (b_x == s[imid]) {
      idx = imid + 1;
      exitg1 = true;
    } else {
      boolean_T p;
      if (muDoubleScalarIsNaN(s[imid])) {
        p = !muDoubleScalarIsNaN(b_x);
      } else if (muDoubleScalarIsNaN(b_x)) {
        p = false;
      } else {
        p = (b_x < s[imid]);
      }
      if (p) {
        ihi = imid;
      } else {
        ilo = imid + 2;
      }
    }
  }
  if (idx > 0) {
    idx--;
    while ((idx > 0) && (b_x == s[idx - 1])) {
      idx--;
    }
    idx++;
  }
  return idx;
}

void b_isMember(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                const ::coder::array<real_T, 2U> &s,
                ::coder::array<boolean_T, 1U> &tf)
{
  array<real_T, 1U> b_s;
  array<real_T, 1U> ss;
  array<int32_T, 1U> fe_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_isMember_numThreads;
  int32_T n;
  int32_T na;
  int32_T ns;
  int32_T pmax;
  int32_T pmin;
  boolean_T exitg1;
  boolean_T guard1{false};
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  na = a.size(0);
  ns = s.size(0);
  tf.set_size(&qc_emlrtRTEI, sp, a.size(0));
  pmax = a.size(0);
  for (pmin = 0; pmin < pmax; pmin++) {
    tf[pmin] = false;
  }
  guard1 = false;
  if (s.size(0) <= 4) {
    guard1 = true;
  } else {
    pmax = 31;
    pmin = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax - pmin > 1)) {
      int32_T p;
      int32_T pow2p;
      p = (pmin + pmax) >> 1;
      pow2p = 1 << p;
      if (pow2p == ns) {
        pmax = p;
        exitg1 = true;
      } else if (pow2p > ns) {
        pmax = p;
      } else {
        pmin = p;
      }
    }
    if (a.size(0) <= pmax + 4) {
      guard1 = true;
    } else {
      pmax = s.size(0);
      b_s = s.reshape(pmax);
      st.site = &rc_emlrtRSI;
      if (!issorted(&st, b_s)) {
        st.site = &sc_emlrtRSI;
        ss.set_size(&p_emlrtRTEI, &st, s.size(0));
        pmax = s.size(0);
        for (pmin = 0; pmin < pmax; pmin++) {
          ss[pmin] = s[pmin];
        }
        b_st.site = &n_emlrtRSI;
        internal::sort(&b_st, ss, fe_emlrtRSI);
        st.site = &tc_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
        pmax = a.size(0) - 1;
        emlrtEnterParallelRegion((emlrtCTX)sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        b_isMember_numThreads = emlrtAllocRegionTLSs(
            sp->tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_isMember_numThreads) private(n)

        for (int32_T k = 0; k <= pmax; k++) {
          n = bsearchni(k + 1, a, ss);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      } else {
        st.site = &uc_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
        pmax = a.size(0) - 1;
        emlrtEnterParallelRegion((emlrtCTX)sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        b_isMember_numThreads = emlrtAllocRegionTLSs(
            sp->tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_isMember_numThreads) private(n)

        for (int32_T k = 0; k <= pmax; k++) {
          n = bsearchni(k + 1, a, s);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      }
    }
  }
  if (guard1) {
    st.site = &qc_emlrtRSI;
    if (a.size(0) > 2147483646) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (pmin = 0; pmin < na; pmin++) {
      st.site = &eb_emlrtRSI;
      if (ns > 2147483646) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      pmax = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax <= ns - 1)) {
        if (a[pmin] == s[pmax]) {
          tf[pmin] = true;
          exitg1 = true;
        } else {
          pmax++;
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

boolean_T isMember(const emlrtStack *sp, real_T a,
                   const ::coder::array<real_T, 2U> &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tf = false;
  st.site = &eb_emlrtRSI;
  if (s.size(1) > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= s.size(1) - 1)) {
    if (a == s[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

boolean_T isMember(real_T a, const real_T s_data[], const int32_T s_size[2])
{
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  i = s_size[0] * s_size[1];
  tf = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (a == s_data[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

} // namespace coder

// End of code generation (ismember.cpp)
