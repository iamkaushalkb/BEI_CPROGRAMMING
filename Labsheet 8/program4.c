#include <stdio.h>
int reverse(int *p, int n); 
int main()
{
    int a[50], n, i;
    printf("Enter no of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i); 
    }
    reverse(&a, n); 
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
    return 0;
}
int reverse(int *p, int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + n - 1 - i);
        *(p + n - 1 - i) = temp;
    }
}
