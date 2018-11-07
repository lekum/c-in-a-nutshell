#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum { ARR_LEN = 100 };

int main()
{
  int i;
  int *pNumbers = malloc(ARR_LEN * sizeof(int));

  if (pNumbers == NULL)
  {
    fprintf(stderr, "Insufficient memory.\n");
    exit(1);
  }

  srand((unsigned)time(NULL)); // Initialize the random number generator

  for (i=0; i < ARR_LEN; ++i)
    pNumbers[i] = rand() % 10000;

  printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN);

  for (i=0; i < ARR_LEN; ++i)
  {
    printf("%6d", pNumbers[i]);
    if (i % 10 == 9) putchar('\n');
  }
  free(pNumbers); // Release the storage space
  return 0;
}
