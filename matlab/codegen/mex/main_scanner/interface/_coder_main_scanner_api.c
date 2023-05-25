/*
 * _coder_main_scanner_api.c
 *
 * Code generation for function '_coder_main_scanner_api'
 *
 */

/* Include files */
#include "_coder_main_scanner_api.h"
#include "main_scanner.h"
#include "main_scanner_data.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u[6600000]);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Signal,
                                   const char_T *identifier))[1650001];

static const mxArray *emlrt_marshallOut(const real_T u[300]);

static real_T (
    *f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[1650001];

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1650001];

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const real_T u[6600000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {1, 6600000};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Signal,
                                   const char_T *identifier))[1650001]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1650001];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(Signal), &thisId);
  emlrtDestroyArray(&Signal);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[300])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {3, 100};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1650001]
{
  real_T(*y)[1650001];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1650001]
{
  static const int32_T dims[2] = {1, 1650001};
  real_T(*ret)[1650001];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[1650001])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void main_scanner_api(main_scannerStackData *SD, const mxArray *prhs,
                      int32_T nlhs, const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *prhs_copy_idx_0;
  real_T(*FftS)[6600000];
  real_T(*Signal)[1650001];
  real_T(*Out)[300];
  st.tls = emlrtRootTLSGlobal;
  Out = (real_T(*)[300])mxMalloc(sizeof(real_T[300]));
  FftS = (real_T(*)[6600000])mxMalloc(sizeof(real_T[6600000]));
  prhs_copy_idx_0 = emlrtProtectR2012b(prhs, 0, false, -1);
  /* Marshall function inputs */
  Signal = e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "Signal");
  /* Invoke the target function */
  main_scanner(SD, &st, *Signal, *Out, *FftS);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Out);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*FftS);
  }
}

/* End of code generation (_coder_main_scanner_api.c) */
