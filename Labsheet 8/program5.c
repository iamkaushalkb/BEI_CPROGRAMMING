// Write a program to read two numbers and swap their values using pass by reference method.
#include <stdio.h>
int swap(int *A, int *B);
int main()
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swapping=%d%d", *a, *b);
}
