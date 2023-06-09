/*
 * File: FFTImplementationCallback.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 16:43:58
 */

/* Include Files */
#include "FFTImplementationCallback.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void c_FFTImplementationCallback_doH(
    const double x[1650001], creal_T y[6600000], const creal_T wwc[6599999],
    const double costab[8388609], const double sintab[8388609],
    const double costabinv[8388609], const double sintabinv[8388609]);

static void c_FFTImplementationCallback_gen(double costab[6600001],
                                            double sintab[6600001],
                                            double sintabinv[6600001]);

static void c_FFTImplementationCallback_r2b(const creal_T x[3300000],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608]);

static void d_FFTImplementationCallback_r2b(const creal_T x[6599999],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608]);

static void e_FFTImplementationCallback_r2b(const creal_T x[8388608],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608]);

/* Function Definitions */
/*
 * Arguments    : const double x[1650001]
 *                creal_T y[6600000]
 *                const creal_T wwc[6599999]
 *                const double costab[8388609]
 *                const double sintab[8388609]
 *                const double costabinv[8388609]
 *                const double sintabinv[8388609]
 * Return Type  : void
 */
static void c_FFTImplementationCallback_doH(
    const double x[1650001], creal_T y[6600000], const creal_T wwc[6599999],
    const double costab[8388609], const double sintab[8388609],
    const double costabinv[8388609], const double sintabinv[8388609])
{
  static creal_T b_fv[8388608];
  static creal_T fv[8388608];
  static creal_T reconVar1[3300000];
  static creal_T reconVar2[3300000];
  static creal_T ytmp[3300000];
  static double a__1[6600001];
  static double costable[6600001];
  static double sintable[6600001];
  static double hcostab[4194304];
  static double hcostabinv[4194304];
  static double hsintab[4194304];
  static double hsintabinv[4194304];
  static int wrapIndex[3300000];
  double b_im;
  double b_re;
  double b_re_tmp;
  double b_ytmp_re_tmp;
  double c_ytmp_re_tmp;
  double re_tmp;
  double ytmp_im_tmp;
  double ytmp_re_tmp;
  int hcostab_tmp;
  int i;
  memset(&ytmp[0], 0, 3300000U * sizeof(creal_T));
  c_FFTImplementationCallback_gen(costable, sintable, a__1);
  for (i = 0; i < 4194304; i++) {
    hcostab_tmp = ((i + 1) << 1) - 2;
    hcostab[i] = costab[hcostab_tmp];
    hsintab[i] = sintab[hcostab_tmp];
    hcostabinv[i] = costabinv[hcostab_tmp];
    hsintabinv[i] = sintabinv[hcostab_tmp];
  }
  for (i = 0; i < 3300000; i++) {
    hcostab_tmp = i << 1;
    re_tmp = sintable[hcostab_tmp];
    b_re_tmp = costable[hcostab_tmp];
    reconVar1[i].re = re_tmp + 1.0;
    reconVar1[i].im = -b_re_tmp;
    reconVar2[i].re = 1.0 - re_tmp;
    reconVar2[i].im = b_re_tmp;
    if (i + 1 != 1) {
      wrapIndex[i] = 3300001 - i;
    } else {
      wrapIndex[0] = 1;
    }
  }
  for (i = 0; i < 825000; i++) {
    hcostab_tmp = i << 1;
    b_re = x[hcostab_tmp];
    b_im = x[hcostab_tmp + 1];
    re_tmp = wwc[i + 3299999].re;
    b_re_tmp = wwc[i + 3299999].im;
    ytmp[i].re = re_tmp * b_re + b_re_tmp * b_im;
    ytmp[i].im = re_tmp * b_im - b_re_tmp * b_re;
  }
  ytmp[825000].re = wwc[4124999].re * x[1650000] + wwc[4124999].im * 0.0;
  ytmp[825000].im = wwc[4124999].re * 0.0 - wwc[4124999].im * x[1650000];
  memset(&ytmp[825001], 0, 2474999U * sizeof(creal_T));
  c_FFTImplementationCallback_r2b(ytmp, hcostab, hsintab, fv);
  d_FFTImplementationCallback_r2b(wwc, hcostab, hsintab, b_fv);
  for (hcostab_tmp = 0; hcostab_tmp < 8388608; hcostab_tmp++) {
    b_re = fv[hcostab_tmp].re;
    b_im = b_fv[hcostab_tmp].im;
    re_tmp = fv[hcostab_tmp].im;
    b_re_tmp = b_fv[hcostab_tmp].re;
    b_fv[hcostab_tmp].re = b_re * b_re_tmp - re_tmp * b_im;
    b_fv[hcostab_tmp].im = b_re * b_im + re_tmp * b_re_tmp;
  }
  e_FFTImplementationCallback_r2b(b_fv, hcostabinv, hsintabinv, fv);
  for (hcostab_tmp = 0; hcostab_tmp < 3300000; hcostab_tmp++) {
    re_tmp = wwc[hcostab_tmp + 3299999].re;
    b_re_tmp = fv[hcostab_tmp + 3299999].im;
    b_re = wwc[hcostab_tmp + 3299999].im;
    b_im = fv[hcostab_tmp + 3299999].re;
    ytmp[hcostab_tmp].re = re_tmp * b_im + b_re * b_re_tmp;
    ytmp[hcostab_tmp].im = re_tmp * b_re_tmp - b_re * b_im;
  }
  for (i = 0; i < 3300000; i++) {
    b_re = ytmp[i].re;
    b_im = reconVar1[i].im;
    re_tmp = ytmp[i].im;
    b_re_tmp = reconVar1[i].re;
    hcostab_tmp = wrapIndex[i];
    ytmp_re_tmp = ytmp[hcostab_tmp - 1].re;
    ytmp_im_tmp = -ytmp[hcostab_tmp - 1].im;
    b_ytmp_re_tmp = reconVar2[i].im;
    c_ytmp_re_tmp = reconVar2[i].re;
    y[i].re =
        0.5 * ((b_re * b_re_tmp - re_tmp * b_im) +
               (ytmp_re_tmp * c_ytmp_re_tmp - ytmp_im_tmp * b_ytmp_re_tmp));
    y[i].im =
        0.5 * ((b_re * b_im + re_tmp * b_re_tmp) +
               (ytmp_re_tmp * b_ytmp_re_tmp + ytmp_im_tmp * c_ytmp_re_tmp));
    y[i + 3300000].re = 0.5 * ((b_re * c_ytmp_re_tmp - re_tmp * b_ytmp_re_tmp) +
                               (ytmp_re_tmp * b_re_tmp - ytmp_im_tmp * b_im));
    y[i + 3300000].im = 0.5 * ((b_re * b_ytmp_re_tmp + re_tmp * c_ytmp_re_tmp) +
                               (ytmp_re_tmp * b_im + ytmp_im_tmp * b_re_tmp));
  }
}

