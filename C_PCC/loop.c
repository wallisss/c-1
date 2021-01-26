#include <stdio.h>

void vau(void);//Prototype
void meow(void){
        for(int i=0;i<3;i++){printf("Meow nr:%i\n",i+1);
}}//without ;
void au(int n) ;

int main(void){
    printf("meow\n");
    vau();
    meow();
    au(3);

}
void vau(void)  { printf("vau\n");  }  //without ;
void au(int n)  {
    for(int i=0;i<n;i++){
        printf("au nr:%i\n",i+1); 
    }
    }  //without ;
