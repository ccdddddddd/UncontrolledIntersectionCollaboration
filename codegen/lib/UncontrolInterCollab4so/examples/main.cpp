//
// File: main.cpp
//
// MATLAB Coder version            : 5.5
// C/C++ source code generated on  : 08-Mar-2024 10:10:39
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "UncontrolInterCollab4so.h"
#include "UncontrolInterCollab4so_types.h"

// Function Declarations
static void argInit_1x20_int16_T(short result[20]);

static void argInit_1x20_real_T(double result[20]);

static void argInit_1x20_struct0_T(struct0_T result[20]);

static short argInit_int16_T();

static double argInit_real_T();

static struct0_T argInit_struct0_T();

static void argInit_struct1_T(struct1_T *result);

// Function Definitions
//
// Arguments    : short result[20]
// Return Type  : void
//
static void argInit_1x20_int16_T(short result[20])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 20; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_int16_T();
  }
}

//
// Arguments    : double result[20]
// Return Type  : void
//
static void argInit_1x20_real_T(double result[20])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 20; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

//
// Arguments    : struct0_T result[20]
// Return Type  : void
//
static void argInit_1x20_struct0_T(struct0_T result[20])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 20; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_struct0_T();
  }
}

//
// Arguments    : void
// Return Type  : short
//
static short argInit_int16_T()
{
  return 0;
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : struct0_T
//
static struct0_T argInit_struct0_T()
{
  struct0_T result;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_1x20_int16_T(result.values);
  return result;
}

//
// Arguments    : struct1_T *result
// Return Type  : void
//
static void argInit_struct1_T(struct1_T *result)
{
  double result_tmp;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  result_tmp = argInit_real_T();
  result->vMax = result_tmp;
  result->aMin = result_tmp;
  result->aMax = result_tmp;
  result->dt = result_tmp;
  result->kGen = result_tmp;
  result->kp = result_tmp;
  result->kv = result_tmp;
  result->D = result_tmp;
  result->vMin = result_tmp;
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_UncontrolInterCollab4so();
  // Terminate the application.
  // You do not need to do this more than one time.
  UncontrolInterCollab4so_terminate();
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
void main_UncontrolInterCollab4so()
{
  struct0_T rv[20];
  struct1_T r;
  double dis2center_tmp[20];
  double vTarget[20];
  // Initialize function 'UncontrolInterCollab4so' input arguments.
  // Initialize function input argument 'dis2center'.
  argInit_1x20_real_T(dis2center_tmp);
  // Initialize function input argument 'velocity'.
  // Initialize function input argument 'accel'.
  // Initialize function input argument 'pConflictStructInt'.
  // Initialize function input argument 'calibrationVars'.
  // Call the entry-point 'UncontrolInterCollab4so'.
  argInit_1x20_struct0_T(rv);
  argInit_struct1_T(&r);
  UncontrolInterCollab4so(argInit_int16_T(), dis2center_tmp, dis2center_tmp,
                          dis2center_tmp, rv, &r, vTarget);
}

//
// File trailer for main.cpp
//
// [EOF]
//
