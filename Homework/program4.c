// Program to determine vowel letter or not
#include <stdio.h>

int main()
{
         char ch;
         printf(" Enter any character: ");
         scanf("%c", &ch);
         switch (ch)
         {
                  case 'a':
                  case 'A':
                  printf(" %c is a vowel", ch);
                  break; 

                  case 'e':
                  case 'E':
                  printf(" %c is a vowel", ch);
                  break;

                  case 'i':
                  case 'I':
                  printf(" %c is a vowel", ch);
                  break;   

                  case 'o':
                  case 'O':
                  printf(" %c is a vowel", ch);
                  break;

                  case 'u':
                  case 'U':
                  printf(" %c is a vowel", ch);
                  break;

                  default:
                  printf(" %c is not a vowel", ch);
         }
         return 0;
}
