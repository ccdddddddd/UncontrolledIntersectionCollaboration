//
// _coder_UncontrolInterCollab4so_api.cpp
//
// Code generation for function '_coder_UncontrolInterCollab4so_api'
//

// Include files
#include "_coder_UncontrolInterCollab4so_api.h"
#include "UncontrolInterCollab4so.h"
#include "UncontrolInterCollab4so_data.h"
#include "UncontrolInterCollab4so_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               int16_T ret[20]);

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *dis2center,
                                   const char_T *identifier))[20];

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[20];

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static int16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[20];

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *pConflictStructInt,
                             const char_T *identifier, struct0_T y[20]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             struct0_T y[20]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, int16_T y[20]);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *calibrationVars,
                             const char_T *identifier, struct1_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y);

static int16_T emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *numOfVehsInt,
                                const char_T *identifier);

static int16_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId);

static const mxArray *emlrt_marshallOut(const real_T u[20]);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, int16_T ret[20])
{
  static const int32_T dims[2]{1, 20};
  int16_T(*r)[20];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int16", false, 2U,
                          (const void *)&dims[0]);
  r = (int16_T(*)[20])emlrtMxGetData(src);
  for (int32_T i{0}; i < 20; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *dis2center,
                                   const char_T *identifier))[20]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[20];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(dis2center), &thisId);
  emlrtDestroyArray(&dis2center);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[20]
{
  real_T(*y)[20];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int16_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int16", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int16_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[20]
{
  static const int32_T dims[2]{1, 20};
  real_T(*ret)[20];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  ret = (real_T(*)[20])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *pConflictStructInt,
                             const char_T *identifier, struct0_T y[20])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(pConflictStructInt), &thisId, y);
  emlrtDestroyArray(&pConflictStructInt);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             struct0_T y[20])
{
  static const int32_T dims[2]{1, 20};
  static const char_T *fieldNames{"values"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 1,
                         (const char_T **)&fieldNames, 2U,
                         (const void *)&dims[0]);
  for (int32_T i{0}; i < 20; i++) {
    thisId.fIdentifier = "values";
    emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, i, 0, "values")),
        &thisId, y[i].values);
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, int16_T y[20])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *calibrationVars,
                             const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(calibrationVars), &thisId, y);
  emlrtDestroyArray(&calibrationVars);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[9]{"vMin", "vMax", "aMin", "aMax", "dt",
                                     "kGen", "kp",   "kv",   "D"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 9,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "vMin";
  y->vMin = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "vMin")),
      &thisId);
  thisId.fIdentifier = "vMax";
  y->vMax = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "vMax")),
      &thisId);
  thisId.fIdentifier = "aMin";
  y->aMin = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "aMin")),
      &thisId);
  thisId.fIdentifier = "aMax";
  y->aMax = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "aMax")),
      &thisId);
  thisId.fIdentifier = "dt";
  y->dt = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "dt")),
      &thisId);
  thisId.fIdentifier = "kGen";
  y->kGen = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "kGen")),
      &thisId);
  thisId.fIdentifier = "kp";
  y->kp = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "kp")),
      &thisId);
  thisId.fIdentifier = "kv";
  y->kv = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "kv")),
      &thisId);
  thisId.fIdentifier = "D";
  y->D = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "D")),
      &thisId);
  emlrtDestroyArray(&u);
}

static int16_T emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *numOfVehsInt,
                                const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  int16_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(numOfVehsInt), &thisId);
  emlrtDestroyArray(&numOfVehsInt);
  return y;
}

static int16_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId)
{
  int16_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[20])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{1, 20};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

void UncontrolInterCollab4so_api(const mxArray *const prhs[6],
                                 const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T pConflictStructInt[20];
  struct1_T calibrationVars;
  real_T(*accel)[20];
  real_T(*dis2center)[20];
  real_T(*vTarget)[20];
  real_T(*velocity)[20];
  int16_T numOfVehsInt;
  st.tls = emlrtRootTLSGlobal;
  vTarget = (real_T(*)[20])mxMalloc(sizeof(real_T[20]));
  // Marshall function inputs
  numOfVehsInt = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "numOfVehsInt");
  dis2center = b_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "dis2center");
  velocity = b_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "velocity");
  accel = b_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "accel");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "pConflictStructInt",
                   pConflictStructInt);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "calibrationVars",
                   &calibrationVars);
  // Invoke the target function
  UncontrolInterCollab4so(&st, numOfVehsInt, *dis2center, *velocity, *accel,
                          pConflictStructInt, &calibrationVars, *vTarget);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*vTarget);
}

// End of code generation (_coder_UncontrolInterCollab4so_api.cpp)
