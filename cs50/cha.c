#include <stdio.h>

char* myFunction();

int main()
{
  printf("%s", myFunction());
};
char* myFunction()
{
    return "My String";
};