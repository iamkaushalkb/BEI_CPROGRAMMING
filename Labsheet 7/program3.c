/*
 * Write a program to read a sentence 
 * and count the number of characters & words in that sentence.
*/
#include <stdio.h>
int main()
{
    char string_input[200];
    int word, ch;
    ch = 0;
    word = 1;
    printf("Enter string :\n");
    gets(string_input);
    for (int i = 0; string_input[i] != '\0'; i++)
    {
        if (string_input[i] == '\n')
        {
            word++;
        }
        else
        {
            if (string_input[i] == ' ' || string_input[i] == '\t')
            {
                word++;
                ch++;
            }
            else
            {
                ch;
            }
        }
    }
    printf("\nCharacter counts = %d\n", ch);
    printf("Word counts = %d\n", word);
    return 0;
}
