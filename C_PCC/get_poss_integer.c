#include<stdio.h>
int getin(void){    //void mean nothing go in function int mean return int
    int b;  //int n exsist inside curlbracket only(outside vek )
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
