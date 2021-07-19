#include <stdio.h>
#include <string.h>
void abc(int *, int *);
int main()
{
    int a, b, l;
    char name[] = "Best of luck";
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b); //a=5,b=4
    abc(&a, &b);
    l = strlen(name);
    printf("\nLength of the string is %d\t:", l);
    printf("\na=%d and b=%d\t", a, b);
    return 0;
}

void abc(int *a, int *b)
{
    *a = *a + 5;
    *b = *b + 3;
    printf("\na=%d and b=%d\t", *a, *b);
}