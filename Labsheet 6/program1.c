// Program to enter 10 floating numbers in an array and display it.
#include <stdio.h>

int main()
{
    float numbers[9];
    int i;
    printf("Enter Your Numbers : \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%f", &numbers[i]);
    }
    printf("\nTen Floating Number: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("%f\n", numbers[i]);
    }
}
