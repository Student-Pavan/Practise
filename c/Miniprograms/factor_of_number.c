#include <stdio.h>

void findFactor(int value)
{
    int i = 2;
    while (i <= value)
    {
        if (value % i == 0)
        {
            printf("%d ",i);
        }
        i++;
    }
    // return i;
}
int main()
{
    int number;
    printf("Enter Number To Find Factorial :");
    scanf("%d", &number);
    printf("The Factorials of Above number are :");
    findFactor(number);
}