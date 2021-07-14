#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("No. of rows = ");
    scanf("%d", &a);

    printf("No. of columns = ");
    scanf("%d", &b);

    int matrix[a][b];
    int i, j;

    printf("Enter the elements of 3 x 3 matrix: \n");

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix[i][j] = pow(matrix[i][j], 5);
        }
    }

    printf("raising each element of the matrix by 5 we get ,\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
