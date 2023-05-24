/*
 * File: _coder_main_scanner_api.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 24-May-2023 23:19:00
 */

#ifndef _CODER_MAIN_SCANNER_API_H
#define _CODER_MAIN_SCANNER_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void main_scanner(real_T Signal[1650001], real_T Out[300],
                  real_T FftS[6600000]);

void main_scanner_api(const mxArray *prhs, int32_T nlhs,
                      const mxArray *plhs[2]);

void main_scanner_atexit(void);

void main_scanner_initialize(void);

void main_scanner_terminate(void);

void main_scanner_xil_shutdown(void);

void main_scanner_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_main_scanner_api.h
 *
 * [EOF]
 */
