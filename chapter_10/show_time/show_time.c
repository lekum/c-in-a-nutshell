#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define BUF_SIZE 200
int main(int argc, char *argv[])
{
time_t t;
struct tm *loc;
char buf[BUF_SIZE];

if (setlocale(LC_ALL, "") == NULL)
{
  printf("LC_ALL cannot be set\n");
	exit(1);
}
/* Use locale settings in conversions */
t = time(NULL);
printf("ctime() of time() value is: %s", ctime(&t));
loc = localtime(&t);
if (loc == NULL)
{
  printf("Error: localtime\n");
	exit(1);
}
printf("asctime() of local time is: %s", asctime(loc));
if (strftime(buf, BUF_SIZE, "%A, %d %B %Y, %H:%M:%S %Z", loc) == 0)
{
  printf("strftime returned 0\n");
	exit(1);
}
printf("strftime() of local time is: %s\n", buf);
exit(0);
}
