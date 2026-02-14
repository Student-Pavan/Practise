#include <stdio.h>
int decimalToBinaryconvert(int decimal)
{
    int binary = 0;
    int power = 1;
    while (decimal > 0)
    {
        int reminder = decimal % 2;
        decimal /= 2;
        binary += reminder * power;
        power = power * 10;
    }
    return binary;
}

int main()
{

    int decimal = 6;
    printf("%d", decimalToBinaryconvert(decimal));
}