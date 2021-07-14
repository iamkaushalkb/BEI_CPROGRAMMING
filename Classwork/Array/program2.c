#include <stdio.h>

#define I 2
#define J 3

void read(int[][J]);
void processing(int[][J]);
void display(int[][J]);

int main()
{
    int mat[I][J];

    read(mat);
    processing(mat);
    display(mat);
    return (0);
}

void read(int mat[][J])
{
    int a, b;
    printf("\nEnter matrix elements : \n");
    for (a = 0; a < I; a++)
    {
        for (b = 0; b < J; b++)
        {
            printf("\n[%d][%d] = ", a, b);
            scanf("%d", &mat[a][b]);
        }
    }
}

void processing(int mat[][J])
{
    int a, b;
    for (a = 0; a < I; a++)
    {
        for (b = 0; b < J; b++)
        {
            mat[a][b] *= 2;
        }
    }
}

void display(int mat[][J])
{
    int a, b;
    for (a = 0; a < I; a++)
    {
        printf("\n|");
        for (b = 0; b < J; b++)
        {
            printf("\t%d\t", mat[a][b]);
        }
        printf("|\n");
    }
}