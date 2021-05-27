#include <stdio.h>
int sum(int);
int main()
{
    int num, sumofeven;
    printf("Please enter number:");
    scanf("%d", &num);
    sumofeven = sum(num);
    printf("The sum of even number is:%d", sumofeven);
    return 0;
}
int sum(int a)
{
    int sum1 = 0, rem;
    while (a != 0)
    {
        rem = a % 10;
        if (rem % 2 == 0)
        {
            sum1 = sum1 + rem;
        }
        a = a / 10;
    }
    return (sum1);
}
