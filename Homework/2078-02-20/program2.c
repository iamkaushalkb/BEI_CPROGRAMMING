// Program to calculate 2^3 +4^3 +6^3 +8^3 …. upto n terms
#include <stdio.h>
#include <math.h>

int main()
{
    int number, i;
    int sum = 0;
    printf("Enter the maximum values of series n: ");
    scanf("%d", &number);
    sum = pow(((number * (number + 1)) / 2), 2);
    printf("Sum of the series : ");
    for (i = 2; i <= number; i+2)
    {
        if (i != number){
            printf("%d^3 + ", i);
        }
        else{
            printf("%d^3 = %d ", i, sum);
        }
    }
    return 0;
}