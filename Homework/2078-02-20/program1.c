// Program to calculate the following series: 2+4+6+…… upto n terms
#include <stdio.h>
int main()
{
    int n, sum = 0, i, term = 2;
    printf("\nEnter n:\t");
    scanf("%d", &n);         //2
    for (i = 1; i <= n; i++) //3<=2
    {
        printf("%d\t", term);
        sum += term; //sum = sum+ term// sum = 0+2=2//sum = 2+4=6
        term += 2;   // term=2+2=4//term=6
    }
    printf("\nThe sum is:\t%d", sum);
    return 0;
}return 0;
}