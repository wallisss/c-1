#include<stdlib.h>
#include<stdio.h>
#include "cs50.h" 

int main(void)
{
    int* x;
    int* y;
    
    x=malloc(sizeof(int));

    *x=42;
    *y=13;
    printf("1x is %i\n",*x);
    printf("1y is %i\n",*y);
    y=x;
    *y=13;
    printf("2x is %i\n",*x);
    printf("2y is %i\n",*y);

}