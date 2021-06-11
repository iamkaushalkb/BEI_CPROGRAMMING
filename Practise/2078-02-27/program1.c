// C program to find the sum of factorial of all the prime 
// factors of a given number
#include <stdio.h>
int main()
{
    int number, initial_a, initial_b, temp, initial_c, fact, sum = 0;
    printf("Enter the number.");
    scanf("%d", &number);
    for (initial_a = 1; initial_a <= number; initial_a++)
    {
        if (number % initial_a == 0)
        {
            temp = 0;
            for (initial_b = 1; initial_b <= initial_a; initial_b++)
            {
                if (initial_a % initial_b == 0)
                {
                    temp = temp + 1;
                }
            }
            if (temp == 2)
            {
                fact = 1;
                for (initial_c = 1; initial_c <= initial_a; initial_c++)
                {
                    fact = fact * initial_c;
                }
                sum = sum + fact;
            }
        }
    }
    printf("Sum of Prime Factors : %d.\n", sum);
    return 0;
}
