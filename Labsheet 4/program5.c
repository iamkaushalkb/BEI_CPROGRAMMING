// Program to check maximum and minimum by user choice
#include <stdio.h>

int main()
{
    int num, max = 0, min = 654656;
    char option;
    do
    {
        printf("Enter a number :");
        scanf("%d", &num);
        // Assigning num to max if num > max
        if (num > max)
        {
            max = num;
        }
        // Assigning num to min if num < min
        if (num < min)
        {
            min = num;
        }
        printf("Do you want to Continue(y/n)? ");
        scanf(" %c", &option);
    } while (option == 'y' || option == 'Y');

    printf("\nMaximum num :%d\nMinimum num :%d", max, min);
    return 0;
}
