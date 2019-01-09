#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s <var>\n", argv[0]);
    exit(1);
  }
  char *var = argv[1];

  char *value = getenv(var);

  if (value != NULL)
  {
    puts(value);
  }
}
