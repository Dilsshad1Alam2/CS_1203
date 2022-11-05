#include <stdio.h>
#include <stdlib.h>

int *generateArray(int n)
{
    int *t = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        t[i] = i + 1;

    }
    return t;
}

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}

int main(int argc, char **argv)
{

    int *a;

    int n = 20;

    a = generateArray(n);

    printArray(a, n);

    free(a);

    return 0;
}