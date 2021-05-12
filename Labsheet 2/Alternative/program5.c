#include <stdio.h>
int main()
{
    int a,b,c,x;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;
    if (x==c)
       printf("It IS PALINDROME NUMBER. ");
    else
       printf("It IS NOT PALINDROME NUMBER. ");
    return 0;

}
