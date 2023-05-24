/*
 * filesave_ceval.c
 *
 * Code generation for function 'filesave_ceval'
 *
 */

/* Include files */
#include "filesave_ceval.h"
#include "main_scanner_data.h"
#include "rt_nonfinite.h"
#include "filesave.h"
#include "mwmathutil.h"

/* Function Definitions */
void filesave_ceval(const real_T sz[2])
{
  real_T d;
  int32_T i;
  covrtLogFcn(&emlrtCoverageInstance, 4U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 0U);
  /* ----------------------------------- */
  /* columnwise */
  /* ----------------------------------- */
  covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 0, false);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 1U);
  /* path='c:\prezerv\'; */
  /* coder.updateBuildInfo('addIncludePaths','$(START_DIR)\codegen\lib\combineXY');
   */
  /* coder.cinclude('myabsval_initialize.h'); */
  /* coder.cinclude('myabsval.h'); */
  /* coder.cinclude('myabsval_terminate.h'); */
  /* void filesave(const double *data, int  size1,int size2, char* path, char
   * *filename); */
  /* s1=int32(0); */
  /* [s1,s2]=sz;%size(data); */
  covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 1, false);
  covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 3U);
  d = muDoubleScalarRound(sz[1]);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      i = (int32_T)d;
    } else {
      i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    i = MAX_int32_T;
  } else {
    i = 0;
  }
  if (covrtLogIf(&emlrtCoverageInstance, 4U, 0U, 2, i < 1)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 4U, 4U);
  }
  /*    ActVal2=[]; */
  /*    ActVal2(1:s1i,1:s2i)=data(1:s1i,1:s2i); */
  /*  coder.ceval('filesave',
   * coder.ref(data),s1i,s2i,coder.ref(cpath),[filename,0],cast(t,"int32")); */
  /*  coder.ceval('filecomp', coder.ref(cpath),[filename,0]); */
}

/* End of code generation (filesave_ceval.c) */
