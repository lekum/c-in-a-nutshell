#include <stdlib.h>
#include <stdio.h>
#define ARR_LEN 20

/*
 * A function to compare any two float elements,
 * for use as a call-back function by qsort().
 * Arguments are passed by pointer
 *
 * Returns: -1 if the first is less than the second,
 *           0 if the elements are equal;
 *           1 if the first is greater than the seconds.
 */
int floatcmp(const void* p1, const void* p2)
{
  float x = *(float *)p1,
        y = *(float *)p2;
  return (x < y) ? -1: ((x == y) ? 0 : 1);
}

int main()
{
  float *pNumbers = malloc(ARR_LEN*sizeof(float));
  for (int i = 0; i < ARR_LEN; i++)
    pNumbers[i] = i + i%4 + i%3;
  qsort(pNumbers, ARR_LEN, sizeof(float), floatcmp);
  for (int i = 0; i < ARR_LEN; i++)
    printf("pNumbers[%d]=%.2f\n", i, pNumbers[i]);
}
