#include <stdio.h>
int main()
{
    int i, j, m = 0, n = 5;
    for (i = n; i >= 1; i--, m += 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        for (j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        for (j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}