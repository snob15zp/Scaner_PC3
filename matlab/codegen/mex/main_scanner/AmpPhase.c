/*
 * AmpPhase.c
 *
 * Code generation for function 'AmpPhase'
 *
 */

/* Include files */
#include "AmpPhase.h"
#include "cosd.h"
#include "main_scanner_data.h"
#include "rt_nonfinite.h"
#include "sind.h"

/* Function Definitions */
real_T AmpPhase(const emlrtStack *sp, const real_T Signal[1650001], real_T f)
{
  real_T d;
  real_T d1;
  real_T d2;
  real_T sc;
  real_T ss;
  int32_T i;
  covrtLogFcn(&emlrtCoverageInstance, 3U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 0U);
  sc = 0.0;
  ss = 0.0;
  /*  initial assignments to amounts */
  for (i = 0; i < 1650001; i++) {
    covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 1U);
    /*  number of time array indexes Tm*Fd+1 */
    d = f * 360.0 * (real_T)i / 2.5E+6;
    d1 = d;
    b_cosd(&d1);
    d2 = Signal[i];
    sc += d2 * d1;
    /*  the first sum of the vector */
    b_sind(&d);
    ss += d2 * d;
    /*  second vector sum */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 3U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 3U, 2U);
  return sc * sc + ss * ss;
  /*  variance function - sum of squares of vector sums */
}

/* End of code generation (AmpPhase.c) */
