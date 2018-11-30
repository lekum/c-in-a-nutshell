/* The function average() calculates the arithmetic mean of the numbers
 * passed to it in an array
 * Arguments: An array of float, and its length
 * Return value: The arithmetic mean of the array elements,
 * with type double.
 */
#include <stdio.h>

double average(const float *array, int length)
{
  double sum = 0.0;
  const float *end = array + length;
  if (length <= 0)
    return 0.0;
  for (const float *p = array; p < end; p++)
    sum += *p;

  return sum/length;
}

int main()
{
  const int ARRAY_LEN = 6;
  float nums[] = {4.32, 6.28, 0.0, -5.23, 3.0, 12.0};
  printf("avg = %g\n", average(nums, ARRAY_LEN));
}
