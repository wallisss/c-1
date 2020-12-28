#include <stdio.h>

int main(void)
{
    //display mapping for upercase letter
    for (int i=46 ; i<136; i++)
    {
        printf("%i:%c ",i,(char)i);
    }

    //seperate uppercase from lowercase
    printf("\n");
    for (int j=46 ; j<97+26+13; j++)
    {
        printf("<%i:%c> ",j,(char)j-13);
    }
return 0;
}