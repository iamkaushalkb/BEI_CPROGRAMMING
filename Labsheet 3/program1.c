// Program to convert uppercase to lowercase and viceversa
#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    printf("Enter an alphabet : ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        a = a + 32;
        printf("The Lowercase is : %c", a);
    }
    else
    {
        a = a - 32;
        printf("The Uppercase is : %c", a);
    }
}