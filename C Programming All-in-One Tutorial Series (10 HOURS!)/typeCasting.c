#include <stdio.h>

int main()
{
    int slice=17;
    int people=2;
    /* Two way to fix this:
        1)  Add .0 to a constant (2=2.0) //not always help
            int people=2;>>>>halfPizza=slice/people.0 <<wrong
        2)  Explicit type casting
        */
    
    
    printf("-----\n");
    double halfPizza=slice/2.0;
    printf("double halfPizza=slice/2.0 = %f\n", halfPizza);
    printf("-------\n");
    double halfPizza1=slice/(double)people;
    printf("double halfPizza1=slice/(double)people = %f\n", halfPizza1);//double -> unary work only 1 operand.
    printf("--------\n");
    double halfPizza2=(double)(slice)/people;
     printf("double halfPizza1=(double)(slice)/people = %f\n", halfPizza2);//double -> unary work only 1 operand.
    printf("----------------------------------------------------\n");

    double c=25/2*2;
    printf("double c=25/2*2 = %f\n-----------\n",c);   //int 24
    double d=25/2*2.0;
    printf("double d=25/2*2.00 = %f\n-----------\n",d);   //int/int*double =24
    double e=25/2.0*2;
    printf("double c=25/2.0*2 = %f\n-----------\n",e);   //25



    return 0;
}