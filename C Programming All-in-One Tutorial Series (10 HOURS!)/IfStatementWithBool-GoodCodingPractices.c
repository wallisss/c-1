#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool pizzaIsHealthy;// This is a true or false on whether you like pizza
    int temp;
    
    printf("Do you believe in power of pizza? 1 is true 0 is false\n");
    scanf("%d", &temp);
    pizzaIsHealthy = temp;
    
    if (pizzaIsHealthy) //true as long asnot zero!!! example:if("pizzaIsHealthy")=true
    {
        printf("Welcom to my pizza APP\n");
    }
    else
        printf("Ops\n");

    return 0;
}