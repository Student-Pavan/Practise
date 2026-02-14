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

    // Allocate memory using calloc
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    else
    {
        printf("Memory successfully allocated using calloc.\n");

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

        // Example of reallocating memory (e.g., increasing size by 2 more elements)
        int new_size = n + 2;
        int *temp = (int *)realloc(arr, new_size * sizeof(int));

        if (temp == NULL)
        {
            printf("\nMemory reallocation failed!\n");
            free(arr); // Free original memory
            return 1;
        }
        else
        {
            arr = temp; // Point to the newly allocated memory
            printf("\nMemory successfully reallocated for %d elements.\n", new_size);

            // Input new elements
            printf("Enter 2 more elements:\n");
            for (int i = n; i < new_size; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("The updated array elements are:\n");
            for (int i = 0; i < new_size; i++)
            {
                printf("%d ", arr[i]);
            }
        }

        printf("\n");

        // Free dynamically allocated memory
        free(arr);
    }

    return 0;
}
