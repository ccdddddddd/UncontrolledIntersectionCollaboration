//
// UncontrolInterCollab4so.h
//
// Code generation for function 'UncontrolInterCollab4so'
//

#pragma once

// Include files
#include "UncontrolInterCollab4so_types.h"
#include "rtwtypes.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void UncontrolInterCollab4so(const emlrtStack *sp, int16_T numOfVehsInt,
                             const real_T dis2center[20],
                             const real_T velocity[20], const real_T accel[20],
                             const struct0_T pConflictStructInt[20],
                             const struct1_T *calibrationVars,
                             real_T vTarget[20]);

emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

// End of code generation (UncontrolInterCollab4so.h)
