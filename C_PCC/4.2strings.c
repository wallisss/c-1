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
    printf("Size of name is %lu \n", strlen(name)); //%lu long unsigned int
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

    if (strcmp(name, "caleb") == 0)
    {
        printf("You get access!");
    }
    else
        printf("Intruder alert!");

    return 0;
}