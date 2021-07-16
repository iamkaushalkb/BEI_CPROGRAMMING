/*
 * WAP to read marks of 10 students secured in a subject.
 * Store them in an array using pointer notation.
 * Calculate average marks of them and display on screen.
 * Caclulate sum using pointer notation.
*/
#include <stdio.h>
int main()
{
    int marks[10], i, sum = 0;
    float avg;
    printf("Enter the marks of students:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", marks + i);
        sum += *(marks + i);
    }
    printf("The sum is=%d\n", sum);
    avg = sum / 10;
    printf("The average is =%f", avg);
    return 0;
}