// Write a program to find biggest among three numbers using pointer.
#include <stdio.h>
int main()
{
    int number_a, number_b, number_c;
    int *pt_a, *pt_b, *pt_c;
    printf("Enter First Number: ");
    scanf("%d", &number_a);
    printf("Enter Second Number: ");
    scanf("%d", &number_b);
    printf("Enter Third Number: ");
    scanf("%d", &number_c);
    pt_a = &number_a;
    pt_b = &number_b;
    pt_c = &number_c;
    if (*pt_a > *pt_b)
    {
        if (*pt_a > *pt_c)
        {
            printf("%d is the largest number", *pt_a);
        }
        else
        {
            printf("%d is the largest number", *pt_c);
        }
    }
    else
    {
        if (*pt_b > *pt_c)
        {
            printf("%d is the largest number", *pt_b);
        }
        else
        {
            printf("%d is the largest number", *pt_c);
        }
    }
    return 0;
}
