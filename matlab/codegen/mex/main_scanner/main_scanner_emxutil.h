/*
 * main_scanner_emxutil.h
 *
 * Code generation for function 'main_scanner_emxutil'
 *
 */

#pragma once

/* Include files */
#include "main_scanner_types.h"
#include "rtwtypes.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emxEnsureCapacity_char_T(const emlrtStack *sp, emxArray_char_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxFree_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray);

void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation);

/* End of code generation (main_scanner_emxutil.h) */
