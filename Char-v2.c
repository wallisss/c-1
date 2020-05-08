#include <stdio.h>

int main()
{
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c", &ASCII);
    printf("ASCII code is: %i\n",ASCII);

    int integer;
    printf("Please enter an integer(ASCII code) between 0-127 :");
    scanf("%i",&integer);
    printf("Character is :%c\n",integer);

    //Math with ASCII:
    char mathz='A'+'\t';    //ASCIU(11)=vertical tab
    printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz); //%s is for string %d is for decimal (or int) %c is for character

    return 0;
}