#include <stdio.h>
#include <stdlib.h> //required for memory function

/*void fun() // get error 
{
    //x++;
}*/
void fun()
{
    int static x=0;//keep value because static (lifetime of prog.)
    x++;
    printf("x:%d\n",x);
}

int main()
{
    /* get error because y exist only insaid bracket
    int x=5;
    if(true) { int y=10; }
    y++;
    */
   fun();
   fun();
   fun();
    

    return 0;
}
