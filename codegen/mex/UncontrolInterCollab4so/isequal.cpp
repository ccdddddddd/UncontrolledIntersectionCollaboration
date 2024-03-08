//
// isequal.cpp
//
// Code generation for function 'isequal'
//

// Include files
#include "isequal.h"
#include "UncontrolInterCollab4so_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
boolean_T isequal(const ::coder::array<real_T, 2U> &varargin_1,
                  const ::coder::array<real_T, 2U> &varargin_2)
{
  boolean_T p;
  p = false;
  if ((varargin_1.size(0) == varargin_2.size(0)) && (varargin_2.size(1) == 1)) {
    p = true;
  }
  if (p && (varargin_1.size(0) != 0) &&
      ((varargin_2.size(0) != 0) && (varargin_2.size(1) != 0))) {
    int32_T k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2.size(0) - 1)) {
      if (!(varargin_1[k] == varargin_2[k])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return p;
}

} // namespace coder

// End of code generation (isequal.cpp)
