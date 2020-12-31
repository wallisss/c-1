#include <stdio.h>

void swap(int* a,int* b);

int main()
{
    int x=1;
    int y=2;

    printf("x is %i\n",x);
    printf("y is %i\n",y);
    printf("swaping...\n");

    swap(&x,&y);
    printf("Swaped!\n");
    printf("x is %i\n",x);
    printf("y is %i\n",y);



    return 0;
}
void swap(int* a,int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
    printf("a is %d\n",*a);
    printf("b is %d\n",*b);
}