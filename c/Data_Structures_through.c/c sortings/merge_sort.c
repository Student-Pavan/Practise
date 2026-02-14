#include <stdio.h>

void merge(int a[], int low, int mid, int high);

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays
    int left[n1], right[n2];

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = a[mid + 1 + j];
    }
    // Merge the two arrays back into the original array a[]
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int a[10], n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
