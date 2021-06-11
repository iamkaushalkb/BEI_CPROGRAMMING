// Program to check is number multiple of 5 and divisibel by 7
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number for the test:");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("\nThe number  is divisible by 5");
    }
    else
    {
        printf("\nThe number is not divisible by 5");
    }
    if (n % 7 == 0 || n % 11 == 0)
    {
        if (n % 7 == 0 && n % 11 != 0)
        {
            printf("\n %d is multiple of 7 but not of 11", n);
        }
        else if (n % 7 != 0 && n % 11 == 0)
        {
            printf("\n %d is multiple of 11 but not of 7", n);
        }
        else
        {
            printf("\n %d is multiple of 11 and 7", n);
        }
    }
    else
    {
        printf("\n %d is not multiple of 11 and 7", n);
    }
    return 0;
}
