#include <stdio.h>
// all good to go
int main()
{
    int m, n;

    printf("Enter the number for demension (m,n) :");

    scanf("%d%d", &m, &n);
    int matA[m][n];
    int matAt[m][n];
    printf("Enter %dx%d number for matrix", m, n);

    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matAt[i][j] = matA[j][i];
        }
    }

    printf("The transpose of given matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("\t%d \t", matAt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
