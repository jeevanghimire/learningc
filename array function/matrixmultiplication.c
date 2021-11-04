//Muliplying matrix using function
#include <stdio.h>
#define Row 2
#define Column 2
void multiplymat(int x[Row][Column], int y[Row][Column])
{
    int i, j, k;
    printf("The product of matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            int sum = 0;
            for (k = 0; k<2; k++)
            {
                sum = sum + x[i][k] *  y[k][j];
            }
            printf("%d\t", sum);
        }
        printf("\n");
    }
}

int main()
{
    int matA[2][2] = {
        {1, 2},
        {3, 4},
    };
    int matB[2][2] = {
        {1, 0},
        {0, 1},
    };
    multiplymat(matA,matB);
    return 0;
}