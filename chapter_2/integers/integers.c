#include <stdio.h>

int main()
{
	char ch = 'A';
	printf("The character %c has the character code %d and his size is %zu.\n", ch, ch, sizeof(ch));
	for (; ch <= 'Z'; ++ch)
		printf("%2c - %2d\n", ch, ch);
}
