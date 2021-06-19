// Program to find airthematic calculation using functions
#include <stdio.h>

int addition(int number_one, int number_two);
int subtraction(int number_one, int number_two);
int multiplication(int number_one, int number_two);
int division(int number_one, int number_two);

// main functiom
int main()
{
    int number_a, number_b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &number_a, &number_b);
    printf("%d + %d = %d\n", number_a, number_b, addition(number_a, number_b));
    printf("%d - %d = %d\n", number_a, number_b, subtraction(number_a, number_b));
    printf("%d * %d = %d\n", number_a, number_b, multiplication(number_a, number_b));
    printf("%d / %d = %d\n", number_a, number_b, division(number_a, number_b));
    return 0;
}

// function to addition
int addition(int number_one, int number_two)
{
    int result;
    result = number_one + number_two;
    return result;
}

// function to subtraction
int subtraction(int number_one, int number_two)
{
    int result;
    result = number_one - number_two;
    return result;
}

// function to multiplication
int multiplication(int number_one, int number_two)
{
    int result;
    result = number_one * number_two;
    return result;
}

// function to division
int division(int number_one, int number_two)
{
    int result;
    result = number_one / number_two;
    return result;
}
