// Program to find Fibonacci Series upto n terms.
// Also Cheking nth term is perfect number,
// And if it is perfect number find the factors.
#include <stdio.h>
int main()
{
    int count, phase1 = 0, phase2 = 1, phase_next, rem, sum = 0, i, init, num;
    // First step to find fibonacci serie upto given term
    printf("\n Enter the number of terms : ");
    scanf("%d", &count);
    printf("\n First %d terms of Fibonacci series:\n", count);
    for (i = 0; i < count; i++)
    {
        if (i <= 1)
        {
            phase_next = i;
        }
        else
        {
            phase_next = phase1 + phase2;
            phase1 = phase2;
            phase2 = phase_next;
        }
        printf("\n %d \n", phase_next);
    }
    // Second to find given term is perfect number or not
    for (i = 1; i < count; i++)
    {
        rem = count % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == count)
    {
        // Third Step to find factor of given term of perfect number
        printf("\n %d is a Perfect Number \n", phase2);
        printf("\n All factors of %d are: \n", phase2);
        /* Iterate from 1 to num */
        for (init = 1; init <= phase2; init++)
        {
            if (phase2 % init == 0)
            {
                printf("\n %d, \n", init);
            }
        }
    }
    else
    {
        printf("\n %d is not a Perfect Number", count);
    }
    return 0;
}
