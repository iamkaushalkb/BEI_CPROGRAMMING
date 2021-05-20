#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, c, d, e;
	int sum;
	float average;
	printf("Enter Five numbers : ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	sum = a+b+c+d+e;
	average = (float)sum /5;
	printf("The Average is : %f ", average);
	return 0;
}
