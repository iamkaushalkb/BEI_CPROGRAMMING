//code to take in n number of student's marks and give us the average marks.
#include <stdio.h>
#include <conio.h>

int main()
{
    // asking for the array size required.
    int num;
    printf("Input no. of students\t:");
    scanf("%d", &num);

    //array declaration.
    int a[num], i;

    //giving values to the created array.
    printf("\nInput marks of students:");
    for (i = 0 ; i < num; i++){
        printf("\nMarks of student %d\t=", i+1);
        scanf("%d", &a[i]);
    }

    //individually extracting each element of array to find sun & then the average.
    float average, sum = 0;
    for (i = 0 ; i < num; i++){
        sum += a[i];
        average = (float)sum / num;
    }

    //displaying the average calculated.
    printf("\n\nAverage Marks = %.2f", average);
    return 0;
}
