/*
 * File: _coder_main_scanner_api.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 25-May-2023 14:13:44
 */

/* Include Files */
#include "_coder_main_scanner_api.h"
#include "_coder_main_scanner_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131611U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "main_scanner",                                       /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static real_T (
    *b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[1650001];

static const mxArray *b_emlrt_marshallOut(const real_T u[6600000]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1650001];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *Signal,
                                 const char_T *identifier))[1650001];

static const mxArray *emlrt_marshallOut(const real_T u[300]);

/* Function Definitions */
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[1650001]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1650001]
{
  real_T(*y)[1650001];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const real_T u[6600000]
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[1650001]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Signal
 *                const char_T *identifier
 * Return Type  : real_T (*)[1650001]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *Signal,
                                 const char_T *identifier))[1650001]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1650001];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(Signal), &thisId);
  emlrtDestroyArray(&Signal);
  return y;
}

/*
 * Arguments    : const real_T u[300]
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : const mxArray *prhs
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void main_scanner_api(const mxArray *prhs, int32_T nlhs, const mxArray *plhs[2])
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
  Signal = emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "Signal");
  /* Invoke the target function */
  main_scanner(*Signal, *Out, *FftS);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Out);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*FftS);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_scanner_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  main_scanner_xil_terminate();
  main_scanner_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_scanner_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_scanner_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_main_scanner_api.c
 *
 * [EOF]
 */
