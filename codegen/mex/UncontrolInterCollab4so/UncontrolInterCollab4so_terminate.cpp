//
// UncontrolInterCollab4so_terminate.cpp
//
// Code generation for function 'UncontrolInterCollab4so_terminate'
//

// Include files
#include "UncontrolInterCollab4so_terminate.h"
#include "UncontrolInterCollab4so_data.h"
#include "_coder_UncontrolInterCollab4so_mex.h"
#include "rt_nonfinite.h"

// Function Definitions
void UncontrolInterCollab4so_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  // Free instance data
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void UncontrolInterCollab4so_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (UncontrolInterCollab4so_terminate.cpp)
