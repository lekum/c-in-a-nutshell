#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 100

int main()
{
  char a[10] = "Jim";
  printf("a = %s\n", a);
  printf("size of a = %zu\n", sizeof(a) /sizeof(char));
  printf("strlen(a) = %zu\n", strlen(a));
  for (int i = 0; i < (strlen(a) + 1) ; i++)
  {
    if (a[i] == '\0')
      printf("End of string\n");
    else
      printf("%c\n", a[i]);
  }

  double *pArray = NULL; int i = 0;
  pArray = malloc(ARRAY_SIZE * sizeof(double)); // Generate the array
  if (pArray != NULL) {
    for (i = 0; i < ARRAY_SIZE; i++)
    {
      pArray[i] = (double)rand()/RAND_MAX;
      printf("pArray[%d]=%.5f\n", i, pArray[i]);
    }
  }


}
