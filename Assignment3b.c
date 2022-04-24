#include <stdio.h>

void merge(int array[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1 = mid - low + 1;
    n2 = high - mid;

    int left[n1], right[n2];
    for (i = 0; i < n1; i++)
    {
        left[i] = array[low + i];
    }
  
    for (i = 0; i < n2; i++)
    {
        right[i] = array[mid + 1 + i];
    }

    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high)/2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);

        merge(array, low, mid, high);
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

    mergeSort(array, 0, size - 1);
    printArray(array, size);

    return 0;
}
