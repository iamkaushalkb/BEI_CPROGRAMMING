// C program to check Leap Year or not
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("NOT A YEAR");
    }

    return 0;
}