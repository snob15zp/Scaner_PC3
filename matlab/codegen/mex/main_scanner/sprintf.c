/*
 * sprintf.c
 *
 * Code generation for function 'sprintf'
 *
 */

/* Include files */
#include "sprintf.h"
#include "main_scanner_data.h"
#include "main_scanner_emxutil.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = {
    28,        /* lineNo */
    "sprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                            */
};

static emlrtMCInfo c_emlrtMCI = {
    52,              /* lineNo */
    14,              /* colNo */
    "nonConstPrint", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pName
                                                                            */
};

static emlrtMCInfo d_emlrtMCI = {
    54,              /* lineNo */
    15,              /* colNo */
    "nonConstPrint", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pName
                                                                            */
};

static emlrtDCInfo
    emlrtDCI =
        {
            56,              /* lineNo */
            53,              /* colNo */
            "nonConstPrint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf"
            ".m", /* pName */
            4     /* checkKind */
};

static emlrtRSInfo hb_emlrtRSI = {
    52,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                            */
};

static emlrtRSInfo ib_emlrtRSI = {
    54,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                            */
};

static emlrtRSInfo jb_emlrtRSI = {
    57,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                            */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmpStr,
                               const char_T *identifier, emxArray_char_T *y);

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_length_,
                               const char_T *identifier);

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_char_T *ret);

static const mxArray *length(const emlrtStack *sp, const mxArray *m1,
                             emlrtMCInfo *location);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmpStr,
                               const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(tmpStr), &thisId, y);
  emlrtDestroyArray(&tmpStr);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 3, &pArrays[0],
                               (const char_T *)"feval", true, location);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_length_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_length_), &thisId);
  emlrtDestroyArray(&a__output_of_length_);
  return y;
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  char_T *ret_data;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

static const mxArray *length(const emlrtStack *sp, const mxArray *m1,
                             emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 1, &pArray,
                               (const char_T *)"length", true, location);
}

void b_sprintf(const emlrtStack *sp, int32_T varargin_1, emxArray_char_T *str)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 2};
  static const char_T u[7] = {'s', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T formatSpec[2] = {'%', 'i'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *tmpStr;
  const mxArray *y;
  real_T strSize;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tmpStr = NULL;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&st, 2, m, &formatSpec[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&c_y, m);
  b_st.site = &hb_emlrtRSI;
  emlrtAssign(&tmpStr, c_feval(&b_st, y, b_y, c_y, &c_emlrtMCI));
  b_st.site = &ib_emlrtRSI;
  strSize =
      emlrt_marshallIn(&b_st, length(&b_st, emlrtAlias(tmpStr), &d_emlrtMCI),
                       "<output of length>");
  if (!(strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(strSize, &emlrtDCI, &st);
  }
  b_st.site = &jb_emlrtRSI;
  c_emlrt_marshallIn(&b_st, emlrtAlias(tmpStr), "tmpStr", str);
  emlrtDestroyArray(&tmpStr);
}

/* End of code generation (sprintf.c) */
