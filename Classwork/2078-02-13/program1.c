// Program to Calculate product using function
#include <stdio.h>
#include <conio.h>
int mul(int, int);
main()
{
    int a, b, pro;
    printf("Input two integer numbers:");
    scanf("%d%d", &a, &b);
    pro = mul(a, b);
    printf("Multiplication of two integer=%d", pro);
    getch();
}
int mul(int x, int y)
{
    int p;
    p = x * y;
    return (p);
}
