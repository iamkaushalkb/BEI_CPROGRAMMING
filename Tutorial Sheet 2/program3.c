// Program to enter marks and calculate percentage
#include <stdio.h>

int main()
{
    float p, c, m, e, b, total, percentage;
    
    // p = physics
    // c = chemistry
    // m = math
    // e = english
    // b = biology

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &p, &c, &m, &e, &b);

    // Calculate total, average and percentage
    total = p + c + m + e + b;
    percentage = (total / 500.0) * 100;

    // Output
    printf("The Total marks   = %.2f/500.00\n", total);
    printf("The Percentage    = %.2f%%", percentage);

    return 0;
}
