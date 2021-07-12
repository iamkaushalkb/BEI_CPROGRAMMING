#include<stdio.h>
#include<string.h>

int main()
{
    char aj[1000];
    printf("\n\nEnter the string: ");
    gets(aj);
    strrev(aj); 
    printf("\nReverse of entered string is: %s", aj);
    return 0;
}
