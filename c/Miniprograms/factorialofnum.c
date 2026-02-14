#include <stdio.h>

int FindFactorial(int value)
{
    int factorial=1;
    for (int i = 1; i <= value; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int value;
    printf("Enter Number to Find Factorila :");
    scanf("%d",&value);
    printf("Factorial :%d",FindFactorial(value));
}