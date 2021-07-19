// C program to find maximum and minimum using functions by pass by refrence
#include <stdio.h>
int calc_max_min(int, int, int *, int *);
int main()
{
    int number_a, number_b, minimum, maximum;
    printf("Enter two values : ");
    scanf("%d%d", &number_a, &number_b);
    calc_max_min(number_a, number_b, &maximum, &minimum);
    printf("\n Maximum : %d\n Minimum : %d\n", maximum, minimum);
    return 0;
}
int calc_max_min(int num_a, int num_b, int *num_aptr, int *num_bptr)
{
    if (num_a > num_b)
    {
        *num_aptr = num_a;
        *num_bptr = num_b;
    }
    else
    {
        *num_aptr = num_b;
        *num_bptr = num_a;
    }
    return 0;
}