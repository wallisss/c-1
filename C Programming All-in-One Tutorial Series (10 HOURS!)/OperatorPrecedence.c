#include <stdio.h>

int main()
{
    
    // https://en.cppreference.com/w/c/language/operator_precedence
    int x,y;
    x=y=5;//right to left >>x=(y=5)
    //  y=5;
    //  x=y;

    int z=20;
    //y=2;
    x=-y+z;

    //x=-(y+z); x=-25
    //x=(-y)+z; x=15

    printf("%i\n",x);

    return 0;
}