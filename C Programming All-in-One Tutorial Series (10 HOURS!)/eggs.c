#include <stdio.h>

int main()
{
      printf("The number of eggs for the dy:  ");
       int eggs;
       scanf("%i", &eggs);  //%i integer

       double dozen=(double)eggs/12;//type casting(v2-!!!)

       printf("You have %f dozen eggs.\n",dozen);//%f double(float)
    
    
    
    
    
    return 0;
}