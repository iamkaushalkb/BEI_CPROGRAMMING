// Program to
#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, root1, root2, temp;
    printf("Enter a,b,c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    temp = ((b * b) - (4 * a * c));
    if (temp > 0)
    {
        temp = sqrt(temp);
        root1 = (-b + temp) / (2 * a);
        root2 = (-b - temp) / (2 * a);
        printf("roots are real and distinct\nroot1=%lf\nroot2=%lf", root1, root2);
    }
    else if (temp == 0)
    {
        root1 = -b / (2 * a);
        root2 = root1;
        printf("roots are real and equal\nroot1=%lf\nroot2=%lf", root1, root2);
    }
    else
    {
        temp = -temp;
        temp = (sqrt(temp) / (2 * a));
        root1 = (-b / (2 * a));
        printf("roots are imaginary\n1st root=%lf + i%lf\n", root1, temp);
        printf("2nd root=%lf - i%lf", root1, temp);
    }
}