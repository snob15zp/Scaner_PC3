/*
 * File: main_scanner.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 16:43:58
 */

/* Include Files */
#include "main_scanner.h"
#include "filesave_ceval.h"
#include "main_scanner_emxutil.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"
#include "sprintf.h"
#include "tone_search.h"
#include <string.h>

/* Function Definitions */
/*
 * scanner function
 *
 * Arguments    : double Signal[1650001]
 *                double Out[300]
 *                double FftS[6600000]
 * Return Type  : void
 */
void main_scanner(double Signal[1650001], double Out[300], double FftS[6600000])
{
  static const char b_fn3[6] = {'s', 'i', 'g', 'n', 'a', 'l'};
  static const char c_fn3[6] = {'F', 'f', 't', 'S', '_', 'I'};
  emxArray_char_T *fn3;
  emxArray_char_T *fn3a;
  emxArray_real_T *b_Signal;
  double dv[2];
  double Am;
  double a;
  double f;
  double p;
  double *Signal_data;
  int Out_tmp;
  int b_i;
  int i;
  char *fn3_data;
  char *fn3a_data;
  Am = 1.0;
  a = 0.0;
  f = 0.0;
  p = 0.0;
  i = 0;
  /*  initial assignments to enter the search and subtract tone loop */
  memset(&Out[0], 0, 300U * sizeof(double));
  memset(&FftS[0], 0, 6600000U * sizeof(double));
  /*         %% The main cycle of searching and subtracting the tone of maximum
   * amplitude */
  emxInit_char_T(&fn3a);
  emxInit_char_T(&fn3);
  emxInit_real_T(&b_Signal);
  while (Am > 1.0E-6) {
    /*  if the amplitude of the subtraction is greater than the specified
     * threshold , then we look for and subtract the next tone */
    tone_search(Signal, &a, &f, &p, FftS, &Am);
    /*  tone search and subtraction function */
    i++;
    Out_tmp = 3 * (i - 1);
    Out[Out_tmp] = a;
    Out[Out_tmp + 1] = f;
    Out[Out_tmp + 2] = p;
    /*  fill the output array : amplitude , frequency , phase */
    b_sprintf(i, fn3a);
    fn3a_data = fn3a->data;
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    b_i = fn3->size[0] * fn3->size[1];
    fn3->size[0] = 1;
    fn3->size[1] = fn3a->size[1] + 11;
    emxEnsureCapacity_char_T(fn3, b_i);
    fn3_data = fn3->data;
    for (b_i = 0; b_i < 6; b_i++) {
      fn3_data[b_i] = b_fn3[b_i];
    }
    Out_tmp = fn3a->size[1];
    for (b_i = 0; b_i < Out_tmp; b_i++) {
      fn3_data[b_i + 6] = fn3a_data[b_i];
    }
    fn3_data[fn3a->size[1] + 6] = '.';
    fn3_data[fn3a->size[1] + 7] = 't';
    fn3_data[fn3a->size[1] + 8] = 'x';
    fn3_data[fn3a->size[1] + 9] = 't';
    fn3_data[fn3a->size[1] + 10] = '\x00';
    dv[0] = 1.0;
    dv[1] = 1.650001E+6;
    b_i = b_Signal->size[0] * b_Signal->size[1];
    b_Signal->size[0] = 1;
    b_Signal->size[1] = 1650001;
    emxEnsureCapacity_real_T(b_Signal, b_i);
    Signal_data = b_Signal->data;
    for (b_i = 0; b_i < 1650001; b_i++) {
      Signal_data[b_i] = Signal[b_i];
    }
    filesave_ceval(b_Signal, fn3, dv);
    b_sprintf(i, fn3a);
    fn3a_data = fn3a->data;
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    b_i = fn3->size[0] * fn3->size[1];
    fn3->size[0] = 1;
    fn3->size[1] = fn3a->size[1] + 9;
    emxEnsureCapacity_char_T(fn3, b_i);
    fn3_data = fn3->data;
    fn3_data[0] = 'F';
    fn3_data[1] = 'f';
    fn3_data[2] = 't';
    fn3_data[3] = 'S';
    Out_tmp = fn3a->size[1];
    for (b_i = 0; b_i < Out_tmp; b_i++) {
      fn3_data[b_i + 4] = fn3a_data[b_i];
    }
    fn3_data[fn3a->size[1] + 4] = '.';
    fn3_data[fn3a->size[1] + 5] = 't';
    fn3_data[fn3a->size[1] + 6] = 'x';
    fn3_data[fn3a->size[1] + 7] = 't';
    fn3_data[fn3a->size[1] + 8] = '\x00';
    dv[0] = 1.0;
    dv[1] = 6.6E+6;
    b_i = b_Signal->size[0] * b_Signal->size[1];
    b_Signal->size[0] = 1;
    b_Signal->size[1] = 6600000;
    emxEnsureCapacity_real_T(b_Signal, b_i);
    Signal_data = b_Signal->data;
    for (b_i = 0; b_i < 6600000; b_i++) {
      Signal_data[b_i] = FftS[b_i];
    }
    filesave_ceval(b_Signal, fn3, dv);
    b_sprintf(i, fn3a);
    fn3a_data = fn3a->data;
    b_i = b_Signal->size[0] * b_Signal->size[1];
    b_Signal->size[0] = 1;
    b_Signal->size[1] = 159;
    emxEnsureCapacity_real_T(b_Signal, b_i);
    Signal_data = b_Signal->data;
    for (b_i = 0; b_i < 159; b_i++) {
      Signal_data[b_i] = 4.0 * FftS[b_i + 791973];
    }
    b_i = fn3->size[0] * fn3->size[1];
    fn3->size[0] = 1;
    fn3->size[1] = fn3a->size[1] + 11;
    emxEnsureCapacity_char_T(fn3, b_i);
    fn3_data = fn3->data;
    for (b_i = 0; b_i < 6; b_i++) {
      fn3_data[b_i] = c_fn3[b_i];
    }
    Out_tmp = fn3a->size[1];
    for (b_i = 0; b_i < Out_tmp; b_i++) {
      fn3_data[b_i + 6] = fn3a_data[b_i];
    }
    fn3_data[fn3a->size[1] + 6] = '.';
    fn3_data[fn3a->size[1] + 7] = 't';
    fn3_data[fn3a->size[1] + 8] = 'x';
    fn3_data[fn3a->size[1] + 9] = 't';
    fn3_data[fn3a->size[1] + 10] = '\x00';
    dv[0] = 1.0;
    dv[1] = 159.0;
    filesave_ceval(b_Signal, fn3, dv);
  }
  emxFree_real_T(&b_Signal);
  emxFree_char_T(&fn3);
  emxFree_char_T(&fn3a);
}

/*
 * File trailer for main_scanner.c
 *
 * [EOF]
 */
