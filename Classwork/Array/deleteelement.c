#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);

    int arr[n], i, del;

    for (i = 0; i < n; i++)
    {
        printf("Element [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nWhich index to delete ? : ");
    scanf("%d", &del);

    for (i = del; i < n; i++)
    {
        arr[i -1] = arr[i];
    }

    printf("\nThe array is :\n");
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
