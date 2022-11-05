#include <stdio.h>
#include <stdlib.h>

void generateArray(int n)
{
    int *t = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        t[i] = i + 1;
        printf("%d  ", t[i]);
    }
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

    //int *a;

    int n = 20;

    generateArray(n);

    //printArray(a, n);

    //free(a);

    return 0;
}