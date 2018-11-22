#include <gnu/libc-version.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
  printf("The GLIBC version present is %s\n", gnu_get_libc_version());
  int fd = open("kk.txt", O_WRONLY | O_CREAT | O_TRUNC, 0400);
  if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
  }
}
