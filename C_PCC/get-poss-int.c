#include<stdio.h>

int get_int(void){
    int b;
    do{
    printf("Input number: ");
    scanf("%d", &b);
    } while (b<1);
    return b;
}
int get_positive_int(void);

int main(void){
    int i=get_int();
    printf("You input :%i\n",i);

}

int get_positive_intt(void){
    int n;
    do{
        n=get_int("Positive integer: ");
    }
while(n<1);
return n;

}