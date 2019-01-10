#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    printf("Usage: %s <var> <value>\n", argv[0]);
    exit(1);
  }
  char *var = argv[1];
  char *value = argv[2];

  if (setenv(var, value, 1) == -1)
  {
    printf("Error setting %s=%s\n", var, value);
    exit(1);
  }

  char **ep;

  for (ep = environ; *ep != NULL; ep++)
    puts(*ep);

}
