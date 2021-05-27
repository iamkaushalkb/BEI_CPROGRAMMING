// Program to find least among two numbers using function
#include <stdio.h>

int smallest(int, int); 
int main()
{
    int a, b;
    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &a, &b);
    printf("Smallest of %d and %d is %d\n", a, b, smallest(a, b));

    return 0;
}
int smallest(int x, int y)
{
    return (x < y ? x : y);
}
