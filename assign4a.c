#include <stdio.h>

int main()
{
    int array[] = {5, 8, 9, 2, 4, 6, 1, 3, 7, 10};
    int i;
    int sum = 0;
    int n = sizeof(array)/sizeof(array[0]);
    for (i = 0; i < n; i++)
    {
        sum += array[i]*array[i];
    }
    printf("\nSum of squares of elements of array: %d", sum);
    return 0;
}