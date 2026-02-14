#include <stdio.h>
void table(int, int);
void main()
{

    int number, range;

    printf("Enter the Number for Which Ypu want multiplication Table :");
    scanf("%d", &number);

    printf("you want multiplication Till Range : ");
    scanf("%d", &range);
    table(number, range);
}

void table(int number, int range)
{
    int i;
    for (i = 1; i <= range; i++)
    {
        printf("%d * %d = %d \n", number, i, (number * i));
    }
}