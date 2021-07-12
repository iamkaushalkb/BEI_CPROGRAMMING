/*
 * WAP to read name of five persons and sort them in ascending order
*/
#include <stdio.h>
#include <string.h>
#define ALPHABET 25
int main()
{
    char name[ALPHABET][ALPHABET], temp[ALPHABET];
    int i, j, size;
    printf("How many names do you wana sort? :\n");
    scanf("%d", &size);
    printf("Enter your names :\n");
    for (i = 0; i <= size; i++)
    {
        gets(name[i]);
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (strcmp(name[j - 1], name[j]) > 0)
            {
                strcpy(temp, name[j - 1]);
                strcpy(name[j - 1], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nNames in Alphabetical Order : \n");
    for (i = 0; i <= size; i++)
    {
        puts(name[i]);
    }
    return 0;
}
