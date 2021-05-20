// Program to find Fibonacci Series upto n terms
#include<stdio.h>
int main()
{
    int count, phase1 = 0, phase2 = 1, phase_next, i;
 
    printf("Enter the number of terms:\n");
    scanf("%d",&count);
 
    printf("First %d terms of Fibonacci series:\n",count);
    for ( i = 0 ; i < count ; i++ )
    {
       if ( i <= 1 )
          phase_next = i;
       else
       {
          phase_next = phase1 + phase2;
          phase1 = phase2;
          phase2 = phase_next;
       }
       printf("%d\n",phase_next);
    }
 
    return 0;
}
