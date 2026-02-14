#include <stdio.h>

int Passing_Array_As_Argument(int arr[], int average)
{
    for (int i = 0; i < 3; i++)
    {
        average += arr[i];
    }
    int result = average / 3;
    return result;
}

int main()
{
    int arr[3], result;
    printf("Enter any 3 numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = Passing_Array_As_Argument(arr, 0);
    printf("The average is: %d\n", result);
    return 0;
}
