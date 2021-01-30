#include <stdio.h>
#include <string.h>


int main()
{
    char name[21]; // 1 reserved for'\0'
    printf("Enter name(max 20 character):");
    scanf("%20s", name);

    int letter = 0;
    while (name[letter] != '\0')
    {
        letter++;
    }

    printf("Size of name is %d \n", letter);
    printf("Size of name is %lu \n", strlen(name)); //strlen() function calculates the length of a given string.
    printf("name is :%s\n", name);


    return 0;
}
int get_po(){
    int b=0;
    do{
    printf("Input +number: ");
    scanf("%d", &b);
    } while (b<1);
    return b;}