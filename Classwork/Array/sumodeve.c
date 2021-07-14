#include <stdio.h>
#include <conio.h>

int main()
{
    int in[50];
    int i, n;
    int seve = 0, sod = 0;

    printf("\nHow many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n->\t");
        scanf("%d", &in[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(in[i] % 2 == 0){
            seve += in[i];
        }
        else{
            sod += in[i];
        }
    }

    printf("\nSum of all even = %d", seve);
    printf("\nSum of all odd = %d", sod);
    return 0;
}
