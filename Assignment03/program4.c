// Program to Print Tiangular number between two positive integers
#include <stdio.h>
void triangular(int, int);
int main()
{
    int n1, n2;
    printf("Enter two positive numbers for range:");
    scanf("%d%d", &n1, &n2);
    printf("The triangular numbers are: ");
    triangular(n1, n2);
    return 0;
}
void triangular(int na, int nb)
{
    int sum = 0, i, j, check;
    for (i = na; i <= nb; i++)
    {
        sum = 0;
        check = 0;
        j = 1;
        while (1)
        {
            sum = sum + j;
            if (sum == i)
            {
                check = 1;
                break;
            }
            else if (sum > i)
            {
                break;
            }
            j++;
        }
        if (check == 1)
        {
            printf("%d\t", i);
        }
    }
}