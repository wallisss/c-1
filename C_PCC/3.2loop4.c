#include <stdio.h>
#include <stdbool.h>

int main()
{
    //initilization
    //comparision
    //update
    int size = 10;
    int ages[] = {12, 15, 17, 21, 23, 44, 66, 33, 99};
    int calculatedSize = sizeof(ages) / sizeof(ages[0]); //total bites divide first cels bites

    for (int i = 0; i < calculatedSize; i++)
    {
        printf("ages[%d]=%d\n", i + 1, ages[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}