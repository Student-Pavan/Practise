#include <stdio.h>
int findFibonacci(int value)
{
    if (value <= 1)
    {
        return value;
    }
    return findFibonacci(value - 1) + findFibonacci(value - 2);
}
int main()
{
    int value;
    printf("Enter Num To Find N Fibonacii Series :");
    scanf("%d", &value);

    printf("Fibonacci Series up to %d terms: ", value);
    for (int i = 0; i <= value; i++)
    {
        printf("%d ", findFibonacci(i));
    }
}