// Program to ask gender, marital_status and calculate tax
// as per condition
#include <stdio.h>
int main()
{
    char gender, marital_status;
    float income, tax;
    // Selecting gender as male->m and female->f
    printf("Enter your Gender (male->m/female->f) : \n");
    scanf("%c", &gender);
    // Accepting incopme as income
    printf("Enter yearly income : \n");
    scanf("%f", &income);
    // Selecting gender as married->M and unmaried->U
    printf("Enter Marital Status as (Married->M/Unmarried->U) : \n");
    scanf("% c", &marital_status);
    fflush(stdin);
    marital_status = getchar();
    // if gender is male
    if (gender == 'm')
    {
        // if marital_status is married
        if (marital_status == 'M')
        {
            // if income is greater or eqauls to 400000
            if (income <= 400000)
            {
                tax = 0.01 * income;
                printf("%.2f \n", tax);
            }
            // if income is less or eqauls to 400000
            else
            {
                tax = 0.01 * 400000 + (income - 400000) * 0.15;
                printf("%.2f \n", tax);
            }
        }
        // if marital_status is unmarried
        else if (marital_status == 'U')
        {
            // if income is greater or eqauls to 450000
            if (income <= 450000)
            {
                tax = 0.01 * income;
                printf("%.2f \n", tax);
            }
            // if income is less or eqauls to 450000
            else
            {
                tax = 0.01 * 450000 + (income - 450000) * 0.15;
                printf("%.2f \n", tax);
            }
        }
    }
    // if gender is male
    else if (gender == 'f')
    {
        // if marital_status is married
        if (marital_status == 'M')
        {
            // if income is greater or eqauls to 450000
            if (income <= 450000)
            {
                tax = 0.01 * income;
                printf("%.2f \n", tax);
            }
            // if income is less or eqauls to 450000
            else
            {
                tax = 0.01 * 450000 + (income - 450000) * 0.15;
                printf("%.2f \n", tax);
            }
        }
        // if marital_status is unmarried
        else if (marital_status == 'U')
        {
            // if income is greater or eqauls to 500000
            if (income <= 500000)
            {
                tax = 0.01 * income;
                printf("%.2f \n", tax);
            }
            // if income is less or eqauls to 500000
            else
            {
                tax = 0.01 * 500000 + (income - 500000) * 0.15;
                printf("%.2f \n", tax);
            }
        }
    }
    return 0;
}
