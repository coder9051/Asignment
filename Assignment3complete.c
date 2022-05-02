#include <stdio.h>
void bubbleSort(int n, float array[])
{
    int i, j;
    float temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i -1; j++)
        {
            if (array[j] < array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSort( float array[], int n)
{
    int i, j, maxIndex;
    float temp;

    for (i = 0; i < n; i++)
    {
        maxIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (array[j] > array[maxIndex])
            {
                maxIndex = j;
            }
        }
        temp = array[i];
        array[i] = array[maxIndex];
        array[maxIndex] = temp;
    }
}

void insertionSort(float array[], int n)
{
    int i, j;
    float key;

    for(i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && key > array[j])
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

void merge(float array[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1 = mid - low + 1;
    n2 = high - mid;

    float left[n1], right[n2];

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
        if (left[i] >= right[j])
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

void mergeSort(float array[], int low, int high)
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

int partition(float array[], int low, int high)
{
    int leftIndex, i;
    float pivot, temp;
    pivot = array[high];

    leftIndex = -1;
    for (i = 0; i < high; i++)
    {
        if (array[i] >= pivot)
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

void quickSort(float array[], int low, int high)
{
    int index;
    if (low < high)
    {
        index = partition(array, low, high);

        quickSort(array, low, index-1);
        quickSort(array, index+1, high);
    }
}

void printArray(float array[], int n)
{
    int i;
    if (n > 5)
    {
        printf("Top 5 CGPA of students are as follows: ");
        printf("\n");
        for (i = 0; i < 5; i++)
            printf("%.2f ",array[i]);
    }

    else
    {
        printf("Top CGPA of Students are as follows: ");
        printf("\n");
        for (i = 0; i < n; i++)
            printf("%.2f ",array[i]);
    }
}

int main()
{
    int count, i, method;
    printf("Enter number of students: ");
    scanf("%d", &count);
    printf("\n");

    float array[count];
    for (i = 0; i < count; i++)
    {
        printf("Enter the CGPA of student: ");
        scanf("%f",&array[i]);
        printf("\n");
    }

    printf("\n1.Insertion Sort");
    printf("\n2.Selection Sort");
    printf("\n3.Bubble Sort");
    printf("\n4.Merge Sort");
    printf("\n5.Quick Sort");
    printf("\nSelect the method to be used (1/2/3/4/5): ");

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

        case 4:
            mergeSort(array, 0, count - 1);
            printArray(array, count);
            break;

        case 5:
            quickSort(array, 0, count-1);
            printArray(array, count);
            break;

        default:
            printf("Invalid input");
            break;
    }
    return 0;

}
