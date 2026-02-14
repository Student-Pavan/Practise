// average of six subjects whic are entered by user

#include <stdio.h>

int main()
{
    int numbers[10], even[10], odd[10], e = 0, o = 0;

    printf("Enter any 10 numbers to Identify even and odd:\n");
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even[e++] = numbers[i];
        }
        else
            odd[o++] = numbers[i];
    }
    printf("\nEven Numbers :\n");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nodd Numbers :\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
}