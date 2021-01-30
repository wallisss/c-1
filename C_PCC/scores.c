#include <stdio.h>
int get_int(){
    int b=0;
    do{
    //printf("number: ");
    scanf("%i", &b);
    } while (b<1);
    return b;
}
float average(int length, int array[]);
int main(void)
{
   printf("Array length? :");
   const int TOTAL=get_int();
   int scores[TOTAL];
   for (int i=0;i<TOTAL;i++){
       printf("number %i:",i+1);
       scores[i]=get_int();
   }
   printf("Average: %f\n",average(TOTAL,scores));
}

float average(int length, int array[]){
    int sum=0;
    for (int i=0;i<length;i++){
        sum=sum+array[i];
    }
    printf("Summ=%i , Length=%i\n",sum,length);
    return sum/(float)length;    
}