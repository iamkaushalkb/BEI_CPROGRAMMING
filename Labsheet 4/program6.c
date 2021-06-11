/*
Program to calculate and print the terms of following series up to nth terms.
-10 -12 -14 -18 -26 -42 -74 ...... .......
*/
#include <stdio.h>
#include <math.h>

int main (){
	int t=-10,check=2;
	int n;
	printf("How many terms? :");
	scanf("%d", &n);
	int i;
	for (i=1; i<=n; i++)
	{
		printf("%d", t);
		t=t-check;
		check=pow(2, i);
	}
	return 0;
}
