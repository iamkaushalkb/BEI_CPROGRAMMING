// Find the Output of program2
#include <Stdio.h>
#include <conio.h>

void second();
void first();

int main(){
    int a=100, b=20, c;
    second();
    c = a/b;
    printf("In main Function: %d \n", c);
    return 0;
}

void second(){
    int a=1000, b=2, c;
    first();
    c = a/b;
    printf("In Second Function: %d \n", c);
    return 0;    
}

void first(){
    int a=100, b=5, c;
    c = a/b;
    printf("In First Function: %d \n", c);
    return 0;    
}