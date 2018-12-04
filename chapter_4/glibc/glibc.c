#include <gnu/libc-version.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
  printf("The GLIBC version present is %s\n", gnu_get_libc_version());

  int fd = open("startup", O_RDONLY);
  if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
  }

  /* Open new or existing file for reading and writing, truncating tyo zero
   * bytes; file permissiones read+write for owner, nothing for all others */
  fd = open("myfile", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
  }

  /* Open new or existing file for writing; writes should always append to end
   * of file */
  fd = open("w.log", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, S_IRUSR | S_IWUSR);
  if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
  }

}
