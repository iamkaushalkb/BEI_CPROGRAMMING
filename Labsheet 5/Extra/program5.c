// Program to count number of Digits in a number Using Recursions 

#include <stdio.h>
int count_of_digits(int);
int main()
{
    int number, count = 0;

    printf("\n Please Enter any Number\n");
    scanf("%d", &number);
    count = count_of_digits(number);
    printf("\n number of Digits in a Given Number = %d", count);
    return 0;
}

int count_of_digits(int number)
{
    static int count = 0;
    if (number > 0)
    {
        count = count + 1;
        count_of_digits(number / 10);
    }
    return count;
}
