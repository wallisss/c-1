#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int x=50;
    int y;//declaration
    y=10;//initilization
    printf("%s World\n", "Hello");  //%s string
   
   printf("The value of X x Y is:%d\n",x*y);   //%d integer
    printf("X: %d, Y: %d\n",x,y);
    
    printf("\nGive me a radius\n");
    int radius;
    scanf("%d", &radius);//evry time need change value of varible need & before
    printf("The value radius is :%d \n",radius);

    printf("Give me name with max 6 character \n");
    char name[7];//char array of 7 characters. '\0' take one spot ~~6 character usable
    scanf("%6s", name);//only %6s first 6 character save
    printf("%s names\n",name);

    return 0;
}
