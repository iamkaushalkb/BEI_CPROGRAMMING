// Program to perform calculation as per operations
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int perform;
    printf(" 1.Add\n 2.Subtraction\n 3.Multiply\n 4.Divide\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&perform);
    switch(perform)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}