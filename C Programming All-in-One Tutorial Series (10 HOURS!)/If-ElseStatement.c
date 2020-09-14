/* The user has to guess a number 0-6.
output whether or not the person is correct */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Generate a random number
    //pseudo random number generator.
    //this gets seeded
    //output a result
    //seed - from the clock

    int maxValue =6;
    srand(time(NULL));
    int randomNumber=rand()% maxValue+1;

    printf("%d\n",randomNumber );

    //modulus operator %
    //remainder of some division

    printf("Guess a number 0- %d :", maxValue);
    int input;
    scanf("%d", &input);

    if(input==randomNumber)
    {
        printf("You win!!!\n");
    } else
        {
        printf("You don`t win! Try again!\n");
        }
    




    return 0;
}