#include <stdio.h>

int main()
{
    int rowA, columnA, rowB, columnB, i, j, k;

    printf("Enter numberof rows of Matrix A: ");
    scanf("%d", &rowA);

    printf("Enter columnsA: ");
    scanf("%d", &columnA);

    int matrixA[rowA][columnA];

    for (i = 0; i < rowA; i++)
    {
        for (j = 0; j < columnA; j++)
        {
            printf("\nEnter Elements: ");
            scanf("%d", &matrixA[i][j]);
        }
    }

    for (i = 0; i < rowA; i++)
    {
        for (j = 0; j < columnA; j++)
        {
            printf("%d ",matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Enter rowB: ");
    scanf("%d", &rowB);

    printf("Enter columnB: ");
    scanf("%d", &columnB);

    int matrixB[rowB][columnB];

    for (i = 0; i < rowB; i++)
    {
        for (j = 0; j < columnB; j++)
        {
            printf("\nEnter Elements: ");
            scanf("%d",&matrixB[i][j]);
        }
    }

    for (i = 0; i < rowB; i++)
    {
        for (j = 0; j < columnB; j++)
        {
            printf("%d ",matrixB[i][j]);
        }
        printf("\n");
    }

    int matrixMul[rowA][columnB];
    if (columnA == rowB)
    {
        for (i = 0; i < rowA; i++)
        {
            for (j = 0; j < columnB; j++)
            {
                int sum = 0;
                for (k = 0; k < rowB; k++)
                {
                    sum += matrixA[i][k]*matrixB[k][j];
                }
            matrixMul[i][j] = sum;
            }
        }
        
        for (i = 0; i < rowA; i++)
        {
            for (j = 0; j < columnB; j++)
            {
                printf("%d ", matrixMul[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Matrix multiplication not applicable");
    }

    return 0;

}
