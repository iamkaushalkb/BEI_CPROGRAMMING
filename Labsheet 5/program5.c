// Program to find palindrome number in the given range
#include <stdio.h>
int checkPalindrome(int number)
{
    int temp, remainder, rev = 0;
    temp = number;
    while (number != 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    if (rev == temp)
        return 0;
    else
        return 1;
}

int main()
{
    int min, max;
    printf("Enter min and max value of the range: ");
    scanf("%d %d", &min, &max);
    printf("Palindrome number in the given range are: \n");
    for (int i = min; i <= max; i++)
        if (checkPalindrome(i) == 0)
            printf("%d\t", i);

    return 0;
}
