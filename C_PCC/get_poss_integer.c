#include<stdio.h>
int getin(){
    int b;
    do{
    printf("Input number: ");
    scanf("%d", &b);
    } while (b<1);
    return b;
}
int main(void){
    int m;
    m=getin();
    printf("You entered %i",m);

}
