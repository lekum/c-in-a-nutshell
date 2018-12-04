#include <stdio.h>

int main()
{
  int i = 222;
  printf("i = %d\n", i);
  printf("i & ~0x31 = %d\n", (i & ~0x31));
  printf("i << 3 = %d\n", (i << 3));
}
