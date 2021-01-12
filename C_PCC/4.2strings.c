#include <stdio.h>
#include <string.h>/* https://www.programiz.com/c-programming/library-function/string.h/strlen */

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
    /*
%d, %i: signed integer values
%o: unsigned octal
%s: character array
%c: unsigned character
%f, %F: float
%ld: long
%x: lowercase hexadecimal
%X: uppercase hexadecimal
%e: exponential form for a double
%p: pointer
%a: unsigned integer
*/

    if (strcmp(name, "caleb") == 0)//int strcmp (const char* str1, const char* str2); The strcmp() function compares
    {
        printf("You get access!");
    }
    else
        printf("Intruder alert!\n");
    
    char copy[20];
    strcpy(copy, name); //char* strcpy(char* destination, const char* source);
    printf("Copy of name is:%s\n",copy);

    char lastName[]=" Curry";
    strcat(copy,lastName);  //char *strcat(char *destination, const char *source); (joins) two strings.
    printf("Full name is:%s\n",copy);


    return 0;
}