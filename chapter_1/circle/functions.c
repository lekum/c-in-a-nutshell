#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// The function circularArea() calculates the area of a circle
// Parameter: The radius of the circle
// Return value: The area of the circle

double circularArea( double r )
{
    const double pi = 3.1415926536;
    return pi * r * r;
}

double printChars()
{
	char *loc_str = setlocale(LC_ALL, "");
	if (loc_str == 0)
		printf("Failed to set locale\n");
	printf("LC_ALL = %s\n", loc_str);
	wchar_t wc = L'\x3B1';
	char mbStr[MB_CUR_MAX];
	int nBytes = 0;
	nBytes = wctomb( mbStr, wc);
	if ( nBytes < 0 )
		puts("Not a valid multibyte character in your locale.");
	printf("MB_CUR_MAX = %zu\n", MB_CUR_MAX);
	printf( "%s\n", mbStr ); 
}
