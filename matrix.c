#include <stdio.h>

int main()
{

    float matA[2][2];
    float matB[2][2];
    float matC[2][2] = {0, 0, 0, 0};

    printf("Enter the number for matrix A :\n ");

    //soriing number in matrix A
    int i, j;
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &matA[i][j]);
        }
    }
    printf("Enter the number of matrixB:\n");
    //soriing number for matrix matrix B
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &matB[i][j]);
        }
    }

    // Adding the both matrix

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // now adding both matrixA and matrixB
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%f \t", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}