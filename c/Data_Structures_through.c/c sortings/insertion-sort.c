#include <stdio.h>
int main()
{
    int number, i, j;
    int array[20];
    int key;
    printf("\nenetr the array size : ");
    scanf("%d", &number);
    printf("\nenter the elemaents of array : \n");
    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nenetred elements are : ");
    for (i = 0; i < number; i++)
    {
        printf("%d", array[i]);
        printf("\t");
    }

    // logic for sorting
    for (i = 0; i < number; i++)
    {
        key = array[i];
        j = i - 1;

        while ((j >= 0) && key < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    printf("\nsorted elements are : \n");
    for (i = 0; i < number; i++)
    {
        printf("%d", array[i]);
        printf("\t");
    }
}
