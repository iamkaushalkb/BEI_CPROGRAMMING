#include <stdio.h>
#include <conio.h>

int main()
{
	int x;
	int y;
	
	int sum;
	int diff;
	int prod;
	int div;
	
	printf	("Please enter:\n");
	
	printf	("\nx\t=");
	scanf	("%d", &x);
	printf	("\ny\t=");
	scanf	("%d", &y);
	
	sum	= y + 3;
	diff= y - 2;
	prod= y * 5;
	div	= x / y;
	
	printf("\n\tx\t|\ty\t|\tExpresion\t|results");
	printf("\n\t%d\t|\t%d\t|\tx = y + 3\t|x = %d", x, y, sum);
	printf("\n\t%d\t|\t%d\t|\tx = y - 2\t|x = %d", x, y, diff);
	printf("\n\t%d\t|\t%d\t|\tx = y * 5\t|x = %d", x, y, prod);
	printf("\n\t%d\t|\t%d\t|\tx = x / y\t|x = %d", x, y, div);
	return 0;
}