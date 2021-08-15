/*
 * Write a program to create a structure named employee, which has name, 
 * address, phone as member variables and 
 * sort the structure on the basis of employee name in ascending order and 
 * display the results.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100
struct employee
{
    int id;
    char name[SIZE], address[SIZE], phone[SIZE], tname[SIZE];
} employee[SIZE], t;

int main()
{
    int i, j, n;
    printf("Enter the no of companies\n");
    scanf("%d", &n);
    printf("enter employeeent info as id , name , address, phone\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s %s", &employee[i].id, employee[i].name, &employee[i].address, &employee[i].phone);
        strcpy(employee[i].tname, employee[i].name);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(employee[i].name, employee[j].name) > 0)
            {
                strcpy(temp, employee[i].name);
                strcpy(employee[i].name, employee[j].name);
                strcpy(employee[j].name, temp);
            }
        }
    }
    printf("\n");
    printf("\nId\t\tNAME\t\tAddress\t\tPhone\n");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\n", employee[i].id, employee[i].name, employee[i].address, &employee[i].phone);
    }
    return 0;
}
