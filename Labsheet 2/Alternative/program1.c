//PROGRAM OF REVERS THREE DIGIT NUMBER WITHOUT LOOP
#include <stdio.h>
#include <conio.h>
	
void main()
{
	int num, rev;
	printf("ENTER THE THREE DIGIT NUMBER:- ");
	scanf("%d",&num);
	printf("AFTER REVERSE RESULT IS:- ");
	rev = num%10;
	printf("%d",rev);
	rev = num/10;
	rev = rev%10;
	printf("%d",rev);
	rev = num/10;
	rev = rev/10;
	printf("%d",rev);
	getch();
}
	
