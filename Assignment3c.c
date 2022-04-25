#include <stdio.h>

int partition(int array[], int low, int high)
{
    int pivot, leftIndex, i, temp;
    pivot = array[high];
  
    leftIndex = -1;
    for (i = 0; i < high; i++)
    {
        if (array[i] <= pivot)
        {
            leftIndex++;
            temp = array[leftIndex];
            array[leftIndex] = array[i];
            array[i] = temp;
        }
    }

    temp = array[leftIndex+1];
    array[leftIndex+1] = array[high];
    array[high] = temp;

    return (leftIndex + 1);   

}

void quickSort(int array[], int low, int high)
{
    int index;
    if (low < high)
    {
        index = partition(array, low, high);

        quickSort(array, low, index-1);
        quickSort(array, index+1, high);
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int size, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &array[i]);
    }

    quickSort(array, 0, size - 1);
    printArray(array, size);

    return 0;
}
