#include <stdio.h>
void find_max(int);
int main()
{
    int num, temp, rem, count, fact, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    temp = num;
    while (num)
    {
        rem = num % 10;
        count = 1;
        fact = 1;
        while (count <= rem)
        {
            fact = fact * count;
            count++;
        }
        printf("Factorial of %d is %d\n", rem, fact);
        sum = sum + fact;
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("%d is a strong number\n", temp);
        find_max(temp);
    }
    else
    {
        printf("%d is not a strong number\n", temp);
    }
    return 0;
}
void find_max(int num)
{
    int large = 0, rem = 0;
    /* finding the largest digit of the given input */
    while (num > 0)
    {
        rem = num % 10;

        if (rem > large)
        {
            large = rem;
        }

        num = num / 10;
    }
    printf("Largest digit of the number is %d\n", large);
}