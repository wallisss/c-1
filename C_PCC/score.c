#include <stdio.h>
int get_int(){
    int b=0;
    do{
    //printf("number: ");
    scanf("%d", &b);
    } while (b<1);
    return b;
}
int main(void)
{
   int score1=72;
   int score2=73;
   int score3=33;

   printf("Average: %f\n",(score1+score2+score3)/3.0);

    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
   
   int sc[3]; 
   sc[0]=72;
   sc[1]=73;
   sc[2]=33;

   printf("Average: %f\n",(sc[0]+sc[1]+sc[2])/3.0);
   printf("How many number? :");
   int total=get_int();
   int scor[total];
   for (int i=0;i<total;i++)
   {
       printf("Number %i:",i);
       scor[i]=get_int();
   }
   printf("Average: %f\n",(sc[0]+sc[1]+sc[2])/(float)total);
   



}