// program to initialize one dimensional array of size 8
// display the sum and average of array elements
#include <stdio.h>
int main()
{
    int n = 8, i;
    float numbers[8], sum = 0.0, average;
    printf("Enter Your Numbers : \n");
    for (i = 0; i <= 7; i++)
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    average = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
