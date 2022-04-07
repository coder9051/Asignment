#include<stdio.h>
int main()
{
    int rowdimA, coldimA, transpose[coldimA][rowdimA];
    printf("Enter number of rows and columns for the matrix A \n");
    scanf("%d",&rowdimA);
    scanf("%d",&coldimA);

    int matrixA[rowdimA][coldimA];
    int i, j;

    printf("Enter Elements of matrix A \n");
    for (i = 0; i < rowdimA; i++)
    {
        for (j = 0; j < coldimA; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    printf("\n");
    }

    int rowdimB, coldimB;
    printf("Enter number of rows and columns for the matrix B \n");
    scanf("%d",&rowdimB);
    scanf("%d",&coldimB);

    int matrixB[rowdimB][coldimB];

    printf("Enter Elements of matrix B\n");
    for (i = 0; i < rowdimB; i++)
    {
        for (j = 0; j < coldimB; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    printf("\n");
    }

    int operation;
    printf("Select number (1, 2, 3, 4) to perform operation \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Transpose \n");

    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
            if ((rowdimA == rowdimB) && (coldimA == coldimB))
            {
                int matrixsum[rowdimA][coldimA];

                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimA; j++)
                    {
                        matrixsum[i][j] = matrixA[i][j] + matrixB[i][j];
                    }
                }

                printf("Sum of matrix A and B: \n");
                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimA; j++)
                    {
                        printf("%d \t", matrixsum[i][j]);
                    }
                printf("\n");
                }
                break;
            }
            else
            {
                printf("Matrix can't be added");
                break;
            }


        case 2:
            if ((rowdimA == rowdimB) && (coldimA == coldimB))
            {
                int matrixsub[rowdimA][coldimA];
                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimA; j++)
                    {
                        matrixsub[i][j] = matrixA[i][j] - matrixB[i][j];
                    }
                }

                printf("Subtraction of matrix A and B: \n");

                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimA; j++)
                    {
                        printf("%d \t", matrixsub[i][j]);
                   }
                printf("\n");
                }
                break;
            }
            else
            {
                printf("Matrix can't be subtracted");
                break;
            }


        case 3:
            if (coldimA == rowdimB)
            {
                int matrixmul[rowdimA][coldimB];
                int k;
                int sum = 0;
                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimB; j++)
                    {
                        for (k = 0; k < coldimA; k++)
                        {
                            sum = sum + matrixA[i][k]*matrixB[k][j];
                        }
                    matrixmul[i][j] = sum;
                    }
                }

                printf("Multiplication of matrix \n");
                for (i = 0; i < rowdimA; i++)
                {
                    for (j = 0; j < coldimB; j++)
                    {
                        printf("%d \t", matrixmul[i][j]);
                    }
                printf("\n");
                }
                break;
            }
            else
            {
                printf("Matrix Multiplication conditions can't be satisfied");
                break;
            }

        case 4:

            for (i = 0; i < rowdimA; i++)
            {
                for (j = 0; j < coldimA; j++)
                {
                    transpose[j][i] = matrixA[i][j];
                }
            }

            for (i = 0; i < coldimA; i++)
            {
                for (j = 0; j < rowdimA; j++)
                {
                    printf("%d \t", transpose[i][j]);
                }
            printf("\n");
            }
            break;

        default:
        {
            printf("INVALID INPUT");
        }
    }


}



 


