/*
  Program to print following pattern
  A
  ab
  ABC
  abcd
  ABCDE
  abcdef
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char capital_letter[10];
    char alphabet[10] = "ABCDEF";
    int i, j;
    printf("The word is %s\n", alphabet);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("\t%c", alphabet[j]);
            }
            else
                printf("\t%c", tolower(alphabet[j]));
        }
        printf("\n");
    }
    return 0;
}
