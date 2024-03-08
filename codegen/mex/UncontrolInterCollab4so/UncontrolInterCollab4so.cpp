//
// UncontrolInterCollab4so.cpp
//
// Code generation for function 'UncontrolInterCollab4so'
//

// Include files
#include "UncontrolInterCollab4so.h"
#include "UncontrolInterCollab4so_data.h"
#include "UncontrolInterCollab4so_types.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "isequal.h"
#include "ismember.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "unique.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "omp.h"
#include <algorithm>
#include <cstring>

// Type Definitions
struct cell_wrap_3 {
  real_T f1[3];
};

struct struct_T {
  real_T values[20];
};

struct cell_wrap_0 {
  coder::bounded_array<real_T, 20U, 2U> f1;
};

struct cell_wrap_1 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_2 {
  coder::array<real_T, 1U> f1;
};

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    48,                        // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    75,                        // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    87,                        // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    101,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    102,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    103,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    112,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    123,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    156,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    162,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    169,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    199,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    203,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo
    db_emlrtRSI{
        45,         // lineNo
        "ismember", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\ismemb"
        "er.m" // pathName
    };

static emlrtRSInfo wb_emlrtRSI{
    17,    // lineNo
    "max", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\max."
    "m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    38,         // lineNo
    "minOrMax", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\minOrMax.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    77,        // lineNo
    "maximum", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\minOrMax.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    173,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    72,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    64,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    130,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo
    ec_emlrtRSI{
        39,     // lineNo
        "find", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find"
        ".m" // pathName
    };

static emlrtRSInfo ic_emlrtRSI{
    36,    // lineNo
    "cat", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\cat.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    110,        // lineNo
    "cat_impl", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\cat.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    220,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    219,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    232,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    231,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    235,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    236,                   // lineNo
    "findNodeConnections", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

static emlrtRSInfo
    xc_emlrtRSI{
        44,       // lineNo
        "unique", // fcnName
        "C:"
        "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\unique"
        ".m" // pathName
    };

static emlrtRSInfo id_emlrtRSI{
    19,        // lineNo
    "setdiff", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\setdiff."
    "m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    94,          // lineNo
    "eml_setop", // fcnName
    "C:"
    "\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\private\\e"
    "ml_setop.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\min."
    "m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    46,         // lineNo
    "minOrMax", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\minOrMax.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    92,        // lineNo
    "minimum", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\minOrMax.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    208,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    897,                    // lineNo
    "minRealVectorOmitNaN", // fcnName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    134,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    285,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "C:\\ProgramFiles\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\cat.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    57,                        // colNo
    "x",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    87,                        // lineNo
    26,                        // colNo
    "p",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    75,                        // lineNo
    33,                        // colNo
    "pConflict",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtECInfo emlrtECI{
    2,                         // nDims
    192,                       // lineNo
    19,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtBCInfo d_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    172,                       // lineNo
    15,                        // colNo
    "i4coder",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    156,                       // lineNo
    41,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    138,                       // lineNo
    24,                        // colNo
    "AplusB4coder",            // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    53,                        // lineNo
    12,                        // colNo
    "pDis",                    // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    1,                         // iFirst
    20,                        // iLast
    26,                        // lineNo
    43,                        // colNo
    "pConflictStruct",         // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtDCInfo emlrtDCI{
    20,                        // lineNo
    18,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    4                    // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    33,                        // lineNo
    19,                        // colNo
    "pConflict",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    30,                        // lineNo
    19,                        // colNo
    "pConflict",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    82,                        // lineNo
    7,                         // colNo
    "p",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    130,                       // lineNo
    7,                         // colNo
    "B",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    20,                        // lineNo
    29,                        // colNo
    "pConflict",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    50,                        // lineNo
    19,                        // colNo
    "dis2center",              // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    30,                        // lineNo
    9,                         // colNo
    "pConflict",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    51,                        // lineNo
    14,                        // colNo
    "velocity",                // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    52,                        // lineNo
    11,                        // colNo
    "accel",                   // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    20,                        // lineNo
    29,                        // colNo
    "p",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    68,                        // lineNo
    10,                        // colNo
    "rank",                    // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    68,                        // lineNo
    20,                        // colNo
    "sortIndex",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    75,                        // lineNo
    43,                        // colNo
    "sortIndex",               // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    76,                        // lineNo
    35,                        // colNo
    "rank",                    // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    82,                        // lineNo
    5,                         // colNo
    "p",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    20,                        // lineNo
    29,                        // colNo
    "A",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    20,                        // lineNo
    29,                        // colNo
    "B",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    98,                        // lineNo
    26,                        // colNo
    "E",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    101,                       // lineNo
    18,                        // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    124,                       // lineNo
    5,                         // colNo
    "A",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    126,                       // lineNo
    14,                        // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    126,                       // lineNo
    31,                        // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    136,                       // lineNo
    5,                         // colNo
    "A",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    136,                       // lineNo
    5,                         // colNo
    "B",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    136,                       // lineNo
    20,                        // colNo
    "A",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    136,                       // lineNo
    27,                        // colNo
    "B",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    130,                       // lineNo
    5,                         // colNo
    "B",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    140,                       // lineNo
    21,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    140,                       // lineNo
    24,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    158,                       // lineNo
    38,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    158,                       // lineNo
    41,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    158,                       // lineNo
    21,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    158,                       // lineNo
    24,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    141,                       // lineNo
    21,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    141,                       // lineNo
    24,                        // colNo
    "aMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    102,                       // lineNo
    34,                        // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    156,                       // lineNo
    21,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    156,                       // lineNo
    24,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    103,                       // lineNo
    24,                        // colNo
    "matching_columns",        // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    173,                       // lineNo
    13,                        // colNo
    "qMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    173,                       // lineNo
    16,                        // colNo
    "qMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    110,                       // lineNo
    7,                         // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    182,                       // lineNo
    11,                        // colNo
    "pDis",                    // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    182,                       // lineNo
    11,                        // colNo
    "l",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    182,                       // lineNo
    43,                        // colNo
    "v",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    182,                       // lineNo
    51,                        // colNo
    "a",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    182,                       // lineNo
    5,                         // colNo
    "x",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    28,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    30,                        // colNo
    "lMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    41,                        // colNo
    "qMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    43,                        // colNo
    "qMatrix",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    190,                       // lineNo
    3,                         // colNo
    "u",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    191,                       // lineNo
    3,                         // colNo
    "u",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    186,                       // lineNo
    16,                        // colNo
    "u",                       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    193,                       // lineNo
    19,                        // colNo
    "vTargetBySequence",       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    195,                       // lineNo
    27,                        // colNo
    "vTargetBySequence",       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    194,                       // lineNo
    19,                        // colNo
    "vTargetBySequence",       // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    206,                       // lineNo
    19,                        // colNo
    "vTarget",                 // aName
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtECInfo b_emlrtECI{
    1,                     // nDims
    220,                   // lineNo
    22,                    // colNo
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtECInfo c_emlrtECI{
    1,                     // nDims
    232,                   // lineNo
    22,                    // colNo
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    220,                   // lineNo
    95,                    // colNo
    "l",                   // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    220,                   // lineNo
    76,                    // colNo
    "l",                   // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    232,                   // lineNo
    97,                    // colNo
    "l",                   // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    232,                   // lineNo
    78,                    // colNo
    "l",                   // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    220,                   // lineNo
    22,                    // colNo
    "eSchlang",            // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    232,                   // lineNo
    22,                    // colNo
    "eSchlang",            // aName
    "findNodeConnections", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m", // pName
    0                    // checkKind
};

static emlrtRTEInfo n_emlrtRTEI{
    1,                         // lineNo
    18,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    20,                        // lineNo
    29,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    180,                       // lineNo
    13,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    71,                        // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    80,                        // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    82,                        // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    84,                        // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    88,                        // lineNo
    15,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    88,                        // lineNo
    13,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    93,                        // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    94,                        // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    98,                        // lineNo
    26,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    98,                        // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    101,                       // lineNo
    16,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    102,                       // lineNo
    32,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    112,                       // lineNo
    14,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    112,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    120,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    124,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    130,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    132,                       // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    133,                       // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    134,                       // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    136,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    156,                       // lineNo
    29,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    169,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    167,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    165,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    179,                       // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    192,                       // lineNo
    21,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    192,                       // lineNo
    1,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    212,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo vb_emlrtRTEI{
    213,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    223,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    224,                       // lineNo
    5,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    235,                       // lineNo
    33,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    236,                       // lineNo
    35,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    230,                       // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    232,                       // lineNo
    31,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    232,                       // lineNo
    76,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    232,                       // lineNo
    72,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    232,                       // lineNo
    22,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    210,                       // lineNo
    53,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    231,                       // lineNo
    40,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    231,                       // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    218,                       // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    220,                       // lineNo
    31,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    220,                       // lineNo
    74,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    220,                       // lineNo
    70,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    220,                       // lineNo
    22,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    219,                       // lineNo
    38,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    219,                       // lineNo
    9,                         // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    192,                       // lineNo
    19,                        // colNo
    "UncontrolInterCollab4so", // fName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pName
};

static emlrtRSInfo ee_emlrtRSI{
    192,                       // lineNo
    "UncontrolInterCollab4so", // fcnName
    "C:\\Users\\Chen "
    "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollaboration\\Uncontro"
    "lInterCollab4so.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<boolean_T, 1U> &in1,
                             const coder::array<boolean_T, 1U> &in2,
                             const coder::array<boolean_T, 2U> &in3);

static void findNodeConnections(const emlrtStack *sp,
                                const coder::array<real_T, 2U> &eSchlang,
                                const coder::array<real_T, 2U> &l,
                                coder::array<real_T, 1U> &reachable_to_node,
                                coder::array<real_T, 1U> &reachable_from_node);

static void findNodeConnections(const emlrtStack *sp,
                                const coder::array<real_T, 2U> &eSchlang,
                                real_T targetNode, real_T kGen,
                                const coder::array<real_T, 2U> &l,
                                coder::array<real_T, 1U> &reachable_to_node,
                                coder::array<real_T, 1U> &reachable_from_node);

static void plus(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                 const real_T in2_data[], const int32_T in2_size[2]);

// Function Definitions
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<boolean_T, 1U> &in1,
                             const coder::array<boolean_T, 1U> &in2,
                             const coder::array<boolean_T, 2U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(1) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(1);
  }
  in1.set_size(&nc_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(1) != 1);
  if (in3.size(1) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && in3[i * stride_1_0]);
  }
}

static void findNodeConnections(const emlrtStack *sp,
                                const coder::array<real_T, 2U> &eSchlang,
                                const coder::array<real_T, 2U> &l,
                                coder::array<real_T, 1U> &reachable_to_node,
                                coder::array<real_T, 1U> &reachable_from_node)
{
  coder::array<real_T, 2U> c_l;
  coder::array<real_T, 2U> old_reachable_to_target;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> reachable_from_target;
  coder::array<real_T, 2U> reachable_to_target;
  coder::array<real_T, 1U> b_reachable_from_target;
  coder::array<real_T, 1U> b_reachable_to_target;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> r4;
  coder::array<boolean_T, 2U> r2;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_l;
  int32_T iv[2];
  int32_T end;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 35);
  //  初始化可以到达目标节点的节点集合
  reachable_to_target.set_size(&ub_emlrtRTEI, sp, 1, 1);
  reachable_to_target[0] = 0.0;
  old_reachable_to_target.set_size(&vb_emlrtRTEI, sp, 0, 0);
  //  通过循环查找可以到达目标节点的节点集合
  while (covrtLogWhile(
      &emlrtCoverageInstance, 0, 0, 0,
      !coder::isequal(reachable_to_target, old_reachable_to_target))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 36);
    old_reachable_to_target.set_size(&jc_emlrtRTEI, sp,
                                     reachable_to_target.size(0), 1);
    loop_ub = reachable_to_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      old_reachable_to_target[i] = reachable_to_target[i];
    }
    iv[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[0];
    iv[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[1];
    st.site = &kc_emlrtRSI;
    coder::internal::indexShapeCheck(&st, iv, eSchlang.size(0));
    st.site = &kc_emlrtRSI;
    b_reachable_to_target.set_size(&kc_emlrtRTEI, &st, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = eSchlang[i + eSchlang.size(0)];
    }
    b_st.site = &db_emlrtRSI;
    coder::b_isMember(&b_st, b_reachable_to_target, reachable_to_target, r);
    b_l = l[0];
    c_l.set_size(&lc_emlrtRTEI, sp, 1, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      end = static_cast<int32_T>(eSchlang[i] + 1.0);
      if ((end < 1) || (end > l.size(1))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, l.size(1), &rc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_l[i] = l[end - 1] - b_l;
    }
    st.site = &kc_emlrtRSI;
    coder::b_abs(&st, c_l, r1);
    r2.set_size(&mc_emlrtRTEI, sp, 1, r1.size(1));
    loop_ub = r1.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      r2[i] = (r1[i] <= 100.0);
    }
    if ((r.size(0) != r2.size(1)) && ((r.size(0) != 1) && (r2.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(r.size(0), r2.size(1), &b_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r.size(0) == r2.size(1)) {
      r3.set_size(&nc_emlrtRTEI, sp, r.size(0));
      loop_ub = r.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r3[i] = (r[i] && r2[i]);
      }
    } else {
      st.site = &kc_emlrtRSI;
      binary_expand_op(&st, r3, r, r2);
    }
    end = r3.size(0) - 1;
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        loop_ub++;
      }
    }
    r4.set_size(&gc_emlrtRTEI, sp, loop_ub);
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        r4[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    st.site = &lc_emlrtRSI;
    loop_ub = r4.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((r4[i] < 1) || (r4[i] > eSchlang.size(0))) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 1, eSchlang.size(0), &uc_emlrtBCI,
                                      &st);
      }
    }
    b_reachable_to_target.set_size(&oc_emlrtRTEI, &st,
                                   reachable_to_target.size(0) + r4.size(0));
    loop_ub = reachable_to_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = reachable_to_target[i];
    }
    loop_ub = r4.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i + reachable_to_target.size(0)] =
          eSchlang[r4[i] - 1];
    }
    b_st.site = &xc_emlrtRSI;
    coder::unique_vector(&b_st, b_reachable_to_target, b_reachable_from_target);
    reachable_to_target.set_size(&pc_emlrtRTEI, sp,
                                 b_reachable_from_target.size(0), 1);
    loop_ub = b_reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reachable_to_target[i] = b_reachable_from_target[i];
    }
    // ,
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 37);
  //  找到可以从目标节点出发到达的节点集合
  reachable_from_target.set_size(&wb_emlrtRTEI, sp, 1, 1);
  reachable_from_target[0] = 0.0;
  old_reachable_to_target.set_size(&xb_emlrtRTEI, sp, 0, 0);
  //  通过循环查找可以从目标节点出发到达的节点集合
  while (covrtLogWhile(
      &emlrtCoverageInstance, 0, 0, 1,
      !coder::isequal(reachable_from_target, old_reachable_to_target))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 38);
    old_reachable_to_target.set_size(&bc_emlrtRTEI, sp,
                                     reachable_from_target.size(0), 1);
    loop_ub = reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      old_reachable_to_target[i] = reachable_from_target[i];
    }
    iv[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[0];
    iv[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[1];
    st.site = &mc_emlrtRSI;
    coder::internal::indexShapeCheck(&st, iv, eSchlang.size(0));
    st.site = &mc_emlrtRSI;
    b_reachable_to_target.set_size(&cc_emlrtRTEI, &st, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = eSchlang[i];
    }
    b_st.site = &db_emlrtRSI;
    coder::b_isMember(&b_st, b_reachable_to_target, reachable_from_target, r);
    b_l = l[0];
    c_l.set_size(&dc_emlrtRTEI, sp, 1, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      end = static_cast<int32_T>(eSchlang[i + eSchlang.size(0)] + 1.0);
      if ((end < 1) || (end > l.size(1))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, l.size(1), &tc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_l[i] = l[end - 1] - b_l;
    }
    st.site = &mc_emlrtRSI;
    coder::b_abs(&st, c_l, r1);
    r2.set_size(&ec_emlrtRTEI, sp, 1, r1.size(1));
    loop_ub = r1.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      r2[i] = (r1[i] <= 100.0);
    }
    if ((r.size(0) != r2.size(1)) && ((r.size(0) != 1) && (r2.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(r.size(0), r2.size(1), &c_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r.size(0) == r2.size(1)) {
      r3.set_size(&fc_emlrtRTEI, sp, r.size(0));
      loop_ub = r.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r3[i] = (r[i] && r2[i]);
      }
    } else {
      st.site = &mc_emlrtRSI;
      binary_expand_op(&st, r3, r, r2);
    }
    end = r3.size(0) - 1;
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        loop_ub++;
      }
    }
    ia.set_size(&gc_emlrtRTEI, sp, loop_ub);
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        ia[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    st.site = &nc_emlrtRSI;
    loop_ub = ia.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((ia[i] < 1) || (ia[i] > eSchlang.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ia[i], 1, eSchlang.size(0), &vc_emlrtBCI,
                                      &st);
      }
    }
    b_reachable_to_target.set_size(&hc_emlrtRTEI, &st,
                                   reachable_from_target.size(0) + ia.size(0));
    loop_ub = reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = reachable_from_target[i];
    }
    loop_ub = ia.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i + reachable_from_target.size(0)] =
          eSchlang[(ia[i] + eSchlang.size(0)) - 1];
    }
    b_st.site = &xc_emlrtRSI;
    coder::unique_vector(&b_st, b_reachable_to_target, b_reachable_from_target);
    reachable_from_target.set_size(&ic_emlrtRTEI, sp,
                                   b_reachable_from_target.size(0), 1);
    loop_ub = b_reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reachable_from_target[i] = b_reachable_from_target[i];
    }
    // ,
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 39);
  //  返回结果
  st.site = &oc_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  b_reachable_to_target.set_size(&yb_emlrtRTEI, &b_st,
                                 reachable_to_target.size(0));
  loop_ub = reachable_to_target.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_reachable_to_target[i] = reachable_to_target[i];
  }
  c_st.site = &jd_emlrtRSI;
  coder::do_vectors(&c_st, b_reachable_to_target, reachable_to_node, ia,
                    &loop_ub);
  //  排除目标节点
  st.site = &pc_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  b_reachable_to_target.set_size(&ac_emlrtRTEI, &b_st,
                                 reachable_from_target.size(0));
  loop_ub = reachable_from_target.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_reachable_to_target[i] = reachable_from_target[i];
  }
  c_st.site = &jd_emlrtRSI;
  coder::do_vectors(&c_st, b_reachable_to_target, reachable_from_node, ia,
                    &loop_ub);
  //  排除目标节点
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void findNodeConnections(const emlrtStack *sp,
                                const coder::array<real_T, 2U> &eSchlang,
                                real_T targetNode, real_T kGen,
                                const coder::array<real_T, 2U> &l,
                                coder::array<real_T, 1U> &reachable_to_node,
                                coder::array<real_T, 1U> &reachable_from_node)
{
  coder::array<real_T, 2U> c_l;
  coder::array<real_T, 2U> old_reachable_to_target;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> reachable_from_target;
  coder::array<real_T, 2U> reachable_to_target;
  coder::array<real_T, 1U> b_reachable_from_target;
  coder::array<real_T, 1U> b_reachable_to_target;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> r4;
  coder::array<boolean_T, 2U> r2;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_l;
  int32_T iv[2];
  int32_T end;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 1);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 35);
  //  初始化可以到达目标节点的节点集合
  reachable_to_target.set_size(&ub_emlrtRTEI, sp, 1, 1);
  reachable_to_target[0] = targetNode;
  old_reachable_to_target.set_size(&vb_emlrtRTEI, sp, 0, 0);
  //  通过循环查找可以到达目标节点的节点集合
  while (covrtLogWhile(
      &emlrtCoverageInstance, 0, 0, 0,
      !coder::isequal(reachable_to_target, old_reachable_to_target))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 36);
    old_reachable_to_target.set_size(&jc_emlrtRTEI, sp,
                                     reachable_to_target.size(0), 1);
    loop_ub = reachable_to_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      old_reachable_to_target[i] = reachable_to_target[i];
    }
    iv[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[0];
    iv[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[1];
    st.site = &kc_emlrtRSI;
    coder::internal::indexShapeCheck(&st, iv, eSchlang.size(0));
    st.site = &kc_emlrtRSI;
    b_reachable_to_target.set_size(&kc_emlrtRTEI, &st, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = eSchlang[i + eSchlang.size(0)];
    }
    b_st.site = &db_emlrtRSI;
    coder::b_isMember(&b_st, b_reachable_to_target, reachable_to_target, r);
    if ((static_cast<int32_T>(targetNode + 1.0) < 1) ||
        (static_cast<int32_T>(targetNode + 1.0) > l.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(targetNode + 1.0), 1,
                                    l.size(1), &qc_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_l = l[static_cast<int32_T>(targetNode + 1.0) - 1];
    c_l.set_size(&lc_emlrtRTEI, sp, 1, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      end = static_cast<int32_T>(eSchlang[i] + 1.0);
      if ((end < 1) || (end > l.size(1))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, l.size(1), &rc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_l[i] = l[end - 1] - b_l;
    }
    st.site = &kc_emlrtRSI;
    coder::b_abs(&st, c_l, r1);
    r2.set_size(&mc_emlrtRTEI, sp, 1, r1.size(1));
    loop_ub = r1.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      r2[i] = (r1[i] <= kGen);
    }
    if ((r.size(0) != r2.size(1)) && ((r.size(0) != 1) && (r2.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(r.size(0), r2.size(1), &b_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r.size(0) == r2.size(1)) {
      r3.set_size(&nc_emlrtRTEI, sp, r.size(0));
      loop_ub = r.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r3[i] = (r[i] && r2[i]);
      }
    } else {
      st.site = &kc_emlrtRSI;
      binary_expand_op(&st, r3, r, r2);
    }
    end = r3.size(0) - 1;
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        loop_ub++;
      }
    }
    r4.set_size(&gc_emlrtRTEI, sp, loop_ub);
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        r4[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    st.site = &lc_emlrtRSI;
    loop_ub = r4.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((r4[i] < 1) || (r4[i] > eSchlang.size(0))) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 1, eSchlang.size(0), &uc_emlrtBCI,
                                      &st);
      }
    }
    b_reachable_to_target.set_size(&oc_emlrtRTEI, &st,
                                   reachable_to_target.size(0) + r4.size(0));
    loop_ub = reachable_to_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = reachable_to_target[i];
    }
    loop_ub = r4.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i + reachable_to_target.size(0)] =
          eSchlang[r4[i] - 1];
    }
    b_st.site = &xc_emlrtRSI;
    coder::unique_vector(&b_st, b_reachable_to_target, b_reachable_from_target);
    reachable_to_target.set_size(&pc_emlrtRTEI, sp,
                                 b_reachable_from_target.size(0), 1);
    loop_ub = b_reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reachable_to_target[i] = b_reachable_from_target[i];
    }
    // ,
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 37);
  //  找到可以从目标节点出发到达的节点集合
  reachable_from_target.set_size(&wb_emlrtRTEI, sp, 1, 1);
  reachable_from_target[0] = targetNode;
  old_reachable_to_target.set_size(&xb_emlrtRTEI, sp, 0, 0);
  //  通过循环查找可以从目标节点出发到达的节点集合
  while (covrtLogWhile(
      &emlrtCoverageInstance, 0, 0, 1,
      !coder::isequal(reachable_from_target, old_reachable_to_target))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 38);
    old_reachable_to_target.set_size(&bc_emlrtRTEI, sp,
                                     reachable_from_target.size(0), 1);
    loop_ub = reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      old_reachable_to_target[i] = reachable_from_target[i];
    }
    iv[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[0];
    iv[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&l)->size())[1];
    st.site = &mc_emlrtRSI;
    coder::internal::indexShapeCheck(&st, iv, eSchlang.size(0));
    st.site = &mc_emlrtRSI;
    b_reachable_to_target.set_size(&cc_emlrtRTEI, &st, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = eSchlang[i];
    }
    b_st.site = &db_emlrtRSI;
    coder::b_isMember(&b_st, b_reachable_to_target, reachable_from_target, r);
    if ((static_cast<int32_T>(targetNode + 1.0) < 1) ||
        (static_cast<int32_T>(targetNode + 1.0) > l.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(targetNode + 1.0), 1,
                                    l.size(1), &sc_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_l = l[static_cast<int32_T>(targetNode + 1.0) - 1];
    c_l.set_size(&dc_emlrtRTEI, sp, 1, eSchlang.size(0));
    loop_ub = eSchlang.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      end = static_cast<int32_T>(eSchlang[i + eSchlang.size(0)] + 1.0);
      if ((end < 1) || (end > l.size(1))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, l.size(1), &tc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_l[i] = l[end - 1] - b_l;
    }
    st.site = &mc_emlrtRSI;
    coder::b_abs(&st, c_l, r1);
    r2.set_size(&ec_emlrtRTEI, sp, 1, r1.size(1));
    loop_ub = r1.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      r2[i] = (r1[i] <= kGen);
    }
    if ((r.size(0) != r2.size(1)) && ((r.size(0) != 1) && (r2.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(r.size(0), r2.size(1), &c_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r.size(0) == r2.size(1)) {
      r3.set_size(&fc_emlrtRTEI, sp, r.size(0));
      loop_ub = r.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        r3[i] = (r[i] && r2[i]);
      }
    } else {
      st.site = &mc_emlrtRSI;
      binary_expand_op(&st, r3, r, r2);
    }
    end = r3.size(0) - 1;
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        loop_ub++;
      }
    }
    ia.set_size(&gc_emlrtRTEI, sp, loop_ub);
    loop_ub = 0;
    for (int32_T i{0}; i <= end; i++) {
      if (r3[i]) {
        ia[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    st.site = &nc_emlrtRSI;
    loop_ub = ia.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((ia[i] < 1) || (ia[i] > eSchlang.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ia[i], 1, eSchlang.size(0), &vc_emlrtBCI,
                                      &st);
      }
    }
    b_reachable_to_target.set_size(&hc_emlrtRTEI, &st,
                                   reachable_from_target.size(0) + ia.size(0));
    loop_ub = reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i] = reachable_from_target[i];
    }
    loop_ub = ia.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      b_reachable_to_target[i + reachable_from_target.size(0)] =
          eSchlang[(ia[i] + eSchlang.size(0)) - 1];
    }
    b_st.site = &xc_emlrtRSI;
    coder::unique_vector(&b_st, b_reachable_to_target, b_reachable_from_target);
    reachable_from_target.set_size(&ic_emlrtRTEI, sp,
                                   b_reachable_from_target.size(0), 1);
    loop_ub = b_reachable_from_target.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      reachable_from_target[i] = b_reachable_from_target[i];
    }
    // ,
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 39);
  //  返回结果
  st.site = &oc_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  b_reachable_to_target.set_size(&yb_emlrtRTEI, &b_st,
                                 reachable_to_target.size(0));
  loop_ub = reachable_to_target.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_reachable_to_target[i] = reachable_to_target[i];
  }
  c_st.site = &jd_emlrtRSI;
  coder::do_vectors(&c_st, b_reachable_to_target, targetNode, reachable_to_node,
                    ia, &loop_ub);
  //  排除目标节点
  st.site = &pc_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  b_reachable_to_target.set_size(&ac_emlrtRTEI, &b_st,
                                 reachable_from_target.size(0));
  loop_ub = reachable_from_target.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_reachable_to_target[i] = reachable_from_target[i];
  }
  c_st.site = &jd_emlrtRSI;
  coder::do_vectors(&c_st, b_reachable_to_target, targetNode,
                    reachable_from_node, ia, &loop_ub);
  //  排除目标节点
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                 const real_T in2_data[], const int32_T in2_size[2])
{
  coder::array<real_T, 2U> in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in1.size(1) == 1) {
    i = in2_size[1];
  } else {
    i = in1.size(1);
  }
  in2.set_size(&gd_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in2_size[1] != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    in2[i] = in2_data[i * stride_0_1] + in1[i * stride_1_1];
  }
  in1.set_size(&gd_emlrtRTEI, sp, 1, in2.size(1));
  loop_ub = in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void UncontrolInterCollab4so(const emlrtStack *sp, int16_T numOfVehsInt,
                             const real_T dis2center[20],
                             const real_T velocity[20], const real_T accel[20],
                             const struct0_T pConflictStructInt[20],
                             const struct1_T *calibrationVars,
                             real_T vTarget[20])
{
  coder::array<cell_wrap_0, 1U> pConflict;
  coder::array<cell_wrap_1, 2U> B;
  coder::array<cell_wrap_1, 2U> p;
  coder::array<cell_wrap_2, 2U> A;
  coder::array<cell_wrap_3, 2U> b_x;
  coder::array<real_T, 2U> b_eSchlang;
  coder::array<real_T, 2U> eSchlang;
  coder::array<real_T, 2U> i4coder;
  coder::array<real_T, 2U> l;
  coder::array<real_T, 2U> lMatrix;
  coder::array<real_T, 2U> p4coder;
  coder::array<real_T, 2U> u;
  coder::array<real_T, 1U> matching_columns;
  coder::array<real_T, 1U> reachable_from_node;
  coder::array<int32_T, 1U> r1;
  coder::array<uint16_T, 2U> E;
  coder::array<uint16_T, 2U> b_E;
  coder::array<int8_T, 2U> aMatrix;
  coder::array<int8_T, 2U> qMatrix;
  coder::array<boolean_T, 2U> x;
  coder::array<boolean_T, 1U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  struct_T pConflictStruct[20];
  real_T vTarget_data[40];
  real_T a_data[20];
  real_T pDis_data[20];
  real_T v_data[20];
  real_T x_data[20];
  real_T aMax;
  real_T aMin;
  real_T pDis0;
  real_T vMax;
  real_T vMin;
  int32_T iidx_data[20];
  int32_T iidx_size[2];
  int32_T v_size[2];
  int32_T x_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T ex_tmp_tmp;
  int32_T i1;
  int32_T i2;
  int32_T ii_data;
  int32_T loop_ub;
  int32_T trueCount;
  int8_T rank_data[20];
  boolean_T tf;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 0);
  for (int32_T i{0}; i < 20; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 1);
    for (b_i = 0; b_i < 20; b_i++) {
      pConflictStruct[i].values[b_i] = pConflictStructInt[i].values[b_i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 2);
  //  检查 dis2center, velocity, accel 的长度
  //  计算最小长度
  ex_tmp_tmp = numOfVehsInt;
  ii_data = numOfVehsInt;
  if (numOfVehsInt > 20) {
    ii_data = 20;
  }
  //  截取或填充为最小长度
  if (ii_data < 1) {
    loop_ub = 0;
    b_i = 0;
    i1 = 0;
  } else {
    loop_ub = ii_data;
    b_i = ii_data;
    i1 = ii_data;
  }
  if (numOfVehsInt < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(numOfVehsInt), &emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  pConflict.set_size(&n_emlrtRTEI, sp, static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < numOfVehsInt; i2++) {
    if (i2 > pConflict.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, pConflict.size(0) - 1, &m_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    pConflict[i2].f1.size[0] = 0;
    if (i2 > pConflict.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, pConflict.size(0) - 1, &m_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    pConflict[i2].f1.size[1] = 0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  for i = 1:numOfVehs
  //      pConflict{i} = pConflictStruct(i).values;
  //  end
  pConflict.set_size(&o_emlrtRTEI, sp, static_cast<int32_T>(numOfVehsInt));
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 3);
    //  提取 pConflictStruct 中不是 -99 的元素
    if (i + 1 > 20) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, 20, &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  如果有非 -99 的元素，则放入 pConflict
    trueCount = 0;
    for (c_i = 0; c_i < 20; c_i++) {
      if (pConflictStruct[i].values[c_i] != -99.0) {
        trueCount++;
      }
    }
    if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 0,
                   covrtLogMcdc(&emlrtCoverageInstance, 0, 0, 0,
                                !covrtLogCond(&emlrtCoverageInstance, 0, 0, 0,
                                              trueCount == 0)))) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 4);
      trueCount = 0;
      ii_data = 0;
      for (c_i = 0; c_i < 20; c_i++) {
        tf = (pConflictStruct[i].values[c_i] != -99.0);
        if (tf) {
          trueCount++;
          rank_data[ii_data] = static_cast<int8_T>(c_i + 1);
          ii_data++;
        }
      }
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pConflict[i].f1.size[0] = 1;
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pConflict[i].f1.size[1] = trueCount;
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < trueCount; i2++) {
        if (i > pConflict.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1,
                                        &o_emlrtBCI, (emlrtConstCTX)sp);
        }
        pConflict[i].f1.data[i2] = pConflictStruct[i].values[rank_data[i2] - 1];
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 5);
      //  如果所有元素都是 -99，则留空
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &i_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pConflict[i].f1.size[0] = 0;
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &i_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      pConflict[i].f1.size[1] = 0;
      if (i > pConflict.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, pConflict.size(0) - 1, &i_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 6);
  //  生成调用示例的时候，附上一张图片
  //  dis2center=[11,111,1111,4,52];
  vMin = calibrationVars->vMin;
  //  0;
  vMax = calibrationVars->vMax;
  // 20;
  aMin = calibrationVars->aMin;
  // -3;
  aMax = calibrationVars->aMax;
  // 1.5;
  // 0.2;
  // 2; % 设定的阈值
  // 0.15;
  // 0.7;
  // 25;
  //  根据 dis2center 的大小对车辆进行排序
  st.site = &emlrtRSI;
  x_size[0] = 1;
  x_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&dis2center[0], &dis2center[loop_ub], &x_data[0]);
  }
  b_st.site = &n_emlrtRSI;
  coder::internal::sort(&b_st, x_data, x_size, iidx_data, iidx_size);
  x_size[1] = iidx_size[1];
  b_loop_ub = iidx_size[1];
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    x_data[i2] = iidx_data[i2];
  }
  //  根据排序结果重新排列位移、速度和加速度数组
  b_loop_ub = iidx_size[1];
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    c_i = static_cast<int32_T>(x_data[i2]);
    if ((c_i < 1) || (c_i > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub, &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    pDis_data[i2] = dis2center[c_i - 1];
  }
  v_size[0] = 1;
  v_size[1] = iidx_size[1];
  b_loop_ub = iidx_size[1];
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    c_i = static_cast<int32_T>(x_data[i2]);
    if ((c_i < 1) || (c_i > b_i)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, b_i, &p_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    v_data[i2] = velocity[c_i - 1];
  }
  b_loop_ub = iidx_size[1];
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    c_i = static_cast<int32_T>(x_data[i2]);
    if ((c_i < 1) || (c_i > i1)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, i1, &q_emlrtBCI, (emlrtConstCTX)sp);
    }
    a_data[i2] = accel[c_i - 1];
  }
  if (iidx_size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, iidx_size[1], &g_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  pDis0 = dis2center[static_cast<int32_T>(x_data[0]) - 1] - calibrationVars->D;
  p.set_size(&n_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < numOfVehsInt; i2++) {
    if (i2 > p.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, p.size(1) - 1, &r_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    p[p.size(0) * i2].f1.set_size(&n_emlrtRTEI, sp, 1,
                                  p[p.size(0) * i2].f1.size(1));
    if (i2 > p.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, p.size(1) - 1, &r_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    p[p.size(0) * i2].f1.set_size(&n_emlrtRTEI, sp,
                                  p[p.size(0) * i2].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  for i=1:1:numOfVehs
  //      % p{i}=pConflict{sortIndex(i)};
  //      for j=pConflict{sortIndex(i)}
  //          p{i}=[p{i},sortIndex(j)];
  //      end
  //      if isempty(p{i})
  //          p{i}=0;
  //      end
  //  end
  //  获取每个元素在排序后的位置
  if (loop_ub - 1 >= 0) {
    std::memset(&rank_data[0], 0,
                static_cast<uint32_T>(loop_ub) * sizeof(int8_T));
  }
  i2 = iidx_size[1];
  for (int32_T i{0}; i < i2; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 2, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 7);
    if (i + 1 > x_size[1]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, x_size[1], &t_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c_i = static_cast<int8_T>(x_data[i]);
    if ((c_i < 1) || (c_i > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub, &s_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    rank_data[c_i - 1] = static_cast<int8_T>(i + 1);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 2, 0);
  p.set_size(&q_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 3, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 8);
    p4coder.set_size(&r_emlrtRTEI, sp, 1, 0);
    //  []; % 初始化为空数组
    //  p{i}=pConflict{sortIndex(i)};
    for (trueCount = 0; trueCount < ex_tmp_tmp; trueCount++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 4, 1);
      st.site = &b_emlrtRSI;
      if (i + 1 > x_size[1]) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, x_size[1], &u_emlrtBCI, &st);
      }
      i2 = static_cast<int32_T>(x_data[i]);
      if ((static_cast<int8_T>(i2) - 1 < 0) ||
          (static_cast<int8_T>(i2) - 1 > pConflict.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int8_T>(i2) - 1, 0,
                                      pConflict.size(0) - 1, &c_emlrtBCI, &st);
      }
      b_st.site = &db_emlrtRSI;
      tf = coder::isMember(static_cast<real_T>(trueCount) + 1.0,
                           pConflict[static_cast<int8_T>(i2) - 1].f1.data,
                           pConflict[static_cast<int8_T>(i2) - 1].f1.size);
      if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 1, tf)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 9);
        // sortIndex(i)：第i近的车的原本序号
        i2 = p4coder.size(1);
        p4coder.set_size(&n_emlrtRTEI, sp, p4coder.size(0),
                         p4coder.size(1) + 1);
        if (trueCount + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, loop_ub, &v_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        p4coder[i2] = rank_data[trueCount];
        // rank(j)：原本序号为j的车是第几近的
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 4, 0);
    if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 2, p4coder.size(1) == 0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 10);
      p4coder.set_size(&s_emlrtRTEI, sp, 1, 1);
      p4coder[0] = 0.0;
    }
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 11);
    if (i > p.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, p.size(1) - 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    p[p.size(0) * i].f1.set_size(&t_emlrtRTEI, sp, 1,
                                 p[p.size(0) * i].f1.size(1));
    if (i > p.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, p.size(1) - 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    p[p.size(0) * i].f1.set_size(&t_emlrtRTEI, sp, p[p.size(0) * i].f1.size(0),
                                 p4coder.size(1));
    if (i > p.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, p.size(1) - 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_loop_ub = p4coder.size(1);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (i > p.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, p.size(1) - 1, &w_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      p[i].f1[i2] = p4coder[i2];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 3, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 12);
  E.set_size(&u_emlrtRTEI, sp, 0, 2);
  //  [];
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 5, 1);
    i2 = i + 1;
    for (trueCount = 0; trueCount <= i2; trueCount++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 6, 1);
      st.site = &c_emlrtRSI;
      if (i > p.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, p.size(1) - 1, &b_emlrtBCI, &st);
      }
      b_st.site = &db_emlrtRSI;
      tf = coder::isMember(&b_st, static_cast<real_T>(trueCount), p[i].f1);
      if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 3, tf)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 13);
        b_loop_ub = E.size(0);
        b_E.set_size(&v_emlrtRTEI, sp, E.size(0) + 1, 2);
        for (c_i = 0; c_i < 2; c_i++) {
          for (ii_data = 0; ii_data < b_loop_ub; ii_data++) {
            b_E[ii_data + b_E.size(0) * c_i] = E[ii_data + E.size(0) * c_i];
          }
        }
        b_E[E.size(0)] = static_cast<uint16_T>(trueCount);
        b_E[E.size(0) + b_E.size(0)] = static_cast<uint16_T>(i + 1);
        E.set_size(&w_emlrtRTEI, sp, b_E.size(0), 2);
        b_loop_ub = b_E.size(0) * 2;
        for (c_i = 0; c_i < b_loop_ub; c_i++) {
          E[c_i] = b_E[c_i];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 6, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 5, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 14);
  // [];
  eSchlang.set_size(&x_emlrtRTEI, sp, 0, 2);
  // [];
  ii_data = numOfVehsInt + 1;
  l.set_size(&y_emlrtRTEI, sp, 1, ii_data);
  for (i2 = 0; i2 < ii_data; i2++) {
    l[i2] = 0.0;
  }
  l[0] = 1.0;
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    real_T ex;
    int32_T ii_size[2];
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 7, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 15);
    //  找到有向图𝒢𝑁+1中节点i 的所有父节点j，即所有𝑗 ∈ {𝑗|(𝑗, 𝑖) ∈ ℰ𝑁+1}。
    r.set_size(&ab_emlrtRTEI, sp, E.size(0));
    b_loop_ub = E.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      r[i2] = (E[i2 + E.size(0)] == i + 1);
    }
    b_loop_ub = r.size(0) - 1;
    trueCount = 0;
    for (c_i = 0; c_i <= b_loop_ub; c_i++) {
      if (r[c_i]) {
        trueCount++;
      }
    }
    r1.set_size(&n_emlrtRTEI, sp, trueCount);
    ii_data = 0;
    for (c_i = 0; c_i <= b_loop_ub; c_i++) {
      if (r[c_i]) {
        r1[ii_data] = c_i + 1;
        ii_data++;
      }
    }
    b_loop_ub = r1.size(0);
    matching_columns.set_size(&bb_emlrtRTEI, sp, r1.size(0));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if ((r1[i2] < 1) || (r1[i2] > E.size(0))) {
        emlrtDynamicBoundsCheckR2012b(r1[i2], 1, E.size(0), &ab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      matching_columns[i2] = E[r1[i2] - 1];
    }
    //  E
    //  找到节点i 的所有父节点中层数最大的节点k，其层数为𝑙𝑘。
    ii_size[0] = (*(int32_T(*)[2])l.size())[0];
    ii_size[1] = (*(int32_T(*)[2])l.size())[1];
    st.site = &d_emlrtRSI;
    coder::internal::indexShapeCheck(&st, ii_size, r1.size(0));
    st.site = &d_emlrtRSI;
    p4coder.set_size(&cb_emlrtRTEI, &st, 1, matching_columns.size(0));
    b_loop_ub = matching_columns.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      c_i = static_cast<int32_T>(matching_columns[i2]) + 1;
      if (c_i > l.size(1)) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, l.size(1), &bb_emlrtBCI, &st);
      }
      p4coder[i2] = l[c_i - 1];
    }
    b_st.site = &wb_emlrtRSI;
    c_st.site = &xb_emlrtRSI;
    d_st.site = &yb_emlrtRSI;
    ii_data = r1.size(0);
    if (r1.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &ac_emlrtRSI;
    if (r1.size(0) <= 2) {
      if (r1.size(0) == 1) {
        ex = l[static_cast<int32_T>(E[r1[0] - 1])];
      } else if (l[static_cast<int32_T>(E[r1[0] - 1])] <
                 l[static_cast<int32_T>(E[r1[1] - 1])]) {
        ex = l[static_cast<int32_T>(E[r1[1] - 1])];
      } else {
        ex = l[static_cast<int32_T>(E[r1[0] - 1])];
      }
    } else {
      f_st.site = &cc_emlrtRSI;
      f_st.site = &bc_emlrtRSI;
      ex = l[static_cast<int32_T>(E[r1[0] - 1])];
      g_st.site = &dc_emlrtRSI;
      if (r1.size(0) > 2147483646) {
        h_st.site = &v_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (trueCount = 2; trueCount <= ii_data; trueCount++) {
        real_T d;
        d = p4coder[trueCount - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
    ii_size[0] = (*(int32_T(*)[2])l.size())[0];
    ii_size[1] = (*(int32_T(*)[2])l.size())[1];
    st.site = &e_emlrtRSI;
    coder::internal::indexShapeCheck(&st, ii_size, r1.size(0));
    st.site = &e_emlrtRSI;
    x.set_size(&db_emlrtRTEI, &st, 1, matching_columns.size(0));
    b_loop_ub = matching_columns.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      c_i = static_cast<int32_T>(matching_columns[i2]) + 1;
      if (c_i > l.size(1)) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, l.size(1), &sb_emlrtBCI, &st);
      }
      x[i2] = (l[c_i - 1] == ex);
    }
    b_st.site = &ec_emlrtRSI;
    coder::eml_find(&b_st, x, (int32_T *)&ii_data, ii_size);
    st.site = &f_emlrtRSI;
    coder::internal::indexShapeCheck(&st, r1.size(0), ii_size);
    b_loop_ub = ii_size[1];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if ((ii_data < 1) || (ii_data > r1.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ii_data, 1, r1.size(0), &vb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    //      if i==2
    //          matching_columns
    //          l
    //          lk
    //      end
    //  numOfVehs,dis2center,velocity,accel,pConflict,calibrationVars
    if (i + 2 > l.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 2, 1, l.size(1), &yb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    l[i + 1] = ex + 1.0;
    st.site = &g_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    if (ii_size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &c_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    b_loop_ub = eSchlang.size(0);
    b_eSchlang.set_size(&eb_emlrtRTEI, sp, eSchlang.size(0) + 1, 2);
    for (i2 = 0; i2 < 2; i2++) {
      for (c_i = 0; c_i < b_loop_ub; c_i++) {
        b_eSchlang[c_i + b_eSchlang.size(0) * i2] =
            eSchlang[c_i + eSchlang.size(0) * i2];
      }
    }
    b_eSchlang[eSchlang.size(0)] = matching_columns[ii_data - 1];
    b_eSchlang[eSchlang.size(0) + b_eSchlang.size(0)] =
        static_cast<real_T>(i) + 1.0;
    eSchlang.set_size(&fb_emlrtRTEI, sp, b_eSchlang.size(0), 2);
    b_loop_ub = b_eSchlang.size(0) * 2;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      eSchlang[i2] = b_eSchlang[i2];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 7, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 16);
  //  lStrich=l(2:end)
  //  lStrich(rank)
  //  创建一个空的cell数组
  A.set_size(&n_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < numOfVehsInt; i2++) {
    if (i2 > A.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, A.size(1) - 1, &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    A[A.size(0) * i2].f1.set_size(&n_emlrtRTEI, sp, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  B.set_size(&n_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < numOfVehsInt; i2++) {
    if (i2 > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, B.size(1) - 1, &y_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    B[B.size(0) * i2].f1.set_size(&n_emlrtRTEI, sp, 1,
                                  B[B.size(0) * i2].f1.size(1));
    if (i2 > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i2, 0, B.size(1) - 1, &y_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    B[B.size(0) * i2].f1.set_size(&n_emlrtRTEI, sp,
                                  B[B.size(0) * i2].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  A.set_size(&q_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  B.set_size(&q_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (ii_data = 0; ii_data < ex_tmp_tmp; ii_data++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 8, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 17);
    p4coder.set_size(&gb_emlrtRTEI, sp, 1, 0);
    // []; % 初始化为空数组
    st.site = &h_emlrtRSI;
    findNodeConnections(&st, eSchlang, static_cast<real_T>(ii_data) + 1.0,
                        calibrationVars->kGen, l, matching_columns,
                        reachable_from_node);
    b_loop_ub = matching_columns.size(0);
    if (ii_data > A.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ii_data, 0, A.size(1) - 1, &cb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    A[A.size(0) * ii_data].f1.set_size(&hb_emlrtRTEI, sp,
                                       matching_columns.size(0) +
                                           reachable_from_node.size(0));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (ii_data > A.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ii_data, 0, A.size(1) - 1, &cb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      A[ii_data].f1[i2] = matching_columns[i2];
    }
    b_loop_ub = reachable_from_node.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (ii_data > A.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ii_data, 0, A.size(1) - 1, &cb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      A[ii_data].f1[i2 + matching_columns.size(0)] = reachable_from_node[i2];
    }
    for (trueCount = 0; trueCount < ex_tmp_tmp; trueCount++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 9, 1);
      if (ii_data + 2 > l.size(1)) {
        emlrtDynamicBoundsCheckR2012b(ii_data + 2, 1, l.size(1), &db_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (trueCount + 2 > l.size(1)) {
        emlrtDynamicBoundsCheckR2012b(trueCount + 2, 1, l.size(1), &eb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (covrtLogCond(&emlrtCoverageInstance, 0, 0, 1,
                       l[ii_data + 1] == l[trueCount + 1]) &&
          covrtLogCond(&emlrtCoverageInstance, 0, 0, 2, ii_data != trueCount)) {
        covrtLogMcdc(&emlrtCoverageInstance, 0, 0, 1, true);
        covrtLogIf(&emlrtCoverageInstance, 0, 0, 4, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 18);
        i2 = p4coder.size(1);
        p4coder.set_size(&n_emlrtRTEI, sp, p4coder.size(0),
                         p4coder.size(1) + 1);
        p4coder[i2] = static_cast<real_T>(trueCount) + 1.0;
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 0, 0, 1, false);
        covrtLogIf(&emlrtCoverageInstance, 0, 0, 4, false);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 9, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 19);
    if (ii_data > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ii_data, 0, B.size(1) - 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    B[B.size(0) * ii_data].f1.set_size(&ib_emlrtRTEI, sp, 1,
                                       B[B.size(0) * ii_data].f1.size(1));
    if (ii_data > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ii_data, 0, B.size(1) - 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    B[B.size(0) * ii_data].f1.set_size(
        &ib_emlrtRTEI, sp, B[B.size(0) * ii_data].f1.size(0), p4coder.size(1));
    if (ii_data > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ii_data, 0, B.size(1) - 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_loop_ub = p4coder.size(1);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (ii_data > B.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ii_data, 0, B.size(1) - 1, &jb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      B[ii_data].f1[i2] = p4coder[i2];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 8, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 20);
  aMatrix.set_size(&jb_emlrtRTEI, sp, static_cast<int32_T>(numOfVehsInt),
                   static_cast<int32_T>(numOfVehsInt));
  ii_data = numOfVehsInt * numOfVehsInt;
  for (i2 = 0; i2 < ii_data; i2++) {
    aMatrix[i2] = 0;
  }
  lMatrix.set_size(&kb_emlrtRTEI, sp, static_cast<int32_T>(numOfVehsInt),
                   static_cast<int32_T>(numOfVehsInt));
  qMatrix.set_size(&lb_emlrtRTEI, sp, static_cast<int32_T>(numOfVehsInt),
                   static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < ii_data; i2++) {
    qMatrix[i2] = 0;
  }
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 10, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 21);
    p4coder.set_size(&mb_emlrtRTEI, sp, 1, p4coder.size(1));
    if (i > A.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, A.size(1) - 1, &fb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, B.size(1) - 1, &gb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    p4coder.set_size(&mb_emlrtRTEI, sp, p4coder.size(0),
                     A[A.size(0) * i].f1.size(0) + B[B.size(0) * i].f1.size(1));
    if (i > A.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, A.size(1) - 1, &fb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_loop_ub = A[i].f1.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (i > A.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, A.size(1) - 1, &hb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      p4coder[i2] = A[i].f1[i2];
    }
    if (i > B.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, B.size(1) - 1, &gb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_loop_ub = B[i].f1.size(1);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if (i > B.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, B.size(1) - 1, &ib_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (i > A.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, A.size(1) - 1, &fb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      p4coder[i2 + A[i].f1.size(0)] = B[i].f1[i2];
    }
    i2 = p4coder.size(1);
    for (ii_data = 0; ii_data < i2; ii_data++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 11, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 22);
      if (ii_data + 1 > p4coder.size(1)) {
        emlrtDynamicBoundsCheckR2012b(ii_data + 1, 1, p4coder.size(1),
                                      &f_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 5,
                     p4coder[ii_data] != 0.0)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 23);
        if (i + 1 > aMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, aMatrix.size(0), &kb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        c_i = static_cast<int32_T>(p4coder[ii_data]);
        if ((c_i < 1) || (c_i > aMatrix.size(1))) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, aMatrix.size(1), &lb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        aMatrix[i + aMatrix.size(0) * (c_i - 1)] = 1;
        if (c_i > aMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, aMatrix.size(0), &qb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (i + 1 > aMatrix.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, aMatrix.size(1), &rb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        aMatrix[(c_i + aMatrix.size(0) * i) - 1] = 1;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 11, 0);
    //      for j = [(A{i})',B{i}]
    //          if j~=0
    //              aMatrix(i, j) = 1;
    //              aMatrix(j, i) = 1;
    //          end
    //      end
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 10, 0);
  //  对于每一个元素 i 和 j，根据给定的条件进行操作
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 12, 1);
    for (trueCount = 0; trueCount < ex_tmp_tmp; trueCount++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 13, 1);
      if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 6, i == trueCount)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 24);
        if (i + 1 > aMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, aMatrix.size(0), &e_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_loop_ub = aMatrix.size(1);
        u.set_size(&nb_emlrtRTEI, sp, 1, aMatrix.size(1));
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          u[i2] = aMatrix[i + aMatrix.size(0) * i2];
        }
        if (i + 1 > lMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lMatrix.size(0), &tb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (trueCount + 1 > lMatrix.size(1)) {
          emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, lMatrix.size(1),
                                        &ub_emlrtBCI, (emlrtConstCTX)sp);
        }
        st.site = &i_emlrtRSI;
        lMatrix[i + lMatrix.size(0) * trueCount] = coder::sum(&st, u);
      } else {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 25);
        if (i + 1 > aMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, aMatrix.size(0), &mb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (trueCount + 1 > aMatrix.size(1)) {
          emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, aMatrix.size(1),
                                        &nb_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (i + 1 > lMatrix.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lMatrix.size(0), &ob_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (trueCount + 1 > lMatrix.size(1)) {
          emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, lMatrix.size(1),
                                        &pb_emlrtBCI, (emlrtConstCTX)sp);
        }
        lMatrix[i + lMatrix.size(0) * trueCount] =
            -static_cast<real_T>(aMatrix[i + aMatrix.size(0) * trueCount]);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 13, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 12, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 26);
  st.site = &j_emlrtRSI;
  findNodeConnections(&st, eSchlang, l, matching_columns, reachable_from_node);
  //  i4coder=[];
  if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 7,
                 matching_columns.size(0) == 0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 27);
    i4coder.set_size(&qb_emlrtRTEI, sp, 1, reachable_from_node.size(0));
    b_loop_ub = reachable_from_node.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      i4coder[i4coder.size(0) * i2] = reachable_from_node[i2];
    }
  } else if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 8,
                        reachable_from_node.size(0) == 0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 28);
    i4coder.set_size(&pb_emlrtRTEI, sp, 1, matching_columns.size(0));
    b_loop_ub = matching_columns.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      i4coder[i4coder.size(0) * i2] = matching_columns[i2];
    }
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 29);
    st.site = &k_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    if (reachable_from_node.size(0) != matching_columns.size(0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &c_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    i4coder.set_size(&ob_emlrtRTEI, sp, 2, matching_columns.size(0));
    b_loop_ub = matching_columns.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      i4coder[i4coder.size(0) * i2] = matching_columns[i2];
    }
    b_loop_ub = reachable_from_node.size(0);
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      i4coder[i4coder.size(0) * i2 + 1] = reachable_from_node[i2];
    }
  }
  if (i4coder.size(1) == 0) {
    ii_data = 0;
  } else if (i4coder.size(0) > i4coder.size(1)) {
    ii_data = 2;
  } else {
    ii_data = i4coder.size(1);
  }
  for (trueCount = 0; trueCount < ii_data; trueCount++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 14, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 30);
    i2 = i4coder.size(0) * i4coder.size(1);
    if (trueCount + 1 > i2) {
      emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, i2, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i2 = static_cast<int32_T>(i4coder[trueCount]);
    if ((i2 < 1) || (i2 > qMatrix.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, qMatrix.size(0), &wb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c_i = static_cast<int32_T>(i4coder[trueCount]);
    if ((c_i < 1) || (c_i > qMatrix.size(1))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, qMatrix.size(1), &xb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    qMatrix[(i2 + qMatrix.size(0) * (c_i - 1)) - 1] = 1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 14, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 31);
  //  for i = [reachable_to_node0, reachable_from_node0]'
  //      qMatrix(i, i) = 1;
  //  end
  u.set_size(&rb_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (i2 = 0; i2 < ex_tmp_tmp; i2++) {
    u[i2] = 0.0;
  }
  b_x.set_size(&q_emlrtRTEI, sp, 1, static_cast<int32_T>(numOfVehsInt));
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 15, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 32);
    if (i + 1 > x_size[1]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, x_size[1], &ac_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i + 2 > l.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 2, 1, l.size(1), &bc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i > b_x.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_x.size(1) - 1, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_x[i].f1[0] =
        (pDis0 - pDis_data[i]) - calibrationVars->D * (l[0] - l[i + 1]);
    if (i + 1 > x_size[1]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, x_size[1], &cc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i > b_x.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_x.size(1) - 1, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_x[i].f1[1] = v_data[i] - vMax;
    if (i + 1 > x_size[1]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, x_size[1], &dc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i > b_x.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_x.size(1) - 1, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_x[i].f1[2] = a_data[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 15, 0);
  for (int32_T i{0}; i < ex_tmp_tmp; i++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 16, 1);
    for (trueCount = 0; trueCount < ex_tmp_tmp; trueCount++) {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 17, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 33);
      if (i + 1 > lMatrix.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, lMatrix.size(0), &fc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (trueCount + 1 > lMatrix.size(1)) {
        emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, lMatrix.size(1),
                                      &gc_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (i + 1 > qMatrix.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, qMatrix.size(0), &hc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (trueCount + 1 > qMatrix.size(1)) {
        emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, qMatrix.size(1),
                                      &ic_emlrtBCI, (emlrtConstCTX)sp);
      }
      pDis0 = lMatrix[i + lMatrix.size(0) * trueCount] +
              static_cast<real_T>(qMatrix[i + qMatrix.size(0) * trueCount]);
      if (trueCount > b_x.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 0, b_x.size(1) - 1, &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (i + 1 > u.size(1)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, u.size(1), &lc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      u[i] = u[i] - ((pDis0 * calibrationVars->kp * b_x[trueCount].f1[0] +
                      pDis0 * calibrationVars->kv * b_x[trueCount].f1[1]) +
                     pDis0 * 0.0 * b_x[trueCount].f1[2]);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 17, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 16, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 34);
  //  将数组 u 中的所有元素限制在 [aMin, aMax] 范围内
  b_loop_ub = u.size(1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (u[i] < aMin) {
      if (i + 1 > u.size(1)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, u.size(1), &jc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      u[i] = aMin;
    }
  }
  b_loop_ub = u.size(1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (u[i] > aMax) {
      if (i + 1 > u.size(1)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, u.size(1), &kc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      u[i] = aMax;
    }
  }
  u.set_size(&sb_emlrtRTEI, sp, 1, u.size(1));
  b_loop_ub = u.size(1) - 1;
  for (i2 = 0; i2 <= b_loop_ub; i2++) {
    u[i2] = u[i2] * calibrationVars->dt;
  }
  if ((iidx_size[1] != u.size(1)) &&
      ((iidx_size[1] != 1) && (u.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(iidx_size[1], u.size(1), &emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (iidx_size[1] == u.size(1)) {
    b_loop_ub = iidx_size[1] - 1;
    u.set_size(&tb_emlrtRTEI, sp, 1, iidx_size[1]);
    for (i2 = 0; i2 <= b_loop_ub; i2++) {
      u[i2] = v_data[i2] + u[i2];
    }
  } else {
    st.site = &ee_emlrtRSI;
    plus(&st, u, v_data, v_size);
  }
  b_loop_ub = u.size(1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (u[i] < vMin) {
      if (i + 1 > u.size(1)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, u.size(1), &mc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      u[i] = vMin;
    }
  }
  b_loop_ub = u.size(1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (u[i] > vMax) {
      if (i + 1 > u.size(1)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, u.size(1), &oc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      u[i] = vMax;
    }
  }
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_i = rank_data[i2];
    if ((c_i < 1) || (c_i > u.size(1))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, u.size(1), &nc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  // rank(j)：原本序号为j的车是第几近的
  //  u*dt
  //  设置填充值为-90
  st.site = &l_emlrtRSI;
  b_st.site = &xd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  d_st.site = &ae_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  f_st.site = &ce_emlrtRSI;
  g_st.site = &bc_emlrtRSI;
  ii_data = loop_ub;
  if (loop_ub > static_cast<int8_T>(b_i)) {
    ii_data = static_cast<int8_T>(b_i);
  }
  if (ii_data > static_cast<int8_T>(i1)) {
    ii_data = static_cast<int8_T>(i1);
  }
  //  填充 dis2center, velocity, accel 至长度为 20
  st.site = &m_emlrtRSI;
  coder::repmat(&st, 20.0 - static_cast<real_T>(ii_data), x_data, x_size);
  ii_data = loop_ub + x_size[1];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    vTarget_data[b_i] = u[rank_data[b_i] - 1];
  }
  b_loop_ub = x_size[1];
  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    vTarget_data[b_i + loop_ub] = x_data[b_i];
  }
  //  确保数组长度正好为 20，如果原本就超过 20，则截取前 20 个元素
  for (b_i = 0; b_i < 20; b_i++) {
    if (b_i + 1 > ii_data) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii_data, &pc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    vTarget[b_i] = vTarget_data[b_i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

// End of code generation (UncontrolInterCollab4so.cpp)
