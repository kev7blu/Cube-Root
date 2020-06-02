#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 )
    x = -x;
    return (x);
}

float cubeRoot (float x)
{
    float guess = 1.0;
    while (absoluteValue((guess * guess * guess) - x) >= .00001 )
    guess = (2.0 * guess * guess * guess + x) / (3.0 * guess * guess);
    
    return guess;
}

int main (void)
{
    printf ("cubeRoot (8.0) = %f\n", cubeRoot (8.0));
    printf ("cubeRoot (125.0) = %f\n", cubeRoot (125.0));
    printf ("cubeRoot (9.0) = %f\n", cubeRoot (9.0));
    printf ("cubeRoot (73.0) = %f\n", cubeRoot (73.0));

    return 0;
}
