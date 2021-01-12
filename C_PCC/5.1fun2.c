#include <stdio.h>
void changVal(int input)
{
    input=900000;
    int x=input;
    printf("xfunVal=%d\n",x);
}
void changValAdd(int *input)
{
    *input=900000;
    int x=*input;
    printf("xfunAdd=%d\n",x);
}
int main()
{
    int x = 5; 
    changVal(x);//fun not change value of x
    printf("x=%d\n",x);

    changValAdd(&x);//fun. change value of x
    printf("xAdd=%d",x);
    return 0;
}
