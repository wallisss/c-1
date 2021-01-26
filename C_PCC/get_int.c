#include<stdio.h>
int getin(){
    int b;
    printf("Input number: ");
    scanf("%d", &b);
    return b;
}
int main(void){
    int n,m;
    m=getin(n);
    printf("You entered %i",m);

}
