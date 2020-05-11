/* Create a program  that take two doubles as input,
calculate the hypotenuse of a right triangel
and uotput it */

#include <stdio.h>
#include <math.h>   //sqrt

int main()
{
    double a,b;
    
    printf("This app will calculatethe hypotenuse of a right triangel. \n ");
   
    //Get first number
    printf("Enter the first value: ");
    scanf("%lf", &a);   //%lf->double, &a->in address of data a
   
    //Get second number
    printf("Now enter the second value: ");
    scanf("%lf", &b);   //%lf->double, &b->in address of data b
   
    //calculate the hypotenuse
    double c=sqrt((a*a)+(b*b));

    //output the hypotenuse
    printf("The hypotenuse is : %f\n", c);
    
    return 0;
}