/*
 * Arguments    : double costab[6600001]
 *                double sintab[6600001]
 *                double sintabinv[6600001]
 * Return Type  : void
 */
static void c_FFTImplementationCallback_gen(double costab[6600001],
                                            double sintab[6600001],
                                            double sintabinv[6600001])
{
  static double costab1q[3300001];
  double b_sintabinv_tmp;
  double sintabinv_tmp;
  int k;
  costab1q[0] = 1.0;
  for (k = 0; k < 1650000; k++) {
    costab1q[k + 1] = cos(4.7599888690754441E-7 * ((double)k + 1.0));
  }
  for (k = 0; k < 1649999; k++) {
    costab1q[k + 1650001] =
        sin(4.7599888690754441E-7 * (3.3E+6 - ((double)k + 1.650001E+6)));
  }
  costab1q[3300000] = 0.0;
  costab[0] = 1.0;
  sintab[0] = 0.0;
  for (k = 0; k < 3300000; k++) {
    sintabinv_tmp = costab1q[3299999 - k];
    sintabinv[k + 1] = sintabinv_tmp;
    b_sintabinv_tmp = costab1q[k + 1];
    sintabinv[k + 3300001] = b_sintabinv_tmp;
    costab[k + 1] = b_sintabinv_tmp;
    sintab[k + 1] = -sintabinv_tmp;
    costab[k + 3300001] = -sintabinv_tmp;
    sintab[k + 3300001] = -b_sintabinv_tmp;
  }
}

/*
 * Arguments    : const creal_T x[3300000]
 *                const double costab[4194304]
 *                const double sintab[4194304]
 *                creal_T y[8388608]
 * Return Type  : void
 */
