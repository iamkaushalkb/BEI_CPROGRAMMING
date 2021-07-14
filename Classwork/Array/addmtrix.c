#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
//matrix a*********************************
entry:;
    int a1, b1;
    printf("No. of rows = ");
    scanf("%d", &a1);

    printf("No. of columns = ");
    scanf("%d", &b1);

    int matrix1[a1][b1];
    int i, j;

    printf("Enter the elements of 1st matrix: \n");

    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < b1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

//matrix b ********************************************************
    int a2, b2;
    printf("No. of rows = ");
    scanf("%d", &a2);

    printf("No. of columns = ");
    scanf("%d", &b2);

    int matrix2[a2][b2];

    printf("Enter the elements of 2nd matrix: \n");

    for (i = 0; i < a2; i++)
    {
        for (j = 0; j < b2; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
//********************************************************************
    //system("cls");
    if ((a2 != a1) || (b1 != b2)){
        printf("\nThe matrices of different orders cannot be added !!\n");
        getch();
        system("cls");
        goto entry;
        //exit(1);
    }
//Calculating ***************************************************************
    int result[a1][b1];
    for (i = 0; i < a2; i++)
    {
        for (j = 0; j < b2; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

//printing********************************************************************
    printf("Result ,\n");
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < b1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
