// Program to convert first and last digit
#include <stdio.h>
 
int main() {  
    int num, extra, firstDigit, lastDigit;  
   
    /* 
     * Take a number as input from user
     */ 
    printf("Enter a Number\n"); 
    scanf("%d", &num);  
    extra = num;
     
    /* get last digit of num */
    lastDigit = num %10;
     
    while(num > 10){
        /* Keep on removing the last digit untill 
         num becomes less than 10(single digit) */
        num = num/10;
    } 
    firstDigit = num;
    printf("Sum of first and last digit of %d = %d", extra, firstDigit+lastDigit);  
   
    return 0;  
}
