#include <stdio.h>

int main()
{
    int a = 100;
    int *b = &a; //b store at location in mem a

    printf("a  =%d\n", a);
    printf("*b =%d\n", *b);

    return 0;
}
