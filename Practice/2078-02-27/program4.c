// Program to Find Product of digits of given integer number even or odd
// if even cont the digist
// if odd find sum of digits 
#include <stdio.h>
int main()
{
    int number, product=1, remainder_a ,count, temp, remainder_b, sum;
    // Finding product
    printf("Enter a number: ");
    scanf("%d", &number);
    while(number != 0)
    {
        remainder_a = number % 10;
        product *= remainder_a;
        number /=  10;
    }
    printf("The Product is : %d", product);
    // Finding product is odd or even
    if (product % 2 == 0)
    {
        printf("\nThe number of digits in an product is Even, So:");
        while (product != 0)
        {
            product = product / 10;
            count++;
        }
        printf("\nThe number of digits in an product is : %d \n", count);
    }
    else
    {
        printf("\nThe number of digits in an product is Odd, So:");
        temp = product;
        while (temp != 0)
        {
            remainder_b = temp % 10;
            sum = sum + remainder_b;
            temp = temp / 10;
        }
        printf("\nSum of digits of %d = %d\n", product, sum);
    }
}
