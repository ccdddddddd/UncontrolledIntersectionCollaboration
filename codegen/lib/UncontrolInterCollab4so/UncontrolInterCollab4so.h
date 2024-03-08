//
// File: UncontrolInterCollab4so.h
//
// MATLAB Coder version            : 5.5
// C/C++ source code generated on  : 08-Mar-2024 10:10:39
//

#ifndef UNCONTROLINTERCOLLAB4SO_H
#define UNCONTROLINTERCOLLAB4SO_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
struct struct0_T;

struct struct1_T;

// Function Declarations
extern "C" void
UncontrolInterCollab4so(short numOfVehsInt, const double dis2center[20],
                        const double velocity[20], const double accel[20],
                        const struct0_T pConflictStructInt[20],
                        const struct1_T *calibrationVars, double vTarget[20]);

extern void UncontrolInterCollab4so_initialize();

extern void UncontrolInterCollab4so_terminate();

#endif
//
// File trailer for UncontrolInterCollab4so.h
//
// [EOF]
//
