/*
 * Write a program to create a structure named employee, which has name, 
 * address, phone as member variables and 
 * sort the structure on the basis of employee name in ascending order and 
 * display the results using functions as read(), sort(), display().
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100
struct employee_details
{
    int id;
    char name[SIZE], address[SIZE], phone[SIZE], tname[SIZE];
};
int read(int n, struct employee_details employee[SIZE]);
int sort(int n, struct employee_details employee[SIZE]);
int display(int n, struct employee_details employee[SIZE]);
int main()
{
    struct employee_details employee[SIZE];
    int i, j, n;
    printf("Enter the no of companies\n");
    scanf("%d", &n);
    read(n, employee);
    sort(n, employee);
    display(n, employee);
    return 0;
}
int read(int n, struct employee_details employee[SIZE])
{
    int i;
    printf("enter employeeent info as id , name , address, phone\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s %s", &employee[i].id, employee[i].name, &employee[i].address, &employee[i].phone);
        strcpy(employee[i].tname, employee[i].name);
    }
}
int sort(int n, struct employee_details employee[SIZE])
{
    int i, j;
    char temp[SIZE];
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
}
int display(int n, struct employee_details employee[SIZE])
{
    int i;
    printf("\n");
    printf("\nId\t\tNAME\t\tAddress\t\tPhone\n");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\n", employee[i].id, employee[i].name, employee[i].address, &employee[i].phone);
    }
}
