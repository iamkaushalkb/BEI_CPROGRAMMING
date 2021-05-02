// Program to find the area of circle having radius 5
#include <stdio.h>
#include <conio.h>
const float PI = 3.16;

int main(){
    // Declaring th variable r radius which is 5 also declaring area
    int r = 5;
    int area;
    // doing calculation by variables
    area = PI * r * r;
    printf("The Area is : %d", area);
    return 0;
}