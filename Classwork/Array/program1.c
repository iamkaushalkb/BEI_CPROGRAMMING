#include <stdio.h>

int add(int[], int);
int mult(int[], int);

int main()
{
    int n, sum, prod;
    printf("How many elements ? : ");
    scanf("%d", &n);

    int arr[n];

    int i;
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("\n-> ");
        scanf("%d", &arr[i]);
    }

    sum = add(arr, n);
    prod = mult(arr, n);

    printf("The sum of even = %d", sum);
    printf("\nThe product of odd = %d", prod);
    return (0);
}

int add(int a[], int n)
{
    int i, result = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            result += a[i];
        }
    }
    return result;
}

int mult(int a[], int n)
{
    int i, result = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            result *= a[i];
        }
    }
    return result;
}