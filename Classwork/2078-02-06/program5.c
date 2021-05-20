// Program to convert decimal into binary
#include <stdio.h>
int main()
{
    long long decimal, varDecimal, binary;
    int reminder, position = 1;
    binary = 0;
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
    varDecimal = decimal;
    while (varDecimal > 0)
    {
        reminder = varDecimal % 2;
        binary = (reminder * position) + binary;
        varDecimal /= 2;
        position *= 10;
    }
    printf("Decimal number = %lld\n", decimal);
    printf("Binary number = %lld", binary);
    return 0;
}
