#include <stdio.h>

int main()
{
    // + - * /
    

    int piceOfPizza=5;
    int numberOfEater=2;
    int leftOver=piceOfPizza %numberOfEater;
    printf("piceOfPizza %i moduls numberOfEater %i leftOver= %i\n",piceOfPizza,numberOfEater,leftOver);   
    return 0;
}