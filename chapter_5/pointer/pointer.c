#include <stdio.h>

int main()
{
  double dArr[5] = { 0.0, 1.1, 2.2, 3.3, 4.4 };
  double *dPtr = dArr;

  int i = 0;

  dPtr += 1; // Advance dPtr to the second element
  dPtr = 2 + dPtr; // dPtr now points to dArr[3]

  printf("%.1f\n", *dPtr);
  printf("%.1f\n", *(dPtr -1));

  i = dPtr - dArr; // The index of the array element that dPtr points to
  printf("Pointer: %p\n", dPtr);
  printf("Position: %d\n", i);
}
