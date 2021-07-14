#include <stdio.h>

int main()
{
    int in[50];
    int i, n;
    int cnt_n =0, cnt_p =0, cnt_o =0;

    printf("\nHow many numbers? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n->\t");
        scanf("%d", &in[i]);
    }

    for (i = 0; i < n; i++)
    {
        //zero
        if(in[i] == 0){
            cnt_o++;
        }
        //negative
        else if(in[i] < 0){
            cnt_n++;
        }
        //positive
        else{
            cnt_p++;
        }
    }

    printf("\nNo. of zeros = %d", cnt_o);
    printf("\nNo. of negative = %d", cnt_n);
    printf("\nNo. of positive = %d", cnt_p);
    return 0;
}
