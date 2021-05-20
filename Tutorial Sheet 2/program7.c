// Program to use conditional operator
#include <stdio.h>
int main()
{
    float x, y;
    // Declaring two function first_case() and second_case()
    void first_case()
    {
        y = 2.4 * x + 3;
        printf("Y is : %f", y);
    }
    void second_case()
    {
        y = 3 * x - 5;
        printf("Y is : %f", y);
    }
    printf("Enter your x");
    scanf("%f", &x); // taking user input for age variable
    (x <= 2) ? first_case()
             : second_case(); // conditional operator
    return 0;
}
