/*
 * Write a program to concatenate two string 
 * using user defined functions concatenate () 
 * without using string handling functions.
*/
#include <stdio.h>
#include <string.h>
void concatenate(char[], char[]);
int main()
{
    char first_input[50], second_input[30];
    printf("\nEnter First String :");
    gets(first_input);
    printf("\nEnter Second String :");
    gets(second_input);
    concatenate(first_input, second_input);
    printf("Concatenate string is :%s\n", first_input);
    return 0;
}
void concatenate(char first_input[], char second_input[])
{
    int i, j;
    i = strlen(first_input);
    for (j = 0; second_input[j] != '\0'; i++, j++)
    {
        first_input[i] = second_input[j];
    }
    first_input[i] = '\0';
}
