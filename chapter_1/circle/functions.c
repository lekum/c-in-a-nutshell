#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

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
	wchar_t wc = L'\u00df';
	char mbStr[MB_CUR_MAX];
	int nBytes = 0;
	nBytes = wctomb( mbStr, wc);
	if ( nBytes < 0 )
		puts("Not a valid multibyte character in your locale.");
	printf("MB_CUR_MAX = %zu\n", MB_CUR_MAX);
	printf( "%s\n", mbStr ); 
}
