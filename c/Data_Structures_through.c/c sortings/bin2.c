#include <stdio.h>

int main() {
    int size = 10;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 50; // The number we want to find
    
    int left = 0;
    int right = size - 1;
    int result = -1; // Initialize result to -1 (not found)

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Update result if target is found
            break;
        }
        
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1)
        printf("Number %d found at index %d.\n", target, result);
    else
        printf("Number %d not found.\n", target);

    return 0;
}