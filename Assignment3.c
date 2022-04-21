
#include <stdio.h>

void bubbleSort(int n, int array[])
{
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i -1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSort( int array[], int n)
{
    int i, j, minIndex, temp;
    
    for (i = 0; i < n; i++)
    {
        minIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
    
}
void insertionSort(int array[], int n)
{
    int i, j, key;
    
    for(i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        
        while (j >= 0 && key < array[j])
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ",array[i]);
}

int main()
{
    int count, i, method;
    printf("Enter number of elements in array: ");
    scanf("%d", &count);
    
    int array[count];
    for (i = 0; i < count; i++)
    {
        printf("\nEnter the Number: ");
        scanf("%d",&array[i]);
        printf("\n");
    }
    
    printf("\n1.Insertion Sort");
    printf("\n2.Selection Sort");
    printf("\n3.Bubble Sort");
    printf("\nSelect the method to be used (1/2/3): ");
    
    scanf("\n%d",&method);
    
    switch (method)
    {
        case 1:
            insertionSort(array, count);
            printArray(array, count);
            break;
            
        case 2:
            selectionSort(array, count);
            printArray(array, count);
            break;
            
        case 3:
            bubbleSort(count, array);
            printArray(array, count);
            break;
            
        default:
            printf("Invalid input");
            break;
    }
    
    return 0;
    
}
