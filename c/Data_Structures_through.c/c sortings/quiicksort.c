#include <stdio.h>
void quicksort(int a[], int first, int last);

int main()
{
    int i, a[30], n, first, last;

    printf("enter the array size : ");
    scanf("%d", &n);

    printf("\nenter the array elements to be sorted : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n-1);

    printf("the sorted elements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void quicksort(int a[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && (i < last))
            {
                i++;
            }
            while (a[j] > a[pivot])
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}