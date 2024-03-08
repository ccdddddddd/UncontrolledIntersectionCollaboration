//
// File: _coder_UncontrolInterCollab4so_api.h
//
// MATLAB Coder version            : 5.5
// C/C++ source code generated on  : 08-Mar-2024 10:10:39
//

#ifndef _CODER_UNCONTROLINTERCOLLAB4SO_API_H
#define _CODER_UNCONTROLINTERCOLLAB4SO_API_H

// Include Files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Type Definitions
struct struct1_T {
  real_T vMin;
  real_T vMax;
  real_T aMin;
  real_T aMax;
  real_T dt;
  real_T kGen;
  real_T kp;
  real_T kv;
  real_T D;
};

struct struct0_T {
  int16_T values[20];
};

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void UncontrolInterCollab4so(int16_T numOfVehsInt, real_T dis2center[20],
                             real_T velocity[20], real_T accel[20],
                             struct0_T pConflictStructInt[20],
                             struct1_T *calibrationVars, real_T vTarget[20]);

void UncontrolInterCollab4so_api(const mxArray *const prhs[6],
                                 const mxArray **plhs);

void UncontrolInterCollab4so_atexit();

void UncontrolInterCollab4so_initialize();

void UncontrolInterCollab4so_terminate();

void UncontrolInterCollab4so_xil_shutdown();

void UncontrolInterCollab4so_xil_terminate();

#endif
//
// File trailer for _coder_UncontrolInterCollab4so_api.h
//
// [EOF]
//
