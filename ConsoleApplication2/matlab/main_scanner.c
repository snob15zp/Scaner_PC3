/*
 * File: main_scanner.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 14:13:44
 */

/* Include Files */
#include "main_scanner.h"
#include "main_scanner_emxutil.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"
#include "tone_search.h"
#include <stddef.h>
#include <stdio.h>
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
  emxArray_char_T *b_str;
  emxArray_char_T *c_str;
  emxArray_char_T *str;
  double Am;
  double a;
  double f;
  double p;
  int b_i;
  int i;
  int nbytes;
  char *str_data;
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
  emxInit_char_T(&str);
  emxInit_char_T(&b_str);
  emxInit_char_T(&c_str);
  while (Am > 1.0E-6) {
    /*  if the amplitude of the subtraction is greater than the specified
     * threshold , then we look for and subtract the next tone */
    tone_search(Signal, &a, &f, &p, FftS, &Am);
    /*  tone search and subtraction function */
    i++;
    nbytes = 3 * (i - 1);
    Out[nbytes] = a;
    Out[nbytes + 1] = f;
    Out[nbytes + 2] = p;
    /*  fill the output array : amplitude , frequency , phase */
    nbytes = (int)snprintf(NULL, 0, "%i", i) + 1;
    b_i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = nbytes;
    emxEnsureCapacity_char_T(str, b_i);
    str_data = str->data;
    snprintf(&str_data[0], (size_t)nbytes, "%i", i);
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    nbytes = (int)snprintf(NULL, 0, "%i", i) + 1;
    b_i = b_str->size[0] * b_str->size[1];
    b_str->size[0] = 1;
    b_str->size[1] = nbytes;
    emxEnsureCapacity_char_T(b_str, b_i);
    str_data = b_str->data;
    snprintf(&str_data[0], (size_t)nbytes, "%i", i);
    /* coder.varsize('ActVal1',[qblobs,DmaxSize]); */
    /* ActVal1(1:qblobs,:)=ActVal(1:qblobs,:); */
    nbytes = (int)snprintf(NULL, 0, "%i", i) + 1;
    b_i = c_str->size[0] * c_str->size[1];
    c_str->size[0] = 1;
    c_str->size[1] = nbytes;
    emxEnsureCapacity_char_T(c_str, b_i);
    str_data = c_str->data;
    snprintf(&str_data[0], (size_t)nbytes, "%i", i);
  }
  emxFree_char_T(&c_str);
  emxFree_char_T(&b_str);
  emxFree_char_T(&str);
}

/*
 * File trailer for main_scanner.c
 *
 * [EOF]
 */
