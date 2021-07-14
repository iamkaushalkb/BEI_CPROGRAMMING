#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void read_matrix(int*);
int m, n;

int main()
{
    int i, j;
//matrix A *********************************************************************
    int a1, b1;
    int matrix1[50][50];
    read_matrix(*matrix1);
    a1 = m;
    b1 = n;
//matrix B *********************************************************************
    int a2, b2;
    int matrix2[50][50];
    read_matrix(*matrix2);
    a2 = m;
    b2 = n;
//Checking if dot product can be calculated ************************************
    if (a2 != b1){
        printf("\nThe matrices of different orders cannot be added !!\n");
        getch();
        exit(0);
    }
//Calculating the dot product **************************************************
    int result[a1][b1];
    int k;
    for (i = 0; i < a2; i++)
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

void read_matrix(int*matrix)
{
int i, j;
    printf("\nNo. of rows\t= ");
    scanf("%d", &m);

    printf("No. of columns\t= ");
    scanf("%d", &n);

    printf("\nEnter the elements of 1st matrix: \n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\tA[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
