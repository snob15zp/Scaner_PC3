/*
 * File: main_scanner_types.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 24-May-2023 23:19:00
 */

#ifndef MAIN_SCANNER_TYPES_H
#define MAIN_SCANNER_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#endif
/*
 * File trailer for main_scanner_types.h
 *
 * [EOF]
 */
