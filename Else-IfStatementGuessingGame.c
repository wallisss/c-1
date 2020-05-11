/*  doctor office
    1.add a patient
    2.View a patient
    3.Search patients
    4.exit
 */

#include <stdio.h>


int main()
{
    printf("Choase a menu option 1-4 \n");
    printf("1.add a patient \n");
    printf("2.View a patient \n");
    printf("3.Search patients\n");
    printf("4.exit\n");

    int input;
    scanf("%d", &input);
    if (input==1)
    {
        printf("1.add a patient \n");
    }else if (input==2)
    {
        printf("2.View a patient \n");
    }else if (input==3)
    {
        printf("3.Search patients\n");
    }else if ( input==4)
    {
        printf("4.exit\n");
    }else
    {
        printf("Incorrect input");
    }
    
    return 0;
}