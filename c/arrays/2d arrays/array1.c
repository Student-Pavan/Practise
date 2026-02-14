#include <stdio.h>
int main()
{
    int i, j, m1[2][2], m2[2][2], m3[2][2];
    printf("Enter the Matrix1 Values :");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the Matrix2 Values :");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Matrix 1 :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 1 + matrix 2 :\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}