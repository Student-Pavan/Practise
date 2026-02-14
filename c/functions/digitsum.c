#include <stdio.h>
int digisum(int num)
{

    int digisum = 0;

    while (num > 0)
    {
        int lastdigi = num % 10;
        num /= 10;
        digisum += lastdigi;
    }
    return digisum;
}
int main()
{

    printf("Result= %d", digisum(1234));
}