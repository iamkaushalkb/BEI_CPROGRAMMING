// Program to calculate the following series: 2+4+6+…… upto n terms.
#include <stdio.h>
int main()
{
    int n, sum = 0, i, term = 2;
    printf("\nEnter n:\t");
    scanf("%d", &n);        
    for (i = 1; i <= n; i++) 
    {
        printf("%d\t", term);
        sum += term; 
        term += 2;  
    }
    printf("\nThe sum is:\t%d", sum);
    return 0;
}return 0;
}
