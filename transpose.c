#include <stdio.h>

void main()
{
    int i, j, row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    
    printf("\nEnter number of columns: ");
    scanf("%d", &column);
    
    int array[row][column];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("\nEnter Elements: ");
            scanf("%d", &array[i][j]);
        }
    }
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
    int transpose[column][row];   
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }
    
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}