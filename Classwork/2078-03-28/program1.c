/*
 * WAP to display addresses reserved by different data types
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a;
	float b;
	char c;

	int *ptr_a = &a;
	float *ptr_b = &b;
	char *ptr_c = &c;
		
	printf("Address of a: %p\n", ptr_a);
	printf("Address of b: %p\n", ptr_b);
	printf("Address of c: %p\n", ptr_c);

	return 0;
}
