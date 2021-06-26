#include <stdio.h>
void hcf(int, int);
void lcm(int, int);
void main()
{
    int number_a, number_b;
    printf("Enter two Numbers\n");
    scanf("%d %d", &number_a, &number_b);
    hcf(number_a, number_b);
    lcm(number_a, number_b);
}

void hcf(int n1, int n2)
{
    int gcd, lcm, remainder, numerator, denominator;
    if (n1 > n2)
    {
        numerator = n1;
        denominator = n2;
    }
    else
    {
        numerator = n2;
        denominator = n1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = n1 * n2 / gcd;
    printf("HCF of %d and %d = %d\n", n1, n2, gcd);
}
void lcm(int n1, int n2)
{
    int lcm, remainder, numerator, denominator;
    if (n1 > n2)
    {
        numerator = n1;
        denominator = n2;
    }
    else
    {
        numerator = n2;
        denominator = n1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    lcm = n1 * n2 / denominator;
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}