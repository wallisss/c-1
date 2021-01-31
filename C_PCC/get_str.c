#include<stdio.h>
#include<string.h>

int main(void){
    char name[21]; // 1 reserved for'\0'
    printf("Enter name(max 20 character):");
    scanf("%20s", name);

    for(int i=0,n=strlen(name);i<n;i++)
    {
        if(name[i]>='a' && name[i]<='z' )
        {
            printf("%c",name[i]-32);
        }
        else
        {
            printf("%c",name[i]);
        }
    }




}