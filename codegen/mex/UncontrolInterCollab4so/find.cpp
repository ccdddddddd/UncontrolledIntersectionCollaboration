//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "UncontrolInterCollab4so_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo
    fc_emlrtRSI{
        146,        // lineNo
        "eml_find", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find"
        ".m" // pathName
    };

static emlrtRTEInfo
    e_emlrtRTEI{
        81,         // lineNo
        1,          // colNo
        "eml_find", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find"
        ".m" // pName
    };

static emlrtRTEInfo
    f_emlrtRTEI{
        447,                 // lineNo
        1,                   // colNo
        "find_last_indices", // fName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find"
        ".m" // pName
    };

// Function Definitions
namespace coder {
void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
              int32_T i_data[], int32_T i_size[2])
{
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T k;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  k = (x.size(1) >= 1);
  if (k > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  st.site = &fc_emlrtRSI;
  ii = x.size(1);
  idx = 0;
  i_size[0] = 1;
  i_size[1] = k;
  exitg1 = false;
  while ((!exitg1) && (ii > 0)) {
    if (x[ii - 1]) {
      idx = 1;
      i_data[0] = ii;
      exitg1 = true;
    } else {
      ii--;
    }
  }
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      i_size[0] = 1;
      i_size[1] = 0;
    }
  } else {
    i_size[1] = (idx >= 1);
  }
}

} // namespace coder

// End of code generation (find.cpp)
