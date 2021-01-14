#include <stdio.h>
#include <stdlib.h> //required for memory function
#include <stdbool.h>
#include <string.h>

typedef struct  // user
{
    char name[30];
    int age;
    bool isVerified;

}user ;
user *createUser(char name[], int age, bool isVerified)
{
    user *newUser=malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age=age;
    newUser->isVerified=isVerified;
    return newUser;
};

int main()
{
    int size;
    printf("How many int elements u need bro?: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    if (arr == 0)
    {
        printf("Invalid pointer. Error allocating memory.\n");
        return -1;
    }
    else
    {
        printf("You`re good to go\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("el:%d =", i);
        scanf("%d", &arr[i]);
    }

    printf("Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d \n", i, arr[i]);
    }

    free(arr);

    user *me=createUser("Caleb Curry",22,false);

    printf("%s is %d year old!!\n",me->name,me->age);
    free(me);

    return 0;
}
