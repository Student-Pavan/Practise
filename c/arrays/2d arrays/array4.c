#include <stdio.h>
int main()
{
    int i, j, m1[2][2], m2[2][2]={0};
    printf("Enter the Matrix1 Values :");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            m2[i][j] = m1[j][i];
        }
    }
    printf("Original Matrix  :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
}