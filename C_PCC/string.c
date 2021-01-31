#include <stdio.h>



char name()
{
    char name[21]; // 1 reserved for'\0'
    printf("Enter name(max 20 character):");
    scanf("%20s", name);
   
};
int main()
{
    name();


}