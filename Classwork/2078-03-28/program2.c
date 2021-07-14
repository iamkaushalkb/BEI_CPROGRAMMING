/*
 * WAP to define a pointer variable of 
 * type int to store memory address of 
 * another integer variable.
 * Display content of integer variable using pointer notation.
*/
#include <stdio.h>
int main(void)
{	
	int *num_a;
    int number_a;
    printf("Enter a Number : ");
    scanf("%d", &number_a);
	num_a = &number_a;		
	printf("The value of num = %d\n", *num_a);
	return 0;
}
