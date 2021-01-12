#include <stdio.h>

int square(int input)
{
    return input * input;
}
int cube(int input)
{
    int x = input * input * input; //x outside not exist
    return x;
}
int power(int input, int exponent)
{
    int total = 1;
    for (int i = 0; i < exponent; i++)
    {
        total *= input;
    }
    return total;
}

int main()
{
    int x = 5; //diferent x
    printf("x3=%d\n", cube(x));
    x *= x; //x=x*x
    printf("x2=%d\n", x);

    int y = 3;
    int ySquared = square(y);
    printf("y2=%d\n", ySquared);
    printf("y3=%d\n", cube(y));

    printf("x=%d\n", x);
    int xTo5=power(x,4);
    printf("%d\n",xTo5);

    return 0;
}
