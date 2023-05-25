/*
 * main_scanner.c
 *
 * Code generation for function 'main_scanner'
 *
 */

/* Include files */
#include "main_scanner.h"
#include "filesave_ceval.h"
#include "main_scanner_data.h"
#include "main_scanner_emxutil.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"
#include "sprintf.h"
#include "tone_search.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    8,              /* lineNo */
    "main_scanner", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m" /* pathName
                                                                       */
};

static emlrtRSInfo b_emlrtRSI = {
    22,             /* lineNo */
    "main_scanner", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m" /* pathName
                                                                       */
};

static emlrtRSInfo d_emlrtRSI = {
    33,             /* lineNo */
    "main_scanner", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m" /* pathName
                                                                       */
};

static emlrtRSInfo f_emlrtRSI = {
    44,             /* lineNo */
    "main_scanner", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m" /* pathName
                                                                       */
};

static emlrtBCInfo emlrtBCI = {
    1,              /* iFirst */
    100,            /* iLast */
    9,              /* lineNo */
    21,             /* colNo */
    "Out",          /* aName */
    "main_scanner", /* fName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m", /* pName
                                                                        */
    3 /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    1,              /* lineNo */
    25,             /* colNo */
    "main_scanner", /* fName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\main_scanner.m" /* pName
                                                                       */
};

/* Function Definitions */
void main_scanner(main_scannerStackData *SD, const emlrtStack *sp,
                  real_T Signal[1650001], real_T Out[300], real_T FftS[6600000])
{
  emlrtStack st;
  emxArray_char_T *kb_emlrtRSI;
  emxArray_char_T *lb_emlrtRSI;
  emxArray_char_T *mb_emlrtRSI;
  real_T dv[2];
  real_T Am;
  real_T a;
  real_T f;
  real_T p;
  int32_T Out_tmp;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  /*  scanner function */
  Am = 1.0;
  a = 0.0;
  f = 0.0;
  p = 0.0;
  i = 0;
  /*  initial assignments to enter the search and subtract tone loop */
  memset(&Out[0], 0, 300U * sizeof(real_T));
  memset(&FftS[0], 0, 6600000U * sizeof(real_T));
  /*         %% The main cycle of searching and subtracting the tone of maximum
   * amplitude */
  emxInit_char_T(sp, &kb_emlrtRSI, &b_emlrtRTEI);
  emxInit_char_T(sp, &lb_emlrtRSI, &b_emlrtRTEI);
  emxInit_char_T(sp, &mb_emlrtRSI, &b_emlrtRTEI);
  while (covrtLogWhile(&emlrtCoverageInstance, 0U, 0U, 0, Am > 1.0E-6)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
    /*  if the amplitude of the subtraction is greater than the specified
     * threshold , then we look for and subtract the next tone */
    st.site = &emlrtRSI;
    tone_search(SD, &st, Signal, &a, &f, &p, FftS, &Am);
    /*  tone search and subtraction function */
    i++;
    if (i > 100) {
      emlrtDynamicBoundsCheckR2012b(101, 1, 100, &emlrtBCI, (emlrtCTX)sp);
    }
    Out_tmp = 3 * (i - 1);
    Out[Out_tmp] = a;
    Out[Out_tmp + 1] = f;
    Out[Out_tmp + 2] = p;
    /*  fill the output array : amplitude , frequency , phase */
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, false);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3U);
    st.site = &b_emlrtRSI;
    b_sprintf(&st, i, kb_emlrtRSI);
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, false);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5U);
    dv[0] = 1.0;
    dv[1] = 1.650001E+6;
    filesave_ceval(dv);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6U);
    st.site = &d_emlrtRSI;
    b_sprintf(&st, i, lb_emlrtRSI);
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, false);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8U);
    dv[0] = 1.0;
    dv[1] = 6.6E+6;
    filesave_ceval(dv);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9U);
    st.site = &f_emlrtRSI;
    b_sprintf(&st, i, mb_emlrtRSI);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, false);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11U);
    dv[0] = 1.0;
    dv[1] = 159.0;
    filesave_ceval(dv);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_char_T(sp, &mb_emlrtRSI);
  emxFree_char_T(sp, &lb_emlrtRSI);
  emxFree_char_T(sp, &kb_emlrtRSI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (main_scanner.c) */
