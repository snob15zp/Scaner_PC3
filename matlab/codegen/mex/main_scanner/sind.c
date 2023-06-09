/*
 * sind.c
 *
 * Code generation for function 'sind'
 *
 */

/* Include files */
#include "sind.h"
#include "main_scanner_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_sind(real_T *x)
{
  real_T absx;
  int8_T n;
  boolean_T guard1 = false;
  if (muDoubleScalarIsInf(*x) || muDoubleScalarIsNaN(*x)) {
    *x = rtNaN;
  } else {
    *x = muDoubleScalarRem(*x, 360.0);
    absx = muDoubleScalarAbs(*x);
    if (absx > 180.0) {
      if (*x > 0.0) {
        *x -= 360.0;
      } else {
        *x += 360.0;
      }
      absx = muDoubleScalarAbs(*x);
    }
    if (absx <= 45.0) {
      *x *= 0.017453292519943295;
      *x = muDoubleScalarSin(*x);
    } else {
      guard1 = false;
      if (absx <= 135.0) {
        if (*x > 0.0) {
          *x = 0.017453292519943295 * (*x - 90.0);
          *x = muDoubleScalarCos(*x);
        } else {
          *x = 0.017453292519943295 * (*x + 90.0);
          n = -1;
          guard1 = true;
        }
      } else {
        if (*x > 0.0) {
          *x = 0.017453292519943295 * (*x - 180.0);
          n = 2;
        } else {
          *x = 0.017453292519943295 * (*x + 180.0);
          n = -2;
        }
        guard1 = true;
      }
      if (guard1) {
        if (n == -1) {
          *x = -muDoubleScalarCos(*x);
        } else {
          *x = -muDoubleScalarSin(*x);
        }
      }
    }
  }
}

/* End of code generation (sind.c) */
