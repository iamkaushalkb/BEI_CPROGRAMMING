#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, trace = 0;
    printf("Enter order of square matrix :");
    printf("\ni = j = ");
    scanf("%d", &i);
    j = i;

    int mat[i][j]; //initialize matrix of order requested by user.
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
//CALCULATION OF TRACE *********************************************************
    for (a = 0; a < i; a++)
    {
        for (b = 0; b < j; b++)
        {
            if (a == b){
                trace += mat[a][b];
            }
        }
    }
//INPUT MATRIX IS **************************************************************
    printf("\nThe input square matrix of order %d is:\n", i);
    for (a = 0; a < i; a++)
    {
        printf("\t|");
        for (b = 0; b < j; b++)
        {
            printf("%d\t", mat[a][b]);
        }
        printf("|\n");
    }
//DISPLAY **********************************************************************
    printf("\nTrace of matrix = %d", trace);
    getch();
    return 0;
}
