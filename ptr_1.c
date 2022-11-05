#include <stdio.h>
#include <stdlib.h>

int *sqr(int val){
    int x;
    int *pointer = &x;
    x = val * val;
    return pointer;
}

int main(int argc, char **argv){
int *square = sqr(5);
printf("%d \n", *square);
return 0;

}