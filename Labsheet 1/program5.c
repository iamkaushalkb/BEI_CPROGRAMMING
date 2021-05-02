// Program to find the area of eclipse having minor axis 4 and major axis 6 
#include <stdio.h>
#include <conio.h>
const float PI = 3.14;

int main(){
    // Declaring th variable a and b which is 4 and 6 respectivly also declaring area
    int a = 4; // Minor Axis
    int b = 6; // Major Axis
    int area;
    // doing calculation by variables
    area = PI * a * b;
    printf("The Area is : %d", area);
    return 0;
}