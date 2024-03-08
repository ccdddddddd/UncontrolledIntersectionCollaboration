//
// File: _coder_UncontrolInterCollab4so_mex.cpp
//
// MATLAB Coder version            : 5.5
// C/C++ source code generated on  : 08-Mar-2024 10:10:39
//

// Include Files
#include "_coder_UncontrolInterCollab4so_mex.h"
#include "_coder_UncontrolInterCollab4so_api.h"

// Function Definitions
//
// Arguments    : int32_T nlhs
//                mxArray *plhs[]
//                int32_T nrhs
//                const mxArray *prhs[]
// Return Type  : void
//
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&UncontrolInterCollab4so_atexit);
  // Module initialization.
  UncontrolInterCollab4so_initialize();
  // Dispatch the entry-point.
  unsafe_UncontrolInterCollab4so_mexFunction(nlhs, plhs, nrhs, prhs);
  // Module termination.
  UncontrolInterCollab4so_terminate();
}

//
// Arguments    : void
// Return Type  : emlrtCTX
//
emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           nullptr, "GBK", true);
  return emlrtRootTLSGlobal;
}

//
// Arguments    : int32_T nlhs
//                mxArray *plhs[1]
//                int32_T nrhs
//                const mxArray *prhs[6]
// Return Type  : void
//
void unsafe_UncontrolInterCollab4so_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                                int32_T nrhs,
                                                const mxArray *prhs[6])
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

//
// File trailer for _coder_UncontrolInterCollab4so_mex.cpp
//
// [EOF]
//
