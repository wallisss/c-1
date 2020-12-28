#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(int argc, string argv[])
{
    //print argument
    for(int i=0 ;i<argc ; i++)
    {
        for(int j=0,n=strlen(argv[i]) ;j<n; j++)
        {
        //alt printf("Hello %c\n",argv[i][j]);
        string s=argv[i];
        printf("%c:",s[j]);//without \n +space
        }
        printf("\n");
    }



}