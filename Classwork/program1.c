// Program to convert temperature centrugrade to fahrenheit
/*
(c-0)/100 = (f-32)/180 
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}
