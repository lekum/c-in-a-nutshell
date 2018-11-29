#include <stdio.h>
#include <string.h>

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
}
