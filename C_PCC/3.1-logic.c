#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age=18;
    if(!(age>17))//mean !(true) = false >>> oposite 
    {
        printf("This is adult \n");
    }
    else
    {
        printf("This is not adult \n");
    }
    double money=30000;
    bool isGraduated=true;
    if(age>17 && money>25000 || isGraduated)//mean !(true) = false >>> oposite 
    {
        printf("This is rich \n");
    }
    else
    {
        printf("This is not rich \n");
    }




    return 0;
}