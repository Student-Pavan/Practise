#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 array elements in ascending order:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    int st = 0, end = (sizeof(arr) / sizeof(arr[0])) - 1;
    int mid;
    int found = 0; // Flag to indicate if the element was found

    while (st <= end)
    {
        mid = st + (end - st) / 2; // Prevent overflow

        if (arr[mid] == target)
        {
            printf("The element was found at index: %d\nElement: %d\n", mid, arr[mid]);
            found = 1; // Element found
            break;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1; // Search in the left half
        }
        else
        {
            st = mid + 1; // Search in the right half
        }
    }

    if (!found)
    {
        printf("The element was not found in the array!\n");
    }

    return 0;
}
