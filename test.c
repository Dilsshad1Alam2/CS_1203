#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv) {

    int * a;
    int i, n, val;
    n = 3;
    a = (int *) malloc(n * sizeof(int));

    i = 0;
    scanf("%d", &val);
    while (val > 0)
    {
        a[n] = val;
        n= n+1;
        scanf("%d", &val);
    }
    
}

