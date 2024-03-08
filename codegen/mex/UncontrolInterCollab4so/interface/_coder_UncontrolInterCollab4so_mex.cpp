//
// _coder_UncontrolInterCollab4so_mex.cpp
//
// Code generation for function '_coder_UncontrolInterCollab4so_mex'
//

// Include files
#include "_coder_UncontrolInterCollab4so_mex.h"
#include "UncontrolInterCollab4so.h"
#include "UncontrolInterCollab4so_data.h"
#include "UncontrolInterCollab4so_initialize.h"
#include "UncontrolInterCollab4so_terminate.h"
#include "_coder_UncontrolInterCollab4so_api.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void UncontrolInterCollab4so_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                         int32_T nrhs, const mxArray *prhs[6])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        23, "UncontrolInterCollab4so");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "UncontrolInterCollab4so");
  }
  // Call the function.
  UncontrolInterCollab4so_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexAtExit(&UncontrolInterCollab4so_atexit);
  // Initialize the memory manager.
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&UncontrolInterCollab4so_nestLockGlobal);
  // Module initialization.
  UncontrolInterCollab4so_initialize();
  st.tls = emlrtRootTLSGlobal;
  try {
    // Dispatch the entry-point.
    UncontrolInterCollab4so_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    UncontrolInterCollab4so_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&UncontrolInterCollab4so_nestLockGlobal);
  } catch (...) {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&UncontrolInterCollab4so_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(),
                           (void *)&emlrtExceptionBridge, "GBK", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_UncontrolInterCollab4so_mex.cpp)
