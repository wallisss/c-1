#include <stdio.h>
#include <stdbool.h>

int main()
{
    //initilization
    //comparision
    //update
    
    int i=0;
    while (i<10)
    {
        printf("%d ",i);
        i++;
    }

    
    int input;
    do
    {
        printf("\nChoose a number between 0 and 9: ");
        scanf("%d", &input);
    } while (input<0||input>9);

    printf("%d Goodbye!!!",input);




    
    return 0;
}