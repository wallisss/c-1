#include <stdio.h>

int main()
{
    int radius;   //The distance from outside to center of the circle
    printf("\nEnter radius : ",radius);
    scanf("%i" ,&radius)	;   //address of operator
    
    //int area=3.14159*(radius*radius); //logical error
    double area=3.14159*(radius*radius); 
    printf("\nHello Caleb Curry World! \n");
    printf("\nThe area of a circle with radius %i is : %f\n\n",radius,area);
       

  return 0;  
}

