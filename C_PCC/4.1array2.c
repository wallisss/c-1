#include <stdio.h>

int main()
{
    int rows = 3;
    int columns = 4;//arrsy size must be compile time constant

    int studentGrad[][4] = {
/*
Different ways to initialize two-dimensional array

int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
int c[][3] = {{1, 3, 0}, {-1, 5, 9}};     
int c[2][3] = {1, 3, 0, -1, 5, 9};
*/

        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}
        };

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",studentGrad[i][j]);
        }
        printf("\n");
    }



    return 0;
}