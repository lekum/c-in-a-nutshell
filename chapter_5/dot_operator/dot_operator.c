#include <stdio.h>

int main()
{
  struct Article {
    long number;
    char name[32];
    long price;
  };

  struct Article sw = {102030L, "Heroes", 5995L };
  printf("sw.name: %s\n", sw.name);
  struct Article *pw = &sw;
  printf("pw->name: %s\n", pw->name);
  sprintf(pw->name, "New name");
  printf("pw->name: %s\n", pw->name);
}
