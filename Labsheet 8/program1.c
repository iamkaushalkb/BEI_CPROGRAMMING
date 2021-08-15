/*
 * Write a program to find the sum of all the elements of an array using pointers. 
*/
#include <stdio.h>
int addnum(int *ptr);

int main()
{
    int numbers[100], size, sum ,i;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }
    sum = addnum(numbers);
    printf("Sum of all array elements = %5d\n", sum);
    return 0;
}

int addnum(int *ptr)
{
    int i, total = 0;
    for (i = 0; i < 5; i++)
    {
        total += *(ptr + i);
    }
    return (total);
}
