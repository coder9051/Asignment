#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, n;
    n = sizeof(array)/sizeof(array[0]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("%d ", array[j]);
        }
        printf("\n");
    }
    return 0;
}