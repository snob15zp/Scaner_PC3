#include <chrono>
#include <fstream>
#include <iostream>
#include <string.h>
#include <vector>

//matlab main begin
extern "C" {
/* Include Files */
// #include "main.h"
#include "main_scanner.h"
#include "main_scanner_terminate.h"
#include "rt_nonfinite.h"
}
/* Function Declarations */
static void argInit_1x1650001_real_T(double result[1650001]);

static double argInit_real_T(void);

static void main_main_scanner(void);

/* Function Definitions */
/*
 * Arguments    : double result[1650001]
 * Return Type  : void
 */
static void argInit_1x1650001_real_T(double result[1650001])
{
  int idx1;
  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 1650001; idx1++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */

static double FftS[6600000];
static double dv[1650001];
double Out[300];

static void main_main_scanner(void)
{
  //static double FftS[6600000];
  //static double dv[1650001];
  //double Out[300];
  /* Initialize function 'main_scanner' input arguments. */
  /* Initialize function input argument 'Signal'. */
  /* Call the entry-point 'main_scanner'. */
  //argInit_1x1650001_real_T(dv);
  main_scanner(dv, Out, FftS);
}
//matlab end
// 
//#define D_Fd 2500000

int main(int argc, char **argv)
{
  auto start = std::chrono::system_clock::now();

  /*double Tm = 1;
  double Fd = D_Fd;
  double mz = 4;
  double FftL = Tm * Fd * mz;

  double *Signal = new double[D_Fd+1];
  double *T = new double[D_Fd+1];*/

  //for (int i = 0; i <= D_Fd;i++) 
  //{
  //  T[i] = i / ((double)D_Fd);
  //}

//  std::fill_n(T, 2500001, 1 / Fd);

  std::fstream signalData("..\\txt\\Signal.txt", std::ios_base::in);

  std::cout << "Read data from file" << std::endl;
  int idx = 0;
  while (!signalData.eof()) {
    double value;
    signalData >> value;
    if (signalData.bad()) {
      std::cerr << "Number formatting error " << idx << std::endl;
      return 0;
    }
    dv[idx++] = value;
    char c;
    signalData >> c;
  }

  std::cout << "Data successfully read. Size - " << idx << std::endl;

  main_main_scanner();

  std::chrono::duration<double> duration =
      std::chrono::system_clock::now() - start;

  std::cout << "Total time: " << duration.count() << "s" << std::endl;
  return 0;
}
