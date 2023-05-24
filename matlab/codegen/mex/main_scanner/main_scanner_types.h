/*
 * main_scanner_types.h
 *
 * Code generation for function 'main_scanner'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef typedef_b_tone_search
#define typedef_b_tone_search
typedef struct {
  creal_T y[6600000];
  real_T x[791974];
} b_tone_search;
#endif /* typedef_b_tone_search */

#ifndef typedef_main_scannerStackData
#define typedef_main_scannerStackData
typedef struct {
  b_tone_search f0;
} main_scannerStackData;
#endif /* typedef_main_scannerStackData */

/* End of code generation (main_scanner_types.h) */
