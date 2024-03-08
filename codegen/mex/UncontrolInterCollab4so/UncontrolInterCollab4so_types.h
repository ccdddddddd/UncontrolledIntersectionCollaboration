//
// UncontrolInterCollab4so_types.h
//
// Code generation for function 'UncontrolInterCollab4so'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#define MAX_THREADS omp_get_max_threads()

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

// End of code generation (UncontrolInterCollab4so_types.h)
