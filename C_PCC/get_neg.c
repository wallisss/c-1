#include<stdio.h>
int getin(){
    int b=0;
    do{
    printf("Input number: ");
-1    scanf("%d", &b);
    } while (b>=0);
    return b;
}
int main(void){
    int m=getin();
    printf("You entered %i\n",m);

}
