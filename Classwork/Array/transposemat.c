#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, hold = 0;
    printf("Enter order of matrix :");
    printf("\ni = ");
    scanf("%d", &i);
    printf("\nj = ");
    scanf("%d", &j);

    int mat[i][j]; //initialize matrix of order requested by user.
    int tmat[j][i];
//READ MATRIX ******************************************************************
    int a, b;
    printf("\nEnter the matrix:\n");
    for (a = 0; a < i; a++)
    {
        for (b = 0; b < j; b++)
        {
            printf("\n\tElement [%d][%d] = ", a, b);
            scanf("%d", &mat[a][b]);
        }
    }
//CALCULATION OF TRANSPOSE *****************************************************
    for (a = 0; a < j; a++)
    {
        for (b = 0; b < i; b++)
        {
            tmat[a][b] = mat[b][a];
        }
    }
//INPUT MATRIX IS **************************************************************
    printf("\nThe transpose of matrix of order %d X %d......:\n", i, j);
    for (a = 0; a < i; a++)
    {
        printf("\t|");
        for (b = 0; b < j; b++)
        {
            printf("%d\t", mat[a][b]);
        }
        printf("|\n");
    }
//DISPLAY TRANSPOSE ************************************************************
    printf("\nTranspose of matrix is.......of order %d X %d which is...\n", j, i);
    for (a = 0; a < j; a++)
    {
        printf("\t|");
        for (b = 0; b < i; b++)
        {
            printf("%d\t", tmat[a][b]);
        }
        printf("|\n");
    }

    getch();
    return 0;
}
