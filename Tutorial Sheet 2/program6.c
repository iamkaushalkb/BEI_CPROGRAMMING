// Program to calculate net salary
#include <stdio.h> 
int main()
{
    float total_salary, medical_allowance, house_rent, provident_fund, net_salary;

    // Taking a salary as input
    printf("Enter your Salary : ");
    scanf("%f", &total_salary);

    // Calculations 
    medical_allowance = 0.1 * total_salary;
    printf("Medical Allowance is : %f\n",medical_allowance);

    house_rent = 0.08 * total_salary ;
    printf("House rent is : %f\n",house_rent);
    
    provident_fund = 0.1 * total_salary;
    printf("Provident Fund is : %f\n",provident_fund);

    // for net_salary
    net_salary = (total_salary + medical_allowance + house_rent )- provident_fund;
    printf("The Net Salary is %f", net_salary);
    return 0;
}
