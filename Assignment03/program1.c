/*
  * WAP to read a number and find prime factors of it. Use function factors (), 
  * to find factors of given integer numbers and 
  * isPrime() to check whether that factor is prime number or not.
*/
#include <stdio.h>
#include <math.h>
int isPrime();
void factor();
int main()
{
    int number;
    printf("Enter your Integer : ");
    scanf("%d", &number);
    if (isPrime(number) == 0)
    {
        printf("%d is a prime number and\n", number);
    }
    else
    {
        printf("%d is not a prime number and\n", number);
    }
    printf("The Factors of given number is : ");
    factor(number);
    return 0;
}
int isPrime(int number)
{
    int count = 0;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (number == 1)
    {
        count = 1;
    }
    return count;
}
void factor(int n)
{
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        printf("%d ", n);
    }
}