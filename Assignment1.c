int main()
{
    int rowdimA, coldimA;
    printf("Enter number of rows and columns for the matrix A \n");
    scanf("%d",&rowdimA);
    scanf("%d",&coldimA);
   
    int matrixA[rowdimA][coldimA];
    int i, j;
    printf("Enter Elements of matrix A \n");
    for (i = 0; i < rowdimA; i++)
    {
        for (j = 0; j < coldimA; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    printf("\n");
    }
   
    int rowdimB, coldimB;
    printf("Enter number of rows and columns for the matrix B \n");
    scanf("%d",&rowdimB);
    scanf("%d",&coldimB);
    int matrixB[rowdimB][coldimB];
   
    printf("Enter Elements of matrix B\n");
    for (i = 0; i < rowdimB; i++)
    {
        for (j = 0; j < coldimB; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    printf("\n");
    }
   
    if ((rowdimA == rowdimB) && (coldimA == coldimB))
   
        int matrixsum[rowdimA][coldimA];
   
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimA; j++)
            {
                matrixsum[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
   
        int matrixsub[rowdimA][coldimA];
   
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimA; j++)
            {
                matrixsub[i][j] = matrixA[i][j] - matrixB[i][j];
            }
        }
       
        printf("Sum of matrix A and B: \n");
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimA; j++)
            {
                printf("%d \t", matrixsum[i][j]);
            }
         printf("\n");
        }
   
        printf("Subtraction of matrix A and B: \n");
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimA; j++)
            {
                printf("%d \t", matrixsub[i][j]);
            }
         printf("\n");
        }
       
    else
    {
        printf("Matrix can't be added or subtracted");
    }
   
    if (coldimA == rowdimB)
    {
   
        int matrixmul[rowdimA][coldimB];
        int k;
        int sum = 0;
   
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimB; j++)
            {
                for (k = 0; k < coldimA; k++)
                {
                    sum = sum + matrixA[i][k]*matrix[k][j];
                } 
            matrixmul[i][j] = sum
            }
        }
       
        printf("Multiplication of matrix \n")
       
        for (i = 0; i < rowdimA; i++)
        {
            for (j = 0; j < coldimB; j++)
            {
                printf("%d \t", matrixmul[i][j]);
            }
        }
    }
}

 


