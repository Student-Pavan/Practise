#include <stdio.h>
int main()
{
    int a[20], number, i, j;
    printf("enter the range of elements : ");
    scanf("%d", &number);

    printf("\nthe range of elements : %d", number);

    printf("\nenter the elements to be sorted : ");
    for (i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nthe elements  before  sorted : ");
    for (i = 0; i < number; i++)
    {
        printf("%d", a[i]);
    }
    // logic sorting
    for (i = 0; i < number - 1; i++)
    {
        for (j = 0; j < number - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap;
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("\nthe elements after sorting : ");
    for (i = 0; i < number; i++)
    {
        printf("%d", a[i]);
    }
}