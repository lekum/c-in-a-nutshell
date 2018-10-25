// circle.c: Calculate and print the areas of circles
#include "functions.h"
#include <stdio.h> // Preprocessor directive

int main()
    // Definition of main() begins
{
    double radius = 1.0, area = 0.0;
    printf( " Areas of Circles\n\n" );
    printf( " Radius Area\n" "-------------------------\n" );
    area = circularArea( radius );
    printf( "%10.1f %10.2f\n", radius, area );
    radius = 5.0;
    area = circularArea( radius );
    printf( "%10.1f %10.2f\n", radius, area );
    printChars();
    return 0;
}
