// Program to find Sum of odd and even using array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int oddSum = 0, evenSum = 0;
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    printf("The sum of odd numbers are: %d", oddSum);
    printf("\nThe sum of Even numbers are: %d", evenSum);
    getch();
    return 0;
}
