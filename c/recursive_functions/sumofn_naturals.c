#include <stdio.h>
int sumOfN_Naturals(int num)
{
    if (num < 1)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return ((num) + (sumOfN_Naturals(num - 1))) ;
}

int main()
{
    int Num;
    printf("Enter Number To find Sum Of N series :\n");
    scanf("%d", &Num);

    printf("Fibonacci Of :%d ::-> %d ", Num, sumOfN_Naturals(Num));
}