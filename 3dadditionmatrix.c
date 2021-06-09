#include <stdio.h>

int main()
{
    int result[3][4];
    int array[2][3][4] = {{{1, 0, -1, 4},
                           {2, 8, 11, -2},
                           {4, 5, 0, 0}},

                          {

                              {-1, 10, 1, 3},
                              {5, 5, 5, 5},
                              {14, 5, 0, 1}}};

    int i, j;
    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 4; j++)
        {
            result[i][j] = array[0][i][j] + array[1][i][j];
        }
    }
    printf("The number are: \n");

    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 4; j++)
        {

            printf(" %d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}