// Program to find cubes and squares of first 10 natural numbers
#include <stdio.h>
 
int main()
{
    int i;
    printf("No|   Square|    Cube\n");
    for(i=1;i<=10;i++)
    {
        printf("%d|\t %ld|\t %ld|\n",i,(i*i),(i*i*i));
    }
    return 0;
}
