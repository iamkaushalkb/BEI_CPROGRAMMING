// Program to check whether an integer is prime or not using user defined function.
#include <stdio.h>
int main()
{
    int number, temp = 0;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &number);
    temp = prime(number);
    if (temp == 0)
        printf("\n%d IS A PRIME NUMBER", number);
    else
        printf("\n%d IS NOT A PRIME NUMBER", number);
    return 0;
}
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
