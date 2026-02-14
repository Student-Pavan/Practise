// The number has 3 digits, so we raise each digit to the power of 3
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include <stdio.h>
#include <math.h>
int main()
{
    int Originalnumber;
    printf("Enter the number to find its amstrong number: ");
    scanf("%d", &Originalnumber);
    int lastdigit, ModifiedNumber = Originalnumber, k = 0, check = 0;
    while (ModifiedNumber != 0)
    {

        ModifiedNumber /= 10;
        k++;
    }
    ModifiedNumber = Originalnumber;

    while (ModifiedNumber != 0)
    {
        lastdigit = ModifiedNumber % 10;
        int power = 1;
        for (int i = 0; i < k; i++)
        {
            power *= lastdigit;
        }

        check += power;
        ModifiedNumber /= 10;
    }

    if (check == Originalnumber)
    {
        printf("Given Number Is armstrong Number");
    }
    else
        printf("Given number Is Not an armstrong Number");
}