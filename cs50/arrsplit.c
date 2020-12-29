#include <stdio.h>
#define N 10

int main()
{
    int a[N],arr1[N], arr2[N],pos,i,k1=0,k2=0;

    printf("Enter %d integer numbers\n",N);
    for(i=0;i<N;i++)
    {
        printf("Nr %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position to split the array into Two\n");
    scanf("%d",&pos);

    for(i=0;i<N;i++)
    {
        if(i<pos)
            arr1[k1++]=a[i];
        else
        
           arr2[k2++]=a[i]; 
    }
        printf("\nElement of first array ->> arr1[%d]\n",k1);
        for(i=0;i<k1;i++)
        {
            printf("%d\t", arr1[i]);
        }
        
        printf("\nElement of seond array ->>arr2[%d]\n",k2);
        for(i=0;i<k2;i++)
        {
            printf("%d\t", arr2[i]);
        }





    











return 0;
}