static void c_FFTImplementationCallback_r2b(const creal_T x[3300000],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608])
{
  double temp_im;
  double temp_re;
  double temp_re_tmp;
  double twid_im;
  double twid_re;
  int b_temp_re_tmp;
  int i;
  int iheight;
  int ihi;
  int istart;
  int iy;
  int j;
  int ju;
  int k;
  boolean_T tst;
  memset(&y[0], 0, 8388608U * sizeof(creal_T));
  iy = 0;
  ju = 0;
  for (i = 0; i < 3299999; i++) {
    y[iy] = x[i];
    iy = 8388608;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }
    iy = ju;
  }
  y[iy] = x[3299999];
  for (i = 0; i <= 8388606; i += 2) {
    temp_re_tmp = y[i + 1].re;
    temp_im = y[i + 1].im;
    temp_re = y[i].re;
    twid_re = y[i].im;
    y[i + 1].re = temp_re - temp_re_tmp;
    y[i + 1].im = twid_re - temp_im;
    y[i].re = temp_re + temp_re_tmp;
    y[i].im = twid_re + temp_im;
  }
  iy = 2;
  ju = 4;
  k = 2097152;
  iheight = 8388605;
  while (k > 0) {
    for (i = 0; i < iheight; i += ju) {
      b_temp_re_tmp = i + iy;
      temp_re = y[b_temp_re_tmp].re;
      temp_im = y[b_temp_re_tmp].im;
      y[b_temp_re_tmp].re = y[i].re - temp_re;
      y[b_temp_re_tmp].im = y[i].im - temp_im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }
    istart = 1;
    for (j = k; j < 4194304; j += k) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        b_temp_re_tmp = i + iy;
        temp_re_tmp = y[b_temp_re_tmp].im;
        temp_im = y[b_temp_re_tmp].re;
        temp_re = twid_re * temp_im - twid_im * temp_re_tmp;
        temp_im = twid_re * temp_re_tmp + twid_im * temp_im;
        y[b_temp_re_tmp].re = y[i].re - temp_re;
        y[b_temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ju;
      }
      istart++;
    }
    k /= 2;
    iy = ju;
    ju += ju;
    iheight -= iy;
  }
}

/*
 * Arguments    : const creal_T x[6599999]
 *                const double costab[4194304]
 *                const double sintab[4194304]
 *                creal_T y[8388608]
 * Return Type  : void
 */
static void d_FFTImplementationCallback_r2b(const creal_T x[6599999],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608])
{
  double temp_im;
  double temp_re;
  double temp_re_tmp;
  double twid_im;
  double twid_re;
  int b_temp_re_tmp;
  int i;
  int iheight;
  int ihi;
  int istart;
  int iy;
  int j;
  int ju;
  int k;
  boolean_T tst;
  memset(&y[0], 0, 8388608U * sizeof(creal_T));
  iy = 0;
  ju = 0;
  for (i = 0; i < 6599998; i++) {
    y[iy] = x[i];
    iy = 8388608;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }
    iy = ju;
  }
  y[iy] = x[6599998];
  for (i = 0; i <= 8388606; i += 2) {
    temp_re_tmp = y[i + 1].re;
    temp_im = y[i + 1].im;
    temp_re = y[i].re;
    twid_re = y[i].im;
    y[i + 1].re = temp_re - temp_re_tmp;
    y[i + 1].im = twid_re - temp_im;
    y[i].re = temp_re + temp_re_tmp;
    y[i].im = twid_re + temp_im;
  }
  iy = 2;
  ju = 4;
  k = 2097152;
  iheight = 8388605;
  while (k > 0) {
    for (i = 0; i < iheight; i += ju) {
      b_temp_re_tmp = i + iy;
      temp_re = y[b_temp_re_tmp].re;
      temp_im = y[b_temp_re_tmp].im;
      y[b_temp_re_tmp].re = y[i].re - temp_re;
      y[b_temp_re_tmp].im = y[i].im - temp_im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }
    istart = 1;
    for (j = k; j < 4194304; j += k) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        b_temp_re_tmp = i + iy;
        temp_re_tmp = y[b_temp_re_tmp].im;
        temp_im = y[b_temp_re_tmp].re;
        temp_re = twid_re * temp_im - twid_im * temp_re_tmp;
        temp_im = twid_re * temp_re_tmp + twid_im * temp_im;
        y[b_temp_re_tmp].re = y[i].re - temp_re;
        y[b_temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ju;
      }
      istart++;
    }
    k /= 2;
    iy = ju;
    ju += ju;
    iheight -= iy;
  }
}

