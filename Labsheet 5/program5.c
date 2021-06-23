// Programt to find Factorial Using Recursion
#include <stdio.h>
int fact(int);
int main()
{
    int number;
    int f = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    f = fact(number);
    printf("Factorial of %d is %d\n", number, f);
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1; //base case
    else
        return (n * fact(n - 1)); //recursive call
}
