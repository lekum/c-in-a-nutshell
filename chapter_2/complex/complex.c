#include <complex.h>
#include <stdio.h>

int main()
{
  double complex z = 1.0 + 2.0 * I;
  printf("z1 = %.2f + j%.2f\n", creal(z), cimag(z));
  z *= I;
  printf("z2 = %.2f + j%.2f\n", creal(z), cimag(z));
}
