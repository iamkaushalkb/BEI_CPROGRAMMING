/*
 * Write a program to ask list of numbers from users, sort them and display sorted list using pointer.
*/
#include <stdio.h>
int main()
{
    int numbers[100], temp, i, n, j;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", numbers + i);
    }
    for (i = 0; i < (n - 1); i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(numbers + i) > *(numbers + j))
            {
                temp = *(numbers + i);
                *(numbers + i) = *(numbers + j);
                *(numbers + j) = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(numbers + i));
    }
    printf("\n");
}
