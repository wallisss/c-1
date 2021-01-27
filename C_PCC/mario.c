#include <stdio.h>
int getin(void)
{
    int b;
    printf("Input number: ");
    scanf("%d", &b);
    return b;
}
int main(void)
{
    int m;
    m = getin();
    printf("You entered %i\n", m);
    for (int i = 0; i < m; i++)
    {
        printf("?");
    }
    printf("\n");
    for (int ii = 0; ii < m; ii++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
