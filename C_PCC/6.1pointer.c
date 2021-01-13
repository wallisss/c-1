#include <stdio.h>

void square(int *input)
{
    *input *= *input;
}

int main()
{
    int a = 100;
    int *b = &a; //point(tell) b store at location in mem a addres>>same varible in memory

    printf("a  =%d\n", a);
    printf("*b =%d\n", *b);
    printf("b  =%d\n", b);

    a = 200;
    printf("a  =%d\n", a);
    printf("*b =%d\n", *b);

    *b = 300; //value in addres ...
    printf("a  =%d\n", a);
    printf("*b =%d\n", *b);

    int c = 400;
    b = &c;//b=add.memm *b=integer stored in c addres
    printf("c  =%d\n", c);
    printf("*b =%d\n", *b);
    printf("b  =%d\n", b);

    int x=5;
    square(&x);
    printf("x=%d\n",x);

    return 0;
}
