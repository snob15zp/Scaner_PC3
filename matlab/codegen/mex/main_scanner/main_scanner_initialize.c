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
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "main_scanner", 0, -1, 2581);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 11U, 2460, -1, 2550);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 10U, 2344, -1, 2434);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 9U, 2072, -1, 2297);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 8U, 1963, -1, 2049);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 7U, 1851, -1, 1937);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 6U, 1616, -1, 1702);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 1504, -1, 1594);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 1388, -1, 1478);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1120, -1, 1239);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 843, -1, 931);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 496, -1, 651);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 69, -1, 242);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 716, 741, -1, 963);
  covrtIfInit(&emlrtCoverageInstance, 0U, 1U, 972, 997, -1, 1111);
  covrtIfInit(&emlrtCoverageInstance, 0U, 2U, 1035, 1057, -1, 1099);
  covrtIfInit(&emlrtCoverageInstance, 0U, 3U, 1350, 1375, 1487, 1606);
  covrtIfInit(&emlrtCoverageInstance, 0U, 4U, 1813, 1838, 1946, 2061);
  covrtIfInit(&emlrtCoverageInstance, 0U, 5U, 2306, 2331, 2443, 2562);
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 0U, 0U, 332, 350, 2581);
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
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "globalconst", 0, -1, 822);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 111, -1, 790);
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
      2U, 1U, 8U, 1U, 0U, 0U, 0U, 2U, 1U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 2U, 0U, "tone_search", 0, -1, 2812);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 4U, 1392, -1, 1417);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 3U, 1341, -1, 1366);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 2U, 1200, -1, 1251);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 7U, 2252, -1, 2773);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 6U, 1787, -1, 2124);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 5U, 1506, -1, 1672);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 1U, 339, -1, 1090);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 0U, 220, -1, 271);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 2U, 0U, 1260, 1268, 1375, 1429);
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 2U, 0U, 116, 140, 279);
  covrtForInit(&emlrtCoverageInstance, 2U, 1U, 1716, 1732, 2174);
  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 2U, 0U, 1100, 1126, 1437);
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
