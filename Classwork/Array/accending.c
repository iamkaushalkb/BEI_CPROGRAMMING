#include <stdio.h>
#include <conio.h>

void ascending(int[], int);
void read(int[], int);
void display(int[], int);

int main()
{
    int n = 10, sum, prod;
    int arr[n];

    read(arr, n);
    ascending(arr, n);
    display(arr, n);

    getch();
    return (0);
}

void read(int a[], int n)
{
    int i;
    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("\n-> ");
        scanf("%d", &a[i]);
    }
}

void ascending(int a[], int n)
{
    int i, j, hold;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[i]){
                hold = a[i];
                a[i] = a[j];
                a[j] = hold;
            }
        }
    }
}

void display(int a[], int n)
{
    int i;
    printf("\nAscending order : ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
