#include <stdio.h>
int main()
{
    int i, low, high, mid, num, search, a[30];

    printf("enter the array size :");
    scanf("%d", &num);

    printf("\nenetr the array elements : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nenter the element to be searched in above array :");
    scanf("%d", &search);

    low = 0;
    high = num - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == search)
        {
            printf("the element : %d is present at location : %d", search, mid + 1);
            break;
        }
        else if (  search > a[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    if (low > high)

        printf("the element is not found in array !");
}