#include <stdio.h>

// Program to see when for loop fails
int main()
{
    float a;

    for(a=0.000000; a < 0.000001; a = a + 0.0000001)
    {
        printf("value of a :%f\n", a);
    }

    return 0;
}