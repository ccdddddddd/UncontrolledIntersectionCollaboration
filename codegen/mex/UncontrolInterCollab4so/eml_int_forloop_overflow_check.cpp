//
// eml_int_forloop_overflow_check.cpp
//
// Code generation for function 'eml_int_forloop_overflow_check'
//

// Include files
#include "eml_int_forloop_overflow_check.h"
#include "UncontrolInterCollab4so_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRTEInfo m_emlrtRTEI{
    87,                             // lineNo
    33,                             // colNo
    "check_forloop_overflow_error", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_"
    "forloop_overflow_check.m" // pName
};

// Function Definitions
namespace coder {
void check_forloop_overflow_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(
      sp, &m_emlrtRTEI, "Coder:toolbox:int_forloop_overflow",
      "Coder:toolbox:int_forloop_overflow", 3, 4, 5, "int32");
}

} // namespace coder

// End of code generation (eml_int_forloop_overflow_check.cpp)
