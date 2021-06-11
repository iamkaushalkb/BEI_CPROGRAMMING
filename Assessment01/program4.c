/*
  *Program to determine given triangular number 
  *If it is traingular number calculate the prime factors
*/
#include <stdio.h>
int main()
{
    int number, i, sum = 0, j, init, isPrime;
    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        sum = sum + i;
        if (sum == number)
        {
            printf("%d is TRIANGULAR NUMBER.\n", number);
            printf("All Prime Factors of %d are: \n", number);
            for (init = 2; init <= number; init++)
            {
                if (number % init == 0)
                {
                    isPrime = 1;
                    for (j = 2; j <= init / 2; j++)
                    {
                        if (init % j == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime == 1)
                    {
                        printf("%d, \n", init);
                    }
                }
            }
            break;
        }
    }
    if (number == i)
    {
        printf("%d is NOT TRIANGULAR NUMBER.\n", number);
    }
    return (0);
}
