#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, n;
    n = sizeof(array)/sizeof(array[0]);
    for (i = n-1; i > -1; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
