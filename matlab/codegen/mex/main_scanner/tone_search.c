/*
 * tone_search.c
 *
 * Code generation for function 'tone_search'
 *
 */

/* Include files */
#include "tone_search.h"
#include "AmpPhase.h"
#include "cosd.h"
#include "main_scanner_data.h"
#include "main_scanner_types.h"
#include "rt_nonfinite.h"
#include "sind.h"
#include "sumMatrixIncludeNaN.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = {
    7,             /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo i_emlrtRSI = {
    16,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo j_emlrtRSI = {
    17,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo k_emlrtRSI = {
    21,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo l_emlrtRSI = {
    35,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo m_emlrtRSI = {
    36,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo n_emlrtRSI = {
    43,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo o_emlrtRSI = {
    45,            /* lineNo */
    "tone_search", /* fcnName */
    "D:\\user\\DropBox_Nsel\\ZERDLab "
    "Dropbox\\Nsel\\GIT\\Scanner\\Scaner_PC3\\matlab\\tone_search.m" /* pathName
                                                                      */
};

static emlrtRSInfo p_emlrtRSI = {
    63,    /* lineNo */
    "fft", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\datafun\\fft.m" /* pathName
                                                                         */
};

static emlrtRSInfo q_emlrtRSI =
    {
        31,    /* lineNo */
        "fft", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b1\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "fft\\fft.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI =
    {
        58,                /* lineNo */
        "executeCallback", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b1\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "fft\\fft.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    44,                        /* lineNo */
    "Custom1DFFTCallback/fft", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\Custom1DFFTCallback.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                           */
};

static emlrtRSInfo y_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                       */
};

static emlrtRSInfo ab_emlrtRSI = {
    20,         /* lineNo */
    "mldivide", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                          */
};

static emlrtRSInfo bb_emlrtRSI = {
    42,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                          */
};

static emlrtRSInfo cb_emlrtRSI =
    {
        55,        /* lineNo */
        "lusolve", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b1\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve."
        "m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI =
    {
        210,          /* lineNo */
        "lusolve2x2", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b1\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve."
        "m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI =
    {
        90,              /* lineNo */
        "warn_singular", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b1\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve."
        "m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b1\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                        */
};

/* Function Definitions */
void tone_search(main_scannerStackData *SD, const emlrtStack *sp,
                 real_T Signal[1650001], real_T *a, real_T *f, real_T *p,
                 real_T FftS[6600000], real_T *Am)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T A[4];
  real_T B[2];
  real_T a22;
  real_T cs;
  real_T fL;
  real_T fR;
  real_T vL;
  real_T vR;
  real_T ys;
  int32_T k;
  int32_T r1;
  int32_T r2;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  covrtLogFcn(&emlrtCoverageInstance, 2U, 0U);
  /*  search and delete tones function */
  for (r1 = 0; r1 < 1650001; r1++) {
    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 0U);
    /* Signal=Signal-a*sind((f*360).*T+p); % calculate the difference signal */
    a22 = *f * 360.0 * (((real_T)r1 + 1.0) - 1.0) / 2.5E+6 + *p;
    b_sind(&a22);
    Signal[r1] -= *a * a22;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 1U);
  /*         %% Spectral representation of the input signal */
  st.site = &h_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  d_st.site = &r_emlrtRSI;
  e_st.site = &s_emlrtRSI;
  emlrtFFTWSetNumThreads(4);
  emlrtFFTW_1D_R2C(&Signal[0], (real_T *)&SD->f0.y[0], 1, 6600000, 1650001, 1,
                   -1);
  /*  signal Fourier transform amplitude */
  for (k = 0; k < 6600000; k++) {
    FftS[k] =
        2.0 * muDoubleScalarHypot(SD->f0.y[k].re, SD->f0.y[k].im) / 6.6E+6;
  }
  /*  amplitude normalization of the spectrum */
  /*         %% Tone frequency search and calculation */
  if (!muDoubleScalarIsNaN(FftS[0])) {
    r1 = 1;
  } else {
    r1 = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6600001)) {
      if (!muDoubleScalarIsNaN(FftS[k - 1])) {
        r1 = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (r1 == 0) {
    *Am = FftS[0];
    r1 = 1;
  } else {
    *Am = FftS[r1 - 1];
    r2 = r1 + 1;
    for (k = r2; k < 6600001; k++) {
      a22 = FftS[k - 1];
      if (*Am < a22) {
        *Am = a22;
        r1 = k;
      }
    }
  }
  /*  maximum in the spectrum , where Am is the amplitude of the match , im is
   * the index in the array FftS starting from 1 and not from 0 */
  *f = ((real_T)r1 - 1.0) * 2.5E+6 / 6.6E+6;
  /*  calculating the tone frequency, im-1 because i starts at 1 and not at 0 */
  /*         %% Approximation of the residue frequency by the maximum of the
   * vector */
  /*  step and error optimized for speed, deviation ff reset */
  fL = *f - 0.37878787878787878;
  fR = *f + 0.37878787878787878;
  st.site = &i_emlrtRSI;
  vL = AmpPhase(&st, Signal, *f - 0.37878787878787878);
  st.site = &j_emlrtRSI;
  vR = AmpPhase(&st, Signal, *f + 0.37878787878787878);
  while (covrtLogWhile(&emlrtCoverageInstance, 2U, 0U, 0,
                       muDoubleScalarAbs(fR - fL) > 1.0E-7)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 2U);
    /*  if the step did not reach the optimal error, then */
    a22 = (fR + fL) / 2.0;
    st.site = &k_emlrtRSI;
    cs = AmpPhase(&st, Signal, a22);
    if (covrtLogIf(&emlrtCoverageInstance, 2U, 0U, 0, vL < vR)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 3U);
      /*  if the maximum value is skipped, then */
      fL = a22;
      vL = cs;
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 4U);
      fR = a22;
      vR = cs;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 5U);
  /*  end of approximation in frequency */
  *f = (fR + fL) / 2.0;
  /*         %% Calculation of the amplitude and phase of the residue by the
   * vector method, provided that the frequency is known */
  cs = 0.0;
  fL = 0.0;
  fR = 0.0;
  vL = 0.0;
  ys = 0.0;
  /*  initial assignments to amounts */
  for (r1 = 0; r1 < 1650001; r1++) {
    covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 6U);
    /*  number of time array indexes */
    a22 = *f * 720.0 * (real_T)r1 / 2.5E+6;
    b_sind(&a22);
    cs += a22 / 2.0;
    /*  simplification cos(x)*sin(x)=sin(2*x)/2 */
    st.site = &l_emlrtRSI;
    a22 = *f * 360.0 * (real_T)r1 / 2.5E+6;
    vR = a22;
    b_cosd(&vR);
    b_st.site = &x_emlrtRSI;
    c_st.site = &y_emlrtRSI;
    fL += vR * vR;
    /*  time starts from zero, */
    st.site = &m_emlrtRSI;
    b_sind(&a22);
    b_st.site = &x_emlrtRSI;
    c_st.site = &y_emlrtRSI;
    fR += a22 * a22;
    /*  and the index starts from one */
    vL += Signal[r1] * vR;
    /*  so in sines and cosines is i */
    ys += Signal[r1] * a22;
    /*  and the signal contains the index i + 1 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 2U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 7U);
  /*  end of accumulation of sums for the matrix */
  A[0] = fL;
  A[2] = cs;
  A[1] = cs;
  A[3] = fR;
  /*  solution of a system of linear equations */
  /*  assigning sums to matrix A */
  B[0] = vL;
  B[1] = ys;
  /*  assign sums to matrix B */
  st.site = &n_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  d_st.site = &cb_emlrtRSI;
  if (muDoubleScalarAbs(cs) > muDoubleScalarAbs(fL)) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }
  vR = A[r2] / A[r1];
  cs = A[r1 + 2];
  a22 = A[r2 + 2] - vR * cs;
  if ((a22 == 0.0) || (A[r1] == 0.0)) {
    e_st.site = &db_emlrtRSI;
    f_st.site = &eb_emlrtRSI;
    warning(&f_st);
  }
  fL = (B[r2] - B[r1] * vR) / a22;
  cs = (B[r1] - fL * cs) / A[r1];
  /*  solution vector */
  memcpy(&SD->f0.x[0], &FftS[0], 791974U * sizeof(real_T));
  vR = sumColumnB4(SD->f0.x, 1);
  for (r1 = 0; r1 < 192; r1++) {
    vR += sumColumnB4(SD->f0.x, ((r1 + 1) << 12) + 1);
  }
  a22 = b_sumColumnB4(*(real_T(*)[32868]) & FftS[792131], 1);
  for (r1 = 0; r1 < 7; r1++) {
    a22 +=
        b_sumColumnB4(*(real_T(*)[32868]) & FftS[792131], ((r1 + 1) << 12) + 1);
  }
  *a = ((vR + sumColumnB(SD->f0.x)) / 791974.0 +
        (a22 + b_sumColumnB(*(real_T(*)[32868]) & FftS[792131])) / 32868.0) /
       2.0;
  /*  average noise amplitude */
  st.site = &o_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  st.site = &o_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  st.site = &o_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  st.site = &o_emlrtRSI;
  *a = (cs * cs + fL * fL) - *a * *a;
  if (*a < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  *a = muDoubleScalarSqrt(*a);
  /*  subtraction signal amplitude */
  *p = 90.0 * (2.0 - muDoubleScalarSign(cs)) -
       57.295779513082323 * muDoubleScalarAtan(1.0 / (cs / fL));
  /*  subtraction signal phase 0...360 */
}

/* End of code generation (tone_search.c) */
