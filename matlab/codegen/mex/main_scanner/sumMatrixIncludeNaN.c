/*
 * sumMatrixIncludeNaN.c
 *
 * Code generation for function 'sumMatrixIncludeNaN'
 *
 */

/* Include files */
#include "sumMatrixIncludeNaN.h"
#include "main_scanner_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_sumColumnB(const real_T x[32868])
{
  real_T y;
  int32_T k;
  y = x[32768];
  for (k = 0; k < 99; k++) {
    y += x[k + 32769];
  }
  return y;
}

real_T b_sumColumnB4(const real_T x[32868], int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  int32_T k;
  int32_T psum1_tmp;
  psum1 = x[vstart - 1];
  psum2 = x[vstart + 1023];
  psum3 = x[vstart + 2047];
  psum4 = x[vstart + 3071];
  for (k = 0; k < 1023; k++) {
    psum1_tmp = vstart + k;
    psum1 += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

real_T sumColumnB(const real_T x[791974])
{
  real_T b_y;
  real_T y;
  int32_T k;
  y = x[790528];
  for (k = 0; k < 1023; k++) {
    y += x[k + 790529];
  }
  b_y = x[791552];
  for (k = 0; k < 421; k++) {
    b_y += x[k + 791553];
  }
  y += b_y;
  return y;
}

real_T sumColumnB4(const real_T x[791974], int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  int32_T k;
  int32_T psum1_tmp;
  psum1 = x[vstart - 1];
  psum2 = x[vstart + 1023];
  psum3 = x[vstart + 2047];
  psum4 = x[vstart + 3071];
  for (k = 0; k < 1023; k++) {
    psum1_tmp = vstart + k;
    psum1 += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

/* End of code generation (sumMatrixIncludeNaN.c) */
