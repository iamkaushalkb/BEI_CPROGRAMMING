// Program to find second largest number among three numbers
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three no.s:");
    scanf("%d %d %d", &a, &b, &c);
    // Comparing numbers a and b also a and c
    if (a > b && a > c)
    {
        // Comparing numbers b and c
        if (b > c)
        {
            printf("% d is the second largest no.", b);
        }
        else
        {
            printf("% d is the second largest no.", c);
        }
    }
    // Comparing numbers b and a also b and c
    if (b > a && b > c)
    {
        // Comparing numbers a and c
        if (a > c)
        {
            printf("the second largest no.is % d", a);
        }
        else
        {
            printf(" the second largest no.is % d", c);
        }
    }
    // Comparing numbers c and a also c and b
    if (c > a && c > b)
    {
        // Comparing numbers b and a
        if (b > a)
        {
            printf("second largest no.is % d", b);
        }
        else
        {
            printf("second largest no.is % d", a);
        }
    }
}