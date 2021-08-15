/*
 * Create a structure named company which has name, address, phone and 
 * noOfEmployee as member variables. 
 * Read name of company, its address, phone and noOfEmployee.
 * Finally display these
members’
*/
#include <stdio.h>
#define SIZE 100
struct company
{
    int id, no_of_employees;
    char name[SIZE], address[SIZE], phone[SIZE];
} company[SIZE], t;

int main()
{
    int i, j, n;
    printf("Enter the no of companies\n");
    scanf("%d", &n);
    printf("enter companyent info as id , name , address, phone, no_of_employees\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s %s %d", &company[i].id, company[i].name, &company[i].address, &company[i].phone, &company[i].no_of_employees);
    }
    printf("\nId\tNAME\t\tAddress\t\tPhone\t\tNo of Employee\n");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t%s\t%s\t%s\t%d\n", company[i].id, company[i].name, company[i].address, &company[i].phone, &company[i].no_of_employees);
    }
    return 0;
}
