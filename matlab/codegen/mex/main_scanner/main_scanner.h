/*
 * main_scanner.h
 *
 * Code generation for function 'main_scanner'
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
void main_scanner(main_scannerStackData *SD, const emlrtStack *sp,
                  real_T Signal[1650001], real_T Out[300],
                  real_T FftS[6600000]);

/* End of code generation (main_scanner.h) */
