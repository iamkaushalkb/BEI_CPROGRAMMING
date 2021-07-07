/*
 * Program to read square matrix and print 
 * the same matrix by replacing its diagonal elements by
 * minimum value among the elements of original matrix.
*/
#include <stdio.h>
int main()
{
    int a[3][3], i, j, s, temp;
    printf("Enter matrix element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    s = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s = (a[i][j] < s ? a[i][j] : s);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                a[i][j] = s;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
