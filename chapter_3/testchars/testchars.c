#include <stdio.h>


int main()
{
  int c = 0;

  while (1)
  {
    puts("Please enter a character:");
    c = getchar();
    printf("Entered: %c\n", c);
    if (c != EOF && c > '0' && c < '6')
    {
      puts("Character from 1 to 5");
    } else if (c == EOF)
    {
      break;
    } else
    {
      puts("Not interesting");
    }
  }
}
