// Program to determine perfect Number
# include <stdio.h>   

int main()   
{   
 int i, num, Sum = 0 ;   
  
 printf("\n Please Enter any Number \n") ;   
 scanf("%d", &num) ;   
 
 for(i = 1 ; i < num ; i++)   
  {   
   if(num % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == num)   
    printf("\n %d is a Perfect Number", num) ;   
 else   
    printf("\n%d is not the Perfect Number", num) ;   

return 0 ;   
}
