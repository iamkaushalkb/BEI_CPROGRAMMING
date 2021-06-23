// Program to Sort in accending order by using array and function
#include <stdio.h>
void asc_sort(int a[100], int n);
void sort_display(int a[10]);
void main()
{
    int a[100], i, n;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    asc_sort(a, n);
    sort_display(a);
}
void asc_sort(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sort_display(int a[10])
{
    int i, n;
    printf("Array in ascending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
