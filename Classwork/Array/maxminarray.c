//code to take in n number of student's marks and give us the average marks.
#include <stdio.h>
#include <conio.h>

int main()
{
    // asking for the array size required.
    int n;
    printf("How many numbers?\t:");
    scanf("%d", &n);

    //array declaration.
    int a[n], i;

    //giving values to the created array.
    printf("\nInput numbers:");
    for (i = 0 ; i < n; i++){
        printf("\n-> %d\t=", i+1);
        scanf("%d", &a[i]);
    }

    //individually extracting each element of array to find sun & then the average.
    int max = a[0], min = a[0];
    for (i = 0 ; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }

        if (a[i] < min){
            min = a[i];
        }
    }

    //displaying the average calculated.
    printf("\n\nMaxterm = %d", max);
    printf("\n\nMinterm = %d", min);
    return 0;
}
