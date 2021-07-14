/*
 * Program to copy one string to another string 
 * without using string handling functions.
*/
#include <stdio.h>
int main()
{
    char first_input[100], copied_string[100];
    int i;
    printf("Enter string first_input: ");
    fgets(first_input, sizeof(first_input), stdin);
    for (i = 0; first_input[i] != '\0'; ++i)
    {
        copied_string[i] = first_input[i];
    }
    copied_string[i] = '\0';
    printf("String copied_string: %s", copied_string);
    return 0;
}
