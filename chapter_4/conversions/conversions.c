#include <complex.h>
#include <stdio.h>

int main()
{
  short n = -10;
  double x = 0.5, y = 0.0;
  float _Complex f_z = 2.0F + 3.0F * I;
  double _Complex d_z = 0.0;

  y = n * x;
  d_z = f_z + x;

  f_z = f_z / 3;
  d_z = d_z - f_z;
  printf("d_z = %.2f+j%.2f\n", creal(d_z), cimag(d_z));
}
