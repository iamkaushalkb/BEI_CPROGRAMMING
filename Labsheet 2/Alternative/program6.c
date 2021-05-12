#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, phase1, phase2, phase3, verify;

    printf("ENTER THREE DIGIT NUMBER : ");
    scanf("%d", &num);

    phase1 = num % 10;
    phase2 = ((num % 100) - phase1) / 10;
    phase3 = (num - (num % 100)) / 100;

    verify = pow(phase1, 3) + pow(phase2, 3) + pow(phase3, 3);

    if (num == verify)
    {
        printf("It is armstrong number");
    }
    else
    {
        printf("It is not armstrong number");
    }
    return 0;
}
