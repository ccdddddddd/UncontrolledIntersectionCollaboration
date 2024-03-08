//
// UncontrolInterCollab4so_initialize.cpp
//
// Code generation for function 'UncontrolInterCollab4so_initialize'
//

// Include files
#include "UncontrolInterCollab4so_initialize.h"
#include "UncontrolInterCollab4so_data.h"
#include "_coder_UncontrolInterCollab4so_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void UncontrolInterCollab4so_once();

// Function Definitions
static void UncontrolInterCollab4so_once()
{
  const int32_T postfix_exprs_0_1[3]{0, 1, -3};
  const int32_T cond_ends_0_1[2]{3536, 3553};
  const int32_T cond_starts_0_1[2]{3513, 3540};
  const int32_T postfix_exprs_0_0[2]{0, -1};
  const int32_T cond_ends_0_0{983};
  const int32_T cond_starts_0_0{955};
  mex_InitInfAndNan();
  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  // Initialize Coverage Information
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Chen "
                  "Deng\\Desktop\\CodeManage\\UncontrolledIntersectionCollabora"
                  "tion\\UncontrolInterCollab4so.m",
                  0U, 2U, 40U, 9U, 0U, 0U, 0U, 18U, 2U, 3U, 2U);
  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "UncontrolInterCollab4so", 0, -1,
               5652);
  covrtFcnInit(&emlrtCoverageInstance, 0U, 1U, "findNodeConnections", 5653, -1,
               7019);
  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 34U, 5121, -1, 5646);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 33U, 5022, -1, 5073);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 32U, 4913, -1, 4965);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 31U, 4824, -1, 4888);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 30U, 4693, -1, 4734);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 29U, 4599, -1, 4651);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 28U, 4561, -1, 4589);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 27U, 4489, -1, 4519);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 26U, 4356, -1, 4439);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 25U, 4300, -1, 4331);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 24U, 4239, -1, 4274);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 23U, 3901, -1, 3950);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 22U, 3849, -1, 3872);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 21U, 3770, -1, 3798);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 20U, 3638, -1, 3745);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 19U, 3611, -1, 3633);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 18U, 3566, -1, 3586);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 17U, 3255, -1, 3477);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 16U, 3174, -1, 3221);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 15U, 2641, -1, 3119);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 14U, 2472, -1, 2555);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 13U, 2437, -1, 2447);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 12U, 2340, -1, 2354);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 11U, 2321, -1, 2335);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 10U, 2298, -1, 2308);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 9U, 2195, -1, 2221);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 8U, 1983, -1, 2050);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 7U, 1931, -1, 1954);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 6U, 1155, -1, 1898);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 1072, -1, 1090);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 992, -1, 1027);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 826, -1, 908);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 372, -1, 688);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 265, -1, 330);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 116, -1, 226);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 39U, 6856, -1, 7006);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 38U, 6583, -1, 6832);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 37U, 6312, -1, 6475);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 36U, 6036, -1, 6274);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 35U, 5781, -1, 5936);
  // Initialize If Information
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 951, 983, 1032, 1098);
  covrtIfInit(&emlrtCoverageInstance, 0U, 1U, 2119, 2157, -1, 2257);
  covrtIfInit(&emlrtCoverageInstance, 0U, 2U, 2270, 2289, -1, 2316);
  covrtIfInit(&emlrtCoverageInstance, 0U, 3U, 2404, 2424, -1, 2459);
  covrtIfInit(&emlrtCoverageInstance, 0U, 4U, 3510, 3553, -1, 3598);
  covrtIfInit(&emlrtCoverageInstance, 0U, 5U, 3881, 3888, -1, 3962);
  covrtIfInit(&emlrtCoverageInstance, 0U, 6U, 4217, 4226, 4283, 4343);
  covrtIfInit(&emlrtCoverageInstance, 0U, 7U, 4454, 4484, 4520, 4655);
  covrtIfInit(&emlrtCoverageInstance, 0U, 8U, 4520, 4556, 4590, 4655);
  // Initialize MCDC Information
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 0U, 954, 983, 1, 0,
                (int32_T *)&cond_starts_0_0, (int32_T *)&cond_ends_0_0, 2,
                &postfix_exprs_0_0[0]);
  covrtMcdcInit(&emlrtCoverageInstance, 0U, 1U, 3513, 3553, 2, 1,
                &cond_starts_0_1[0], &cond_ends_0_1[0], 3,
                &postfix_exprs_0_1[0]);
  // Initialize For Information
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 227, 260, 334);
  covrtForInit(&emlrtCoverageInstance, 0U, 1U, 765, 784, 1102);
  covrtForInit(&emlrtCoverageInstance, 0U, 2U, 1899, 1926, 1958);
  covrtForInit(&emlrtCoverageInstance, 0U, 3U, 1959, 1978, 2339);
  covrtForInit(&emlrtCoverageInstance, 0U, 4U, 2091, 2110, 2265);
  covrtForInit(&emlrtCoverageInstance, 0U, 5U, 2360, 2379, 2471);
  covrtForInit(&emlrtCoverageInstance, 0U, 6U, 2384, 2395, 2467);
  covrtForInit(&emlrtCoverageInstance, 0U, 7U, 2556, 2575, 3123);
  covrtForInit(&emlrtCoverageInstance, 0U, 8U, 3222, 3250, 3637);
  covrtForInit(&emlrtCoverageInstance, 0U, 9U, 3482, 3501, 3606);
  covrtForInit(&emlrtCoverageInstance, 0U, 10U, 3746, 3765, 4136);
  covrtForInit(&emlrtCoverageInstance, 0U, 11U, 3803, 3840, 3970);
  covrtForInit(&emlrtCoverageInstance, 0U, 12U, 4165, 4184, 4355);
  covrtForInit(&emlrtCoverageInstance, 0U, 13U, 4189, 4208, 4351);
  covrtForInit(&emlrtCoverageInstance, 0U, 14U, 4656, 4688, 4738);
  covrtForInit(&emlrtCoverageInstance, 0U, 15U, 4889, 4908, 4969);
  covrtForInit(&emlrtCoverageInstance, 0U, 16U, 4970, 4989, 5085);
  covrtForInit(&emlrtCoverageInstance, 0U, 17U, 4994, 5013, 5081);
  // Initialize While Information
  covrtWhileInit(&emlrtCoverageInstance, 0U, 0U, 5967, 6027, 6282);
  covrtWhileInit(&emlrtCoverageInstance, 0U, 1U, 6510, 6574, 6840);
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void UncontrolInterCollab4so_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    UncontrolInterCollab4so_once();
  }
}

// End of code generation (UncontrolInterCollab4so_initialize.cpp)
