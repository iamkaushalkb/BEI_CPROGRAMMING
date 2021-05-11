#include <stdio.h>

int main(void) {
int Per;
	printf("Enter Per : ");
	scanf("%d",&Per);
	if(Per >= 80)
		printf("\nResult is Distinction");
	else if (Per < 80 && Per >= 65)
		printf("\nResult is 1st Division");
	else if (Per < 65 && Per >= 40)
		printf("\nResult is Pass");
	else
	    printf("\nResult is Fail");
	return 0;
}
