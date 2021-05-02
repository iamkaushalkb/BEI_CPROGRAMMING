/*  Program to find the simple interest  having priciple 4000 time 2 and rate 5.5 */
#include <stdio.h>
#include <conio.h>

int main(){
    // Declaring th variable a and b which is 4 and 6 respectivly also declaring area
    int p = 4000; // Principle
    int t = 6; // Time
    int r = 5.5; // Rate
    int i; // Simple Interest
    // doing calculation by variables
    i = (p*t*r)/100;
    printf("The Simple Interest is : %d", i);
    return 0;
}