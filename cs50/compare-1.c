#include<string.h>
#include<stdio.h>
#include "cs50.h"  

int main(void)
{

    printf("Say something: ");
    char* s=GetString();

    printf("Say something: ");
    char* t=GetString();

    if(s != NULL && t !=NULL)
    {
        if (strcmp(s,t)==0)
        {
            printf("You typed the some thing!\n");
        }
        else
        {
            printf("You typed different thing!\n");
        }
        
    }
}