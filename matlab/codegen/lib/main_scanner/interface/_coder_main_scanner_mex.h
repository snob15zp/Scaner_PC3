/*
 * File: _coder_main_scanner_mex.h
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 16:43:58
 */

#ifndef _CODER_MAIN_SCANNER_MEX_H
#define _CODER_MAIN_SCANNER_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_main_scanner_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                     int32_T nrhs, const mxArray *prhs[1]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_main_scanner_mex.h
 *
 * [EOF]
 */
