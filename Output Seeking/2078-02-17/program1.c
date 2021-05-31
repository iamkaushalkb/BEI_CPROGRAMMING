// Find the Output of program1
#include <stdio.h>
#include <conio.h>

int a=10;

void fun(){
    a=20;
    printf("\t %d", a++);
}

int main(){
    printf("Value of main function is : \t %d", a);
    fun();
    printf("\t %d",a);
    return 0;
}