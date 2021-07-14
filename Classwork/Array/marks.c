#include <stdio.h>

int main()
{
    int input[50];
    int n, i, j, hold;

    printf("How many students?\t:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\n-> \t");
        scanf("%d", &input[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(input[j] > input[i]){
                hold = input[i];
                input[i] = input[j];
                input[j] = hold;
            }
        }
    }

    printf("\nleast 5 marks are:\n");
    for(i = (n - 5); i < n; i++)
    {
        printf("%d, ", input[i]);
    }
    return 0;
}
