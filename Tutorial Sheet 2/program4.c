// Program to convert paisa into rs
#include <stdio.h>
#include <conio.h>
int main()
{
	int paisa, ruppe, rp;
	printf("Enter Cost of Pen in Paisa : ");
	scanf("%d", &paisa);
	ruppe = paisa / 100;
	rp = paisa % 100;
	printf("The Cost  is %d Paisa & %d Rupees", rp, ruppe);

	return 0;
}
