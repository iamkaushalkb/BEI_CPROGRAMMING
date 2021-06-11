// Program to generate and print all the prime numbers between the range specified by users.
#include <stdio.h>

int main() {
   int numA, numB, i, temp;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &numA, &numB);
   printf("Prime numbers between %d and %d are: ", numA, numB);
   while (numA < numB) {
      temp = 0;
      if (numA <= 1) {
         ++numA;
         continue;
      }
      for (i = 2; i <= numA / 2; ++i) {

         if (numA % i == 0) {
            temp = 1;
            break;
         }
      }

      if (temp == 0)
         printf("%d ", numA);
      ++numA;
   }
   return 0;
}
