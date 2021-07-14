#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;

    printf("Enter the elements of 3 x 3 matrix: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix[i][j] *= 3;
        }
    }

    printf("Multiplying each element of the matrix by 3 we get ,\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
