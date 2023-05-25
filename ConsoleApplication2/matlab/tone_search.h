/*
 * File: tone_search.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 24-May-2023 23:19:00
 */

#ifndef TONE_SEARCH_H
#define TONE_SEARCH_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void tone_search(const double T[1650001], double Signal[1650001], double *a,
                 double *f, double *p, double FftS[6600000], double *Am);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for tone_search.h
 *
 * [EOF]
 */