/*
 * Arguments    : const creal_T x[8388608]
 *                const double costab[4194304]
 *                const double sintab[4194304]
 *                creal_T y[8388608]
 * Return Type  : void
 */
static void e_FFTImplementationCallback_r2b(const creal_T x[8388608],
                                            const double costab[4194304],
                                            const double sintab[4194304],
                                            creal_T y[8388608])
{
  double temp_im;
  double temp_re;
  double temp_re_tmp;
  double twid_im;
  double twid_re;
  int b_temp_re_tmp;
  int i;
  int iheight;
  int ihi;
  int istart;
  int iy;
  int j;
  int ju;
  int k;
  boolean_T tst;
  iy = 0;
  ju = 0;
  for (i = 0; i < 8388607; i++) {
    y[iy] = x[i];
    iy = 8388608;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }
    iy = ju;
  }
  y[iy] = x[8388607];
  for (i = 0; i <= 8388606; i += 2) {
    temp_re_tmp = y[i + 1].re;
    temp_im = y[i + 1].im;
    temp_re = y[i].re;
    twid_re = y[i].im;
    y[i + 1].re = temp_re - temp_re_tmp;
    y[i + 1].im = twid_re - temp_im;
    y[i].re = temp_re + temp_re_tmp;
    y[i].im = twid_re + temp_im;
  }
  iy = 2;
  ju = 4;
  k = 2097152;
  iheight = 8388605;
  while (k > 0) {
    for (i = 0; i < iheight; i += ju) {
      b_temp_re_tmp = i + iy;
      temp_re = y[b_temp_re_tmp].re;
      temp_im = y[b_temp_re_tmp].im;
      y[b_temp_re_tmp].re = y[i].re - temp_re;
      y[b_temp_re_tmp].im = y[i].im - temp_im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }
    istart = 1;
    for (j = k; j < 4194304; j += k) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        b_temp_re_tmp = i + iy;
        temp_re_tmp = y[b_temp_re_tmp].im;
        temp_im = y[b_temp_re_tmp].re;
        temp_re = twid_re * temp_im - twid_im * temp_re_tmp;
        temp_im = twid_re * temp_re_tmp + twid_im * temp_im;
        y[b_temp_re_tmp].re = y[i].re - temp_re;
        y[b_temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ju;
      }
      istart++;
    }
    k /= 2;
    iy = ju;
    ju += ju;
    iheight -= iy;
  }
  for (iy = 0; iy < 8388608; iy++) {
    y[iy].re *= 1.1920928955078125E-7;
    y[iy].im *= 1.1920928955078125E-7;
  }
}

/*
 * Arguments    : const double x[1650001]
 *                const double costab[8388609]
 *                const double sintab[8388609]
 *                const double sintabinv[8388609]
 *                creal_T y[6600000]
 * Return Type  : void
 */
void c_FFTImplementationCallback_dob(const double x[1650001],
                                     const double costab[8388609],
                                     const double sintab[8388609],
                                     const double sintabinv[8388609],
                                     creal_T y[6600000])
{
  static creal_T wwc[6599999];
  double nt_im;
  double nt_re;
  int b_y;
  int k;
  int rt;
  rt = 0;
  wwc[3299999].re = 1.0;
  wwc[3299999].im = 0.0;
  for (k = 0; k < 3299999; k++) {
    b_y = ((k + 1) << 1) - 1;
    if (6600000 - rt <= b_y) {
      rt = (b_y + rt) - 6600000;
    } else {
      rt += b_y;
    }
    nt_im = -3.1415926535897931 * (double)rt / 3.3E+6;
    if (nt_im == 0.0) {
      nt_re = 1.0;
      nt_im = 0.0;
    } else {
      nt_re = cos(nt_im);
      nt_im = sin(nt_im);
    }
    wwc[3299998 - k].re = nt_re;
    wwc[3299998 - k].im = -nt_im;
  }
  for (k = 3299998; k >= 0; k--) {
    wwc[k + 3300000] = wwc[3299998 - k];
  }
  memset(&y[0], 0, 6600000U * sizeof(creal_T));
  c_FFTImplementationCallback_doH(x, y, wwc, costab, sintab, costab, sintabinv);
}

/*
 * File trailer for FFTImplementationCallback.c
 *
 * [EOF]
 */
