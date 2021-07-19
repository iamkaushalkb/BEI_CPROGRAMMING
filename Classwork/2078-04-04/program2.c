/* 
 * WAP to convert uppercase to lowercase and vice versa using pointer
 * Use function with pass by reference
*/
#include <stdio.h>
#include <string.h>
void conversion(char *);
int main()
{
    char input;
    printf("Enter the charcter for conversion:\n");
    scanf("%c", &input);
    conversion(&input);
    printf("The corresponding character is:\t%c", input);
    getch();
    return 0;
}

void conversion(char *c)
{
    if (*c >= 97 && *c <= 122)
    {
        *c = *c - 32;
    }
    else if (*c >= 65 && *c <= 90)
    {
        *c = *c + 32;
    }
}