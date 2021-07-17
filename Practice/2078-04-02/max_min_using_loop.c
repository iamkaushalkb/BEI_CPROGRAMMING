#include<stdio.h>
int main()
{
    int i, n, max,min, elements;
    printf ("How many set values you want to enter? : ");
    scanf ("%d", &elements);
    printf ("Enter first number : ");
    scanf ("%d", &n);
    max = n;
    min=n;
    for (i=1; i<= elements -1 ; i++)
    {
        printf ("Enter another number : ");
        scanf ("%d",&n);
        if (n>max)
        max=n;
        if (n<min)
        min=n;
    }
    printf ("The Maximum number is %d\n", max);
    printf ("The Minimum number is %d\n", min);
    return 0;
}
