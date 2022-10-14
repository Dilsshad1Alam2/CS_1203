
#include <stdio.h>
int main()
{
    int n, tempsq, square1 = 0, square2 = 0;
    printf("Enter a number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        square1 = square1 + i*i;
    } 
    printf("Square of the number is : %d",square1);

    square2 = (n * (n + 1) * (2 * n + 1)) / 6;

    printf("Also Square of the number is : %d",square2);

    return 0;
    
}


