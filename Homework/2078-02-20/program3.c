//Program to calculate the series 1 + 1/x + 1/(x^2) + ...
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, x, count = 0;
    float result = 0;

    printf("How many terms of the series would you like to print ? \n");
    printf("\n\t-> n\t= ");
    scanf("%d", &n);

    printf("\nWhat do you want the value of x to be ? \n");
    printf("\n\t-> x\t= ");
    scanf("%d", &x);

    int i;
    for (i = 0; i < n; i++)
    {
        result = result + (1 / (pow(x, i)));
        printf("+ 1/(%d^%d) ", x, i);
    }
    printf("\t
= %.4f", result);
	getch();
	return (0);
}