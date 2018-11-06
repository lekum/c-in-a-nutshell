#include <stdio.h>

enum color { blue, black, orange = 7, red };

enum color shift(enum color c)
{
  c += 1;
  return c ;
}


int main()
{
  enum color c1 = black;
  enum color c2 = shift(c1);
  printf("Original color: %d\n", c1);
  printf("New color: %d\n", c2);
}
