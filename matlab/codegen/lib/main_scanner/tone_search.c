/*
 * File: tone_search.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 24-May-2023 23:19:00
 */

/* Include Files */
#include "tone_search.h"
#include "cosd.h"
#include "fft.h"
#include "main_scanner_rtwutil.h"
#include "rt_nonfinite.h"
#include "sind.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_hypotd_snf(double u0, double u1);

/* Function Definitions */
/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_hypotd_snf(double u0, double u1)
{
  double a;
  double y;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = a * sqrt(y * y + 1.0);
  } else if (!rtIsNaN(y)) {
    y = a * 1.4142135623730951;
  }
  return y;
}

/*
 * search and delete tones function
 *
 * Arguments    : const double T[1650001]
 *                double Signal[1650001]
 *                double *a
 *                double *f
 *                double *p
 *                double FftS[6600000]
 *                double *Am
 * Return Type  : void
 */
void tone_search(const double T[1650001], double Signal[1650001], double *a,
                 double *f, double *p, double FftS[6600000], double *Am)
{
  static creal_T x[6600000];
  double A[4];
  double B[2];
  double a_tmp;
  double absx;
  double cc;
  double d;
  double fL;
  double fR;
  double ss;
  double vL;
  double vR;
  int ib;
  int k;
  int r1;
  int r2;
  signed char n;
  boolean_T exitg1;
  *f *= 360.0;
  for (k = 0; k < 1650001; k++) {
    d = *f * T[k] + *p;
    if (rtIsInf(d) || rtIsNaN(d)) {
      d = rtNaN;
    } else {
      vR = rt_remd_snf(d, 360.0);
      absx = fabs(vR);
      if (absx > 180.0) {
        if (vR > 0.0) {
          vR -= 360.0;
        } else {
          vR += 360.0;
        }
        absx = fabs(vR);
      }
      if (absx <= 45.0) {
        vR *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (vR > 0.0) {
          vR = 0.017453292519943295 * (vR - 90.0);
          n = 1;
        } else {
          vR = 0.017453292519943295 * (vR + 90.0);
          n = -1;
        }
      } else if (vR > 0.0) {
        vR = 0.017453292519943295 * (vR - 180.0);
        n = 2;
      } else {
        vR = 0.017453292519943295 * (vR + 180.0);
        n = -2;
      }
      if (n == 0) {
        d = sin(vR);
      } else if (n == 1) {
        d = cos(vR);
      } else if (n == -1) {
        d = -cos(vR);
      } else {
        d = -sin(vR);
      }
    }
    Signal[k] -= *a * d;
  }
  /*  calculate the difference signal */
  /*         %% Spectral representation of the input signal */
  fft(Signal, x);
  /*  signal Fourier transform amplitude */
  for (k = 0; k < 6600000; k++) {
    FftS[k] = 2.0 * rt_hypotd_snf(x[k].re, x[k].im) / 6.6E+6;
  }
  /*  amplitude normalization of the spectrum */
  /*         %% Tone frequency search and calculation */
  if (!rtIsNaN(FftS[0])) {
    r1 = 1;
  } else {
    r1 = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6600001)) {
      if (!rtIsNaN(FftS[k - 1])) {
        r1 = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (r1 == 0) {
    *Am = FftS[0];
    r1 = 1;
  } else {
    *Am = FftS[r1 - 1];
    r2 = r1 + 1;
    for (k = r2; k < 6600001; k++) {
      d = FftS[k - 1];
      if (*Am < d) {
        *Am = d;
        r1 = k;
      }
    }
  }
  /*  maximum in the spectrum , where Am is the amplitude of the match , im is
   * the index in the array FftS starting from 1 and not from 0 */
  *f = ((double)r1 - 1.0) * 2.5E+6 / 6.6E+6;
  /*  calculating the tone frequency, im-1 because i starts at 1 and not at 0 */
  /*         %% Approximation of the residue frequency by the maximum of the
   * vector */
  /*  step and error optimized for speed, deviation ff reset */
  fL = *f - 0.37878787878787878;
  fR = *f + 0.37878787878787878;
  absx = 0.0;
  ss = 0.0;
  /*  initial assignments to amounts */
  for (r1 = 0; r1 < 1650001; r1++) {
    /*  number of time array indexes Tm*Fd+1 */
    d = (*f - 0.37878787878787878) * 360.0 * (double)r1 / 2.5E+6;
    a_tmp = d;
    b_cosd(&a_tmp);
    absx += Signal[r1] * a_tmp;
    /*  the first sum of the vector */
    b_sind(&d);
    ss += Signal[r1] * d;
    /*  second vector sum */
  }
  vL = absx * absx + ss * ss;
  /*  variance function - sum of squares of vector sums */
  absx = 0.0;
  ss = 0.0;
  /*  initial assignments to amounts */
  for (r1 = 0; r1 < 1650001; r1++) {
    /*  number of time array indexes Tm*Fd+1 */
    d = (*f + 0.37878787878787878) * 360.0 * (double)r1 / 2.5E+6;
    a_tmp = d;
    b_cosd(&a_tmp);
    absx += Signal[r1] * a_tmp;
    /*  the first sum of the vector */
    b_sind(&d);
    ss += Signal[r1] * d;
    /*  second vector sum */
  }
  vR = absx * absx + ss * ss;
  /*  variance function - sum of squares of vector sums */
  while (fabs(fR - fL) > 1.0E-7) {
    /*  if the step did not reach the optimal error, then */
    cc = (fR + fL) / 2.0;
    absx = 0.0;
    ss = 0.0;
    /*  initial assignments to amounts */
    for (r1 = 0; r1 < 1650001; r1++) {
      /*  number of time array indexes Tm*Fd+1 */
      d = cc * 360.0 * (double)r1 / 2.5E+6;
      a_tmp = d;
      b_cosd(&a_tmp);
      absx += Signal[r1] * a_tmp;
      /*  the first sum of the vector */
      b_sind(&d);
      ss += Signal[r1] * d;
      /*  second vector sum */
    }
    absx = absx * absx + ss * ss;
    /*  variance function - sum of squares of vector sums */
    if (vL < vR) {
      /*  if the maximum value is skipped, then */
      fL = cc;
      vL = absx;
    } else {
      fR = cc;
      vR = absx;
    }
  }
  /*  end of approximation in frequency */
  *f = (fR + fL) / 2.0;
  /*         %% Calculation of the amplitude and phase of the residue by the
   * vector method, provided that the frequency is known */
  vR = 0.0;
  cc = 0.0;
  ss = 0.0;
  fL = 0.0;
  fR = 0.0;
  /*  initial assignments to amounts */
  for (r1 = 0; r1 < 1650001; r1++) {
    /*  number of time array indexes */
    d = *f * 720.0 * (double)r1 / 2.5E+6;
    b_sind(&d);
    vR += d / 2.0;
    /*  simplification cos(x)*sin(x)=sin(2*x)/2 */
    absx = *f * 360.0 * (double)r1 / 2.5E+6;
    a_tmp = absx;
    b_cosd(&a_tmp);
    cc += a_tmp * a_tmp;
    /*  time starts from zero, */
    b_sind(&absx);
    ss += absx * absx;
    /*  and the index starts from one */
    fL += Signal[r1] * a_tmp;
    /*  so in sines and cosines is i */
    fR += Signal[r1] * absx;
    /*  and the signal contains the index i + 1 */
  }
  /*  end of accumulation of sums for the matrix */
  A[0] = cc;
  A[2] = vR;
  A[1] = vR;
  A[3] = ss;
  /*  solution of a system of linear equations */
  /*  assigning sums to matrix A */
  B[0] = fL;
  B[1] = fR;
  /*  assign sums to matrix B */
  if (fabs(vR) > fabs(cc)) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }
  absx = A[r2] / A[r1];
  vR = A[r1 + 2];
  fL = (B[r2] - B[r1] * absx) / (A[r2 + 2] - absx * vR);
  cc = (B[r1] - fL * vR) / A[r1];
  /*  solution vector */
  vR = FftS[0];
  for (k = 0; k < 1023; k++) {
    vR += FftS[k + 1];
  }
  for (ib = 0; ib < 773; ib++) {
    r1 = (ib + 1) << 10;
    absx = FftS[r1];
    if (ib + 2 == 774) {
      r2 = 422;
    } else {
      r2 = 1024;
    }
    for (k = 2; k <= r2; k++) {
      absx += FftS[(r1 + k) - 1];
    }
    vR += absx;
  }
  a_tmp = FftS[792131];
  for (k = 0; k < 1023; k++) {
    a_tmp += FftS[k + 792132];
  }
  for (ib = 0; ib < 32; ib++) {
    r1 = ((ib + 1) << 10) + 792130;
    absx = FftS[r1 + 1];
    if (ib + 2 == 33) {
      r2 = 100;
    } else {
      r2 = 1024;
    }
    for (k = 2; k <= r2; k++) {
      absx += FftS[r1 + k];
    }
    a_tmp += absx;
  }
  *a = (vR / 791974.0 + a_tmp / 32868.0) / 2.0;
  /*  average noise amplitude */
  *a = sqrt((cc * cc + fL * fL) - *a * *a);
  /*  subtraction signal amplitude */
  vR = cc;
  if (cc < 0.0) {
    vR = -1.0;
  } else if (cc > 0.0) {
    vR = 1.0;
  } else if (cc == 0.0) {
    vR = 0.0;
  }
  *p = 90.0 * (2.0 - vR) - 57.295779513082323 * atan(1.0 / (cc / fL));
  /*  subtraction signal phase 0...360 */
}

/*
 * File trailer for tone_search.c
 *
 * [EOF]
 */
