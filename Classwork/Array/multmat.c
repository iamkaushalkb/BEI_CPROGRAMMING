#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, j;
//matrix A *********************************************************************
entry:;
    int a1, b1;
    printf("\nNo. of rows\t= ");
    scanf("%d", &a1);

    printf("No. of columns\t= ");
    scanf("%d", &b1);

    int matrix1[a1][b1];

    printf("\nEnter the elements of 1st matrix: \n\n");
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < b1; j++)
        {
            printf("\tA[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

//matrix B *********************************************************************
    int a2, b2;
    printf("\nNo. of rows\t= ");
    scanf("%d", &a2);

    printf("No. of columns\t= ");
    scanf("%d", &b2);

    int matrix2[a2][b2];

    printf("\nEnter the elements of 2nd matrix: \n\n");
    for (i = 0; i < a2; i++)
    {
        for (j = 0; j < b2; j++)
        {
            printf("\tB[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
//Checking if dot product can be calculated ************************************
    if (a2 != b1){
        printf("\nThe matrices of different orders cannot be added !!\n");
        getch();
        system("cls");
        goto entry;
        //exit(1);
    }
//Calculating the dot product **************************************************
    int result[a1][b2];
    int k;
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < b2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < a2; k++)
            {
    //printf("result[%d][%d] += matrix1[%d][%d]*matrix2[%d][%d]\n",i,j,i,k,k,j);
                result[i][j] += matrix1[i][k]*matrix2[k][j];
                //result(00) = m1(00)*m2(00) + m1(01)*m2(10)
                //-> m1(i0)*m2(0j) + m1(i1)*m2(1j)
                //-> need 3rd loop for necessary increment
            }
        }
    }

//Printing *********************************************************************
    printf("\nResulting matrix is as follows: \n\n");
    for (i = 0; i < a1; i++)
    {
        printf("\t|");
        for (j = 0; j < b2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("|\n");
    }
    printf("\tOf order ( %d X %d )", a1, b2);
    getch();
    return 0;
}
