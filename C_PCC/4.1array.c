#include <stdio.h>

int main()
{
    //int ages[10];//[10] mean array with 10 elem. first 0 (0-9)
    int size=8;
    int ages[]={1,2,3,4,5,44,66};
    int Size=sizeof(ages)/sizeof(ages[0]);
    ages [4]=65;

    for(int i=0;i<size;i++)
    {
        printf("%d ",ages[i]);
    }
    printf("\nsize of %d",Size);









    return 0;
}