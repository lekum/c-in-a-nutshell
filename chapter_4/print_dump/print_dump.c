#include <stdio.h>

int main()
{
  struct Data
  {
    short id;
    double val;
  };

  struct Data myData = { 0x123, 77.7 };

  unsigned char *cp = (unsigned char *)&myData;

  printf("%p: ", cp); // Print the starting address
  for (int i = 0; i < sizeof(myData); i++)
    printf("%02X ", *(cp + i));
  putchar('\n');
}
