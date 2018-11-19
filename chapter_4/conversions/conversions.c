#include <complex.h>
#include <stdio.h>
#include <math.h>

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
  d_z += I;
  printf("d_z = %.2f+j%.2f\n", creal(d_z), cimag(d_z));


  int i = 7;
  float b = 0.5;

  i = b;

  b += 2.5;
  b = sqrt(i);

  printf("%f\n", b);

  int *iPtr = 0;
  int iArray[] = {0,10,20};
  int array_length = sizeof(iArray) / sizeof(int);

  printf("The array starts at the address %p.\n", iArray);

  *iArray = 5; // Equivalent to iArray[0] = 5;
  iPtr = iArray + array_length - 1; // Equivalent to iPtr = &iArray[array_length-1];

  printf("The last element of the array is %d.\n", *iPtr);

  for (int i=0; i<array_length; i++)
  {
    printf("%d\n", iArray[i]);
  }

}
