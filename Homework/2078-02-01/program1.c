// Program to find factorial using while loop
#include<stdio.h>
 int main()
 {
     int number, i=1, fact=1;
     printf("Enter number:");
     scanf("%d",&number);
     while(i<=number)
     {
       fact *= i;
       i++;
     }
     printf("%d! = %d", number, fact);
     return 0;
 }
