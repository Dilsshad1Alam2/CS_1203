
#include <stdio.h>
int main()
{
    int n, squareM1 = 0, squareM2 = 0;
    printf("Enter a number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        squareM1 = square1 + i*i;
    } 
    printf("Square of the number is : %d",squareM1);

    squareM2 = (n * (n + 1) * (2 * n + 1)) / 6;

    printf("Also Square of the number is : %d",squareM2);

    return 0;
    
}




