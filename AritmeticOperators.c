#include <stdio.h>

int main()
{
    // + - * /
    int x=2+3*4/3-2;//order precedence * / + - x=(2+((3*4)/3))-2
    printf("%i\n",x);   
    return 0;
}