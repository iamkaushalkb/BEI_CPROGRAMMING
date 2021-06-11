/*
  Program to display following Pattern
   567898765
    4567654 
     34543  
      232   
       1   
*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        k = 6;
        for (j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                printf("\t%d", k - i);
                j < 5 ? k++ : k--;
            }
            else
                printf("\t");
        }
        printf("\n");
    }
    return 0;
}
