/*
 * main_scanner_initialize.c
 *
 * Code generation for function 'main_scanner_initialize'
 *
 */

/* Include files */
#include "main_scanner_initialize.h"
#include "_coder_main_scanner_mex.h"
#include "main_scanner_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void main_scanner_once(void);

/* Function Definitions */
static void main_scanner_once(void)
{
  mex_InitInfAndNan();
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(
      &emlrtCoverageInstance,
      "D:\\user\\DropBox_Nsel\\ZERDLab "
      "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m",
      0U, 1U, 12U, 6U, 0U, 0U, 0U, 0U, 1U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "main_scanner", 0, -1, 2584);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 11U, 2463, -1, 2553);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 10U, 2347, -1, 2437);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 9U, 2075, -1, 2300);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 8U, 1966, -1, 2052);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 7U, 1854, -1, 1940);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 6U, 1619, -1, 1705);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 1507, -1, 1597);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 1391, -1, 1481);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1123, -1, 1242);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 848, -1, 936);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 498, -1, 656);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 69, -1, 244);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 721, 746, -1, 968);
  covrtIfInit(&emlrtCoverageInstance, 0U, 1U, 977, 1002, -1, 1114);
  covrtIfInit(&emlrtCoverageInstance, 0U, 2U, 1040, 1060, -1, 1102);
  covrtIfInit(&emlrtCoverageInstance, 0U, 3U, 1353, 1378, 1490, 1609);
  covrtIfInit(&emlrtCoverageInstance, 0U, 4U, 1816, 1841, 1949, 2064);
  covrtIfInit(&emlrtCoverageInstance, 0U, 5U, 2309, 2334, 2446, 2565);
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 0U, 0U, 334, 352, 2584);
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(
      &emlrtCoverageInstance,
      "D:\\user\\DropBox_Nsel\\ZERDLab "
      "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\globalconst.m",
      1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "globalconst", 0, -1, 823);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 113, -1, 818);
  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(
      &emlrtCoverageInstance,
      "D:\\user\\DropBox_Nsel\\ZERDLab "
      "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m",
      2U, 1U, 7U, 1U, 0U, 0U, 0U, 1U, 1U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 2U, 0U, "tone_search", 0, -1, 2721);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 3U, 1301, -1, 1326);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 2U, 1250, -1, 1275);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 1U, 1109, -1, 1160);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 6U, 2161, -1, 2682);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 5U, 1696, -1, 2033);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 4U, 1415, -1, 1581);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 0U, 119, -1, 999);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 2U, 0U, 1169, 1177, 1284, 1338);
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 2U, 0U, 1625, 1641, 2083);
  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 2U, 0U, 1009, 1035, 1346);
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 2U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "D:\\user\\DropBox_Nsel\\ZERDLab "
                  "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\AmpPhase.m",
                  3U, 1U, 3U, 0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 3U, 0U, "AmpPhase", 0, -1, 442);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 3U, 2U, 359, -1, 371);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3U, 1U, 197, -1, 318);
  covrtBasicBlockInit(&emlrtCoverageInstance, 3U, 0U, 46, -1, 56);
  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 3U, 0U, 115, 131, 350);
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 3U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(
      &emlrtCoverageInstance,
      "D:\\user\\DropBox_Nsel\\ZERDLab "
      "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\filesave_ceval.m",
      4U, 1U, 5U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 4U, 0U, "filesave_ceval", 0, -1, 1096);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 4U, 4U, 843, -1, 863);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4U, 3U, 801, -1, 825);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4U, 2U, 772, -1, 792);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4U, 1U, 283, -1, 754);
  covrtBasicBlockInit(&emlrtCoverageInstance, 4U, 0U, 141, -1, 163);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 4U, 0U, 164, 189, 253, 1092);
  covrtIfInit(&emlrtCoverageInstance, 4U, 1U, 757, 765, -1, 798);
  covrtIfInit(&emlrtCoverageInstance, 4U, 2U, 828, 836, -1, 869);
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 4U);
}

void main_scanner_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    main_scanner_once();
  }
}

/* End of code generation (main_scanner_initialize.c) */
