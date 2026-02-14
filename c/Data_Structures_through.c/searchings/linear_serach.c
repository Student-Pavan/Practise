#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter array elements upto 5 : \n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter element to be searched from array : ");
    scanf("%d", &target);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (target == arr[i])
        {
            printf("the element found in array at index : %d \n element : %d", i, arr[i]);
        }
        else {
            printf("The Element not Found in array!");
        }
    }
}