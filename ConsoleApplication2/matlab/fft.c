/*
 * File: fft.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 14:13:44
 */

/* Include Files */
#include "fft.h"
#include "FFTImplementationCallback.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const double x[1650001]
 *                creal_T y[6600000]
 * Return Type  : void
 */
void fft(const double x[1650001], creal_T y[6600000])
{
  static double costab[8388609];
  static double sintab[8388609];
  static double sintabinv[8388609];
  static double costab1q[4194305];
  double b_sintabinv_tmp;
  double sintabinv_tmp;
  int k;
  costab1q[0] = 1.0;
  for (k = 0; k < 2097152; k++) {
    costab1q[k + 1] = cos(3.7450702829239286E-7 * ((double)k + 1.0));
  }
  for (k = 0; k < 2097151; k++) {
    costab1q[k + 2097153] =
        sin(3.7450702829239286E-7 * (4.194304E+6 - ((double)k + 2.097153E+6)));
  }
  costab1q[4194304] = 0.0;
  costab[0] = 1.0;
  sintab[0] = 0.0;
  for (k = 0; k < 4194304; k++) {
    sintabinv_tmp = costab1q[4194303 - k];
    sintabinv[k + 1] = sintabinv_tmp;
    b_sintabinv_tmp = costab1q[k + 1];
    sintabinv[k + 4194305] = b_sintabinv_tmp;
    costab[k + 1] = b_sintabinv_tmp;
    sintab[k + 1] = -sintabinv_tmp;
    costab[k + 4194305] = -sintabinv_tmp;
    sintab[k + 4194305] = -b_sintabinv_tmp;
  }
  c_FFTImplementationCallback_dob(x, costab, sintab, sintabinv, y);
}

/*
 * File trailer for fft.c
 *
 * [EOF]
 */
