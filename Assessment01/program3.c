// Program to calculate electricity bill
#include<stdio.h>
void bill(float);
main()
{
	float unit;
	printf("enter the unit");
	scanf("%f",&unit);
	bill(unit);
	
}
void bill(float x)
{
	float mon,total;
	if (x<=50)
	{
		mon=x*0.50;
	}
	else if(x<=100)
	{
		mon=x*0.75;
	}
	else if (x<=250)
	{
		mon=x*1.20;
	}
	else
	{
		mon=x*1.50;
	}
	total=mon+mon*0.15;
	printf("total amount is %0.2f",total);
	
}
