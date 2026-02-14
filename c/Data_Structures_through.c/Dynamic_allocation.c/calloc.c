#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int *arr = (int *)calloc(n , sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Is Not Allocated");
        return 1;
    }
    else
    {
        printf("Memory Is Allocated\n");
        printf("Enter %d array elements:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("The array elements are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    }
}