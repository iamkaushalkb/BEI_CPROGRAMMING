// Program to calculate GCD of two numbers using recursion
#include <stdio.h>
int gcd(int x, int y);

int main()
{
    int num1, num2, hcf;
    printf("Enter two integer Values:\n");
    scanf("%d %d", &num1, &num2);
    hcf = gcd(num1, num2);
    printf("GCD: %d", hcf);
    return 0;
}

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y); //calls itself
    }
}
