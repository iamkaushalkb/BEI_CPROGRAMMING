/*
Program to
    1
   12
  123
 1234
12345
print above pattern
*/
#include <stdio.h>

int main()
{
    int i, j, k, l = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }

        for (k = 1; k <= l; k++)
        {
            printf("%d", k);
        }
        l = l + 1;
        printf("\n");
    }
    return 0;
}
