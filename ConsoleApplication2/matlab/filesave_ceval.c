/*
 * File: filesave_ceval.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 16:43:58
 */

/* Include Files */
#include "filesave_ceval.h"
#include "main_scanner_emxutil.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"
#include "filesave.h"
#include <math.h>

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */
/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }
  return y;
}

/*
 * -----------------------------------
 * columnwise
 * -----------------------------------
 *
 * Arguments    : emxArray_real_T *data
 *                const emxArray_char_T *filename
 *                const double sz[2]
 * Return Type  : void
 */
void filesave_ceval(emxArray_real_T *data, const emxArray_char_T *filename,
                    const double sz[2])
{
  static const char b_cpath[] = "..\\txt\\";
  emxArray_char_T *r;
  emxArray_char_T *r2;
  double d;
  double *data_data;
  int i;
  int loop_ub;
  char cpath[40];
  const char *filename_data;
  char *r1;
  char *r3;
  filename_data = filename->data;
  data_data = data->data;
  /* path='c:\prezerv\'; */
  for (i = 0; i < 40; i++) {
    cpath[i] = b_cpath[i];
  }
  emxInit_char_T(&r);
  /* coder.updateBuildInfo('addIncludePaths','$(START_DIR)\codegen\lib\combineXY');
   */
  /* coder.cinclude('myabsval_initialize.h'); */
  /* coder.cinclude('myabsval.h'); */
  /* coder.cinclude('myabsval_terminate.h'); */
  /* void filesave(const double *data, int  size1,int size2, char* path, char
   * *filename); */
  /* s1=int32(0); */
  /* [s1,s2]=sz;%size(data); */
  /*    ActVal2=[]; */
  /*    ActVal2(1:s1i,1:s2i)=data(1:s1i,1:s2i); */
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = filename->size[1] + 1;
  emxEnsureCapacity_char_T(r, i);
  r1 = r->data;
  loop_ub = filename->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = filename_data[i];
  }
  emxInit_char_T(&r2);
  r1[filename->size[1]] = '\x00';
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = r->size[1];
  emxEnsureCapacity_char_T(r2, i);
  r3 = r2->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    r3[i] = r1[i];
  }
  d = rt_roundd_snf(sz[1]);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      i = (int)d;
    } else {
      i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    i = MAX_int32_T;
  } else {
    i = 0;
  }
  filesave(&data_data[0], 1, i, &cpath[0], &r3[0], 1);
  filecomp(&cpath[0], &r1[0]);
  emxFree_char_T(&r);
  emxFree_char_T(&r2);
}

/*
 * File trailer for filesave_ceval.c
 *
 * [EOF]
 */
