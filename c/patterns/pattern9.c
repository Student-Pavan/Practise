#include <stdio.h>
int main()
{
    int n = 5, i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i+1; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n-i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
}