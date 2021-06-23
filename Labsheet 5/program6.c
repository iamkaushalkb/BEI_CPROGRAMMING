// Programe to find Fibonacci Series Using Recursion
#include <stdio.h> 
int fibonacci(int);

int main(void)
{
    int n_terms;
    printf("Enter n_terms: ");
    scanf("%d", &n_terms);
    for (int n = 0; n < n_terms; n++)
    {
        printf("%d ", fibonacci(n));
    }
    return 0; 
}

int fibonacci(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